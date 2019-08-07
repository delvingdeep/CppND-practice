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
bool operator == (const PtrDetails &obj1, const PtrDetails &obj2) {
    // TODO implement logic
}