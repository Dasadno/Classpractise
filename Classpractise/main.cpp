#include <vector>
#include <cstdlib>
#include <iostream>
#include <Windows.h>


template <typename arr> arr* add_product(int idorder, int* idarr, int arrsize);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	unsigned int arrsize = 3;


	int* arr1 = new int[arrsize];
	arr1[0] = 1;
	arr1[1] = 2;
	arr1[2] = 3;
	unsigned int id = 95214214;
	add_product(id, arr1, arrsize);
	for (int i = 0; i < arrsize; i++)
	{
		std::cout <<  << " ";
	}



	return 0;
}
template <typename arr>
arr* add_product(int idorder, int* idarr, int arrsize) { // idorder needs to be defined in other function, that works with storage refresh
	arr* newidarr = new arr[arrsize++];

	for (int i = 0; i < arrsize; i++)
	{
		newidarr[i] = idarr[i];
	}
	newidarr[arrsize + 2] = idorder;

	return newidarr;
}
