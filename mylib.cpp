#include <iostream>

#define SWIPEINT(a, b) temp = a;\
a = b;\
b = temp;\

namespace MyLib 
{

	void arrayInit(float* arr, int size)
	{
		srand(static_cast<uint16_t>(time(0)));
		for (int i = 0; i < size; i++)
		{
			arr[i] = static_cast<float>(rand() % 100 - 50);
		}
	}

	void arrayPrint(float* arr, int size)
	{
		std::cout << "Your array is:\n";
		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << " ";
	}

	void arrayPrint(int* arr, int size)
	{
		std::cout << "\nResult array is:\n";
		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << " ";
	}

	void analiseArray(float* arr, int size)
	{
		int negative = 0, positive = 0;
		for (int i = 0; i < size; i++)
		{
			if (arr[i] < 0) negative++;
			else if (arr[i] > 0) positive++;
		}

		std::cout << "\nNumbers below zero: " << negative << "\n" << "Numbers above zero: " << positive;
	}

	void arrayInputInit(int* arr, int size)
	{
		std::cout << "\n";
		for (int i = 0; i < size; i++)
		{
			std::cout << "Enter element " << i+1 << ": ";
			std::cin >> arr[i];
		}
	}

	void arraySort(int* arr, int size)
	{
		
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size - 1; j++)
			{
				int temp = 0;
				if (arr[j] > arr[j + 1])
				{
					SWIPEINT(arr[j], arr[j + 1]);
				}
			}
		}
	}

}

