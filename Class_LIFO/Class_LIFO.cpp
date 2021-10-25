//
// Created by tassiio on 18.10.2021.
//

#include "Class_LIFO.h"

//LIFO::LIFO() {
//    L_length = 1;
//    L_current_item = 0;
//}

LIFO::LIFO(int length) {
    assert(length > 0);
    L_length = length;
    L_current_item = 0;
    L_Array = new int[L_length];
}

void LIFO::L_Push(int item) {
    assert(L_current_item < L_length);
    L_Array[L_current_item] =  item;
    L_current_item++;
    //std::cout << L_current_item << std::endl;
}

void LIFO::L_Deleting_Last(int *&array, int &size) {
    int *NewArray = new int[size-1];

    for(int i = 0; i < size-1; i++) {
        NewArray[i] = array[i];
    }
    size--;
    delete[] array;
    array = NewArray;
}

void LIFO::L_Pop() {
    assert(L_current_item != 0);
    //std::cout << L_current_item << std::endl << std::endl;
    L_Printing_Stack(--L_current_item);
    L_Deleting_Last(L_Array, L_length);
}

LIFO::~LIFO() {
    delete []L_Array;
}

void LIFO::L_Printing_Stack(int Its_Item) {
        std::cout << L_Array[Its_Item] << std::endl;
}

