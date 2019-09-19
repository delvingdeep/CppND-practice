#### Thread : Promise and Future

The method for passing data to a thread during thread construction relies mainly on following two types:
Passing arguments using 
- Variadic template
- Lamdba (arguments are captured by value or reference)

A drawback of these two approaches is that the information flows from the parent thread to the worker threads. In order to pass data in the opposite direction i.e. from worker threads to the parent thread; the threads need to adhere to a strict synchronization protocol. There is a such a mechanism available in the C++ standard that can be used for this purpose. This mechanism acts as a single-use channel between the threads.

The sending end of the channel is called __promise__ while the receiving end is called __future__.

In the C++ standard, the class template `std::promise` provides a convenient way to store a value or an exception that will be acquired asynchronously at a later time via a `std::future` object. Each `std::promise` object is meant to be used _only_ a __single time__.

