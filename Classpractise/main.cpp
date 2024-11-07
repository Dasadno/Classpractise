#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <vector>

void add_product(int idorder, int*& idarr, int& arrsize);


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int arrsize = 5;


    int* arr1 = new int[arrsize] {96015321, 96143013, 95121233, 91512491, 91024195};

    int id = 95214214;
    add_product(id, arr1, arrsize);
    for (int i = 0; i < arrsize; i++)
    {
        std::cout << arr1[i] << "\n";
    }


    delete[] arr1;
    return 0;
}

void add_product(int idorder, int*& idarr, int& arrsize) {

    int new_arr_size = arrsize + 1;
    int* newidarr = new int[new_arr_size];

    for (int i = 0; i < arrsize; i++) {
        newidarr[i] = idarr[i];
    }

    newidarr[arrsize] = idorder;
    std::swap(idarr, newidarr);

    arrsize = new_arr_size;
    delete[] newidarr;
}