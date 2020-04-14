// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

#include <iostream>

/*
This struct will model certain data group without the need
to create a class.
*/
typedef struct INT_STRUCT {
    int allocator;
    float random_seed;
    int buffer[];
};

int main()
{
    int list_size = 2;
    int(*alloc_list)[2] = new int[1][2]{ {1, 2} };

    //for (int i = 0; i < list_size; i++) {
    //    alloc_list[i] = i * i;
    //}

    for (int i = 0; i < list_size; i++) {
        std::cout << alloc_list[0][i] << " ";
    }
    std::cout << std::endl;

    INT_STRUCT myStruct;
    myStruct.allocator = 9999;
    std::cout << myStruct.allocator << std::endl;

    //int *alloc_ref = alloc_list;
    for (int &element : *alloc_list) {
        std::cout << element << std::endl;
    }

    delete[] alloc_list;
    return 0;
}


