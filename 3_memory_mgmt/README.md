<u>Memory management</u> in C++ can be split into two major categories by their storage in the host machine:
-  `stack`
-  `heap`


### `stack`

- In C++, Stack memory is where local variables are stored. Stack is also used for storing parameters passed to function.
Stack is a LIFO(Last In First Out) data structure that is organized and controlled by the CPU.

- Every time that an action inside of a function triggers the declaration of a new variable, it is pushed onto the stack by that parent function. 
- After that when function exits, and resolves its work, all of the data from variables, which are pushed into the stack are freed and that part of memory becomes available for other data. 

```cpp
int stackFunction(int x) {
    int y = 5;  // integer y is stored into stack

    x += y;

    // in the moment this function exits, or return a value,
    // stack removes space occupied by the y and shrinks stack itself
    return x;
}
```
#### Features:
- only local variables
- resizing of variables cannot be done
- efficiently managed space by CPU, memory does not become fragmented
- very quick access
- there is a limit on stack size (OS-dependent)
- explicit de-allocation of variables is not mandatory

Static memory is allocated at complie time on Stack

--------------------------------------------------------------------------------------------------------------------------

### `heap`

- The heap is a region of a computer's memory that is free for use by a user and isn't managed by CPU or any onboard mechanism. It can be observed as a free-floating region of memory and is typically substantially larger in memory size than the stack.

- Accessing the heap from C++ is done using typical memory management tools like `pointers`. 
- Heap memory is allocated, and because there isn't any backup tool which will clean and tidy all the actions, its user who are with a responsibility of freeing used memory upon completion of program. 
- Running out of heap memory can (and probably will) result in thrown error of type `std:: bad_alloc`. This can be encountered typically in a _recursive functions_ and implementations.

```cpp
int main() {

    // allocates char of value 'C' on the heap
    char *ptr = new char('C');

    // prevents memory leakage by freeing used memory
    delete ptr;

    return 0;
}
```
#### Features:
- memory must be managed
- memory size is not limited
- access is relatively slower
- realloc() is used for the resizing of variables
- variables can be accessed globally
- efficient use of space is not guaranteed, memory can become fragmented over time when blocks of memory are allocated, then freed

Dynamic memory is allocated at the runtime on heap, also called FreeStore