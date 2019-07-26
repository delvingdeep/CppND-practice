### Smart Pointers

Smart pointers in C++ are designed to improve native safety and performance of memory management of this language. Common problems, such as: memory leaks, lack of memory or failed allocation are captured and processed via smart pointers.

- The most basic smart pointer is `unique pointer`
- The most popular smart pointer is `shared pointer`

Raw pointers are primitive and deadly fast

---
#### Unique pointer

`unique_ptr` essentially is a wrapper class for raw pointer and its operations and actions (allocation, deallocation, incrementation, retrieval of memory address etc.). 

```cpp
std::unique_ptr<int> ptr1 (new int);
 
std::unique_ptr<int> ptr2 = ptr1;  // Error: can't copy unique_ptr
 
std::unique_ptr<int> ptr2 = std::move(ptr1);    // Works, resource now stored in ptr2
```

---
#### Shared pointer
`shared_ptr` is a technique based on reference counting ownership where it maintains the reference count of its initialized pointer in cooperation with all created copies of it. Principle of reference counting is a technique of storing the number of references or pointers to a resource such as block of memory. An object referenced by the contained raw pointer will not be destroyed until reference count is greater than zero, which means that it is not performed until all copies of shared_ptr have been deleted. In essence, shared_ptr should be used when one raw pointer has to be assigned to more owners.


```cpp
// This is possible without any interference:    
std::shared_ptr<int> ptr1(new int(20));
std::shared_ptr<int> ptr2 = ptr1;
```