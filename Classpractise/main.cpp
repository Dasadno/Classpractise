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
	for (int i = 0; i < arrsize; i++)
	{
		
		arr1[i] = rand() % 10 + 1;
	}
	add_product(12, arr1, arrsize);
	std::cout << arr1;



	return 0;
}

void add_product(int idorder, int *idarr, int arrsize) { // idorder needs to be defined in other function, that works with storage refresh
	int *newidarr = new int[arrsize++];

	for (int i = 0; i < arrsize; i++)
	{
		newidarr[i] = idarr[i];
	}
	newidarr[arrsize++] = idorder;
	
}
