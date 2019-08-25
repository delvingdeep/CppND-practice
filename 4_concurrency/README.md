## Concurrency

- Path of execution of code in C++ is called a `thread`
- Multi path of execution that have potential to run in parallel is called `mutlithreading`
- Programs using multiple threads are called `concurrent`
- A system performing multiple independent tasks in parallel is called `multi-tasking` system

##### Content:
- Processes and thread
- Data sharing between threads  
- Mutexes and locks
- conditional variable and message queues

##### Build instructions:
```bash
g++ -std=c++17 program_name.cpp -pthread
```