#include <vector>
#include <cstdlib>
#include <iostream>
#include <Windows.h>

class storage {
public: 
	



};
void add_product(int idorder, int* idarr, int arrsize);

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
	add_product(12, arr1, arrsize);
	for (int i = 0; i < arrsize; i++)
	{
		std::cout << arr1[i] << " ";
	}



	return 0;
}

void add_product(int idorder, int *idarr, int arrsize) { // idorder needs to be defined in other function, that works with storage refresh
	int *newidarr = new int[arrsize++];

	for (int i = 0; i < arrsize; i++)
	{
		newidarr[i] = idarr[i];
	}
	newidarr[arrsize+ 2] = idorder;
	
}
