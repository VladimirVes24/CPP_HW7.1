

#include <iostream>
#include <string>
#include <fstream>
#include "mylib.h"



#define CHECK(num, max) if ( (num >= 0) && (num < max) ) std::cout << "\n\nTask 2:" << "True\n"; \
                        else std::cout << "\n\nTask 2: " << "False\n";

#define SIZE 5

#pragma pack(push,1)
struct EMPLOYEE {
    std::string name;
    std::string positionName;
    uint16_t age = 0;
    uint32_t salary = 0;
    uint16_t yearsWorked = 0;
    bool markedForDismissal = false;
    std::string dismissalReason;

};
#pragma pack(pop)

int main()
{
    const int size = 5;
    float arr[size];

    MyLib::arrayInit(arr, size);
    MyLib::arrayPrint(arr, size);
    MyLib::analiseArray(arr, size);


    //Task 2
    CHECK(2,10);


    //Task 3
    int arr2[SIZE];
    MyLib::arrayInputInit(arr2, SIZE);
    MyLib::arrayPrint(arr2, SIZE);
    MyLib::arraySort(arr2, SIZE);
    MyLib::arrayPrint(arr2, SIZE);


 

    //Task 4

    EMPLOYEE* john = new EMPLOYEE;
    john->name = "Jonh Denver";
    john->positionName = "CEO";
    john->age = 42;
    john->salary = 319000;
    john->yearsWorked = 7;
    john->markedForDismissal = true;
    john->dismissalReason = "Smokes cannabis in working hours";

    std::cout << "\n\nEmployee data:\n";
    std::cout << "Name: " << john->name << "\n";
    std::cout << "Position: " << john->positionName << "\n";
    std::cout << "Age: " << john->age << "\n";
    std::cout << "Salary: " << john->salary << "\n";
    std::cout << "Years worked in company: " << john->yearsWorked << "\n";
    if (john->markedForDismissal)
    {
        std::cout << "Should be dismissed: Yes\n" << "Reason for dismissal: " << john->dismissalReason << "\n";
    }
    else std::cout << "Should be dismissed: No\n";

    std::cout << "\nSize of struct: " << sizeof(john) << "\n";

    std::ofstream resultFile("Result");
    resultFile.clear();
    resultFile << john->name <<"\n";
    resultFile << john->positionName << "\n";
    resultFile << john->age << "\n";
    resultFile << john->salary << "\n";
    resultFile << john->yearsWorked << "\n";
    resultFile << john->dismissalReason << "\n";


    return 0;
}


