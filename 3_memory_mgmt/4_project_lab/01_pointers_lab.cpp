/*
* This lab is part of Garbage collector project
Garabage collector:
- 3 classes
-- Pointer
-- PtrDetails
-- Iterator

Pointer:- reference count : allocated to memory block so incremated, deallocated then decremented. If zero release memory
Template class, operators overloaded *, ->, []

PtrDetails:- holds encapsulated details of Pointer class 
ref_count is reference count
address is a pointer to the memory block
is_arr is bool, if true, arr_size holds size of the allocated array

Iterator:- allows to use pointer arithmetic
Traverses through entire list of elements of a dynamically allocated array
bound checking, functions begin(), end()
*/

#include <iostream>

template <class T>
class PtrDetails
{
    public:
        int ref_count;
        T *memPtr;
        bool is_arr;
        int arr_size;

        PtrDetails(T *m_ptr, int a_size) : memPtr(m_ptr), arr_size(a_size) {
            if (arr_size > 0) { is_arr = true; }
        }
};

template <class T>
bool operator == (const PtrDetails<T> &obj1, const PtrDetails<T> &obj2) {
    
    // if both pointers have same size
    if(obj1.arr_size == obj2.arr_size) {
        for(int i = 0; i < obj1.arr_size; i++) {
            T element1 = *(obj1.memPtr+i);
            T element2 = *(obj2.memPtr+i);
            
            // if pointer element is same
            if(element1 != element2) { return false; }
            else { return true; }
        }
    }
    else { return false; }      // both pointers have different size
    return false;
}

int main() {

    int *ptr1 = new int(3);
    int *ptr2 = new int(3);
    int *ptr3 = new int(4);
    int *ptr4 = new int(5);

    PtrDetails<int> ptr_details_1(ptr1, 1);
    PtrDetails<int> ptr_details_2(ptr2, 1);
    PtrDetails<int> ptr_details_3(ptr3, 1);
    PtrDetails<int> ptr_details_4(ptr4, 1);

    std::cout << "For Ptr1 and Ptr2 : ";
    if(ptr_details_1 == ptr_details_2) { std::cout << "Details match" << std::endl; }
    else { std::cout << "Details don't match" << std::endl; }

    std::cout << "For Ptr3 and Ptr4 : ";
    if(ptr_details_3 == ptr_details_4) { std::cout << "Details match" << std::endl; }
    else { std::cout << "Details don't match" << std::endl; }

    delete ptr1;
    delete ptr2;
    delete ptr3;
    delete ptr4;

    return 0;
}