### Lambda Expression

- A `Lambda` is a function object (a _functor_), so it has a type and can be stored and passed around. 
- Its result object is called a __closure__, which can be called using the operator `()`.

- A lambda formally consists of <u>three parts</u>: 
    - a _capture list_ `[]`
    - a _parameter list_ `()`
    - a _main part_ `{}`, which contains the code to be executed when the Lambda is called. 

> __Note:__ In principal all parts could be empty.

<strong>The capture list []</strong>: By default, variables outside of the enclosing {} around the main part of the Lambda can not be accessed. By adding a variable to the capture list however, it becomes available within the Lambda either as a copy or as a reference. 
- The captured variables become a part of the Lambda.
- By default, variables in the capture block can not be modified within the Lambda. 
- Using the keyword `mutable` allows to modify the parameters captured by copy, and to call their non-const member functions within the body of the Lambda.

> __Important Note:__ A Lambda does not exist at runtime. The runtime effect of a Lambda is the generation of an object, which is known as _closure_.
- The difference between a Lambda and the corresponding closure is similar to the distinction between a class and an instance of the class. 
- A class exists only in the source code while the objects created from it exist at runtime.

- A copy of the closure can be used to execute the code within the Lambda at a position in program different to the line where the function object was created.

<strong> The parameter list () : </strong> The way parameters are passed to a Lambda is basically identical to calling a regular function. If the Lambda takes no arguments, these parentheses can be omitted (except when "mutable" is used).

Lambda expression sample program:
```cpp
int id = 0;   // define integer variable

// create lambda
auto f = [](const int id) { std::cout << "ID = " << id << std::endl; };  // 'id' is passed as a parameter

// execute function object and pass the parameter
f(id);
```
also
```cpp
int id = 0;   // define integer variable

// create lambda
auto f = [id]() { std::cout << "ID = " << id << std::endl; };   // 'id' is passed by value

// execute lambda
f();
```