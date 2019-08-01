### Scope

Scope of a variable is defined as the extent of the program code within which the variable can be accessed or declared or worked with. A scope can be defined by many ways : it can be defined by 
- namespace
- functions
- classes
- or just { }

---
#### Using brackets { }

##### Global Variable

- Global variables are defined outside of all the functions, usually on top of the program
- The global variables will hold their value throughout the life-time of your program
- A global variable can be accessed by any function

```cpp
#include <iostream>

int globVar;   // Global variable declaration <------

int main() {
    globVar = 10;
    globVar++;
    std::cout << "globVar = " << globVar << std::endl;

    return 0;
}

/* OUTPUT
** globVar = 11
*/
```

##### Local Variable
- Variables that are declared inside a function or block are local variables
- They can be used __only__ by statements that are _inside that function_ or _block of code_
- Local variables are not known to functions outside their own

```cpp
#include <iostream>

int main() {
    int localVar;       // Local varibale declaration <-----
    localVar = 10;      // Actual initialization  
    localVar++;
    std::cout << "localVar = " << localVar << std::endl;

    return 0;
}

/* OUTPUT
** localVar = 10
*/
```

----
#### Namespaces
Namespaces are used for definition of scopes, which can be created within the same program, which will have their own scope
```cpp
#include <iostream>

// Variable created inside namespace
namespace myNamespace
{ 
    int val = 123;
} 

// Global variable
int val = 100;

int main() {
    
    int val = 200;  // Local variable

    /* 
    ** These variables can be accessed from
    ** outside the namespace by using the scope
    ** operator :: -> also known as scope resolution operator
    */

    std::cout << myNamespace::val << std::endl;     // namespace variable value
    std::cout << ::val << std::endl;                // global variable value
    std::cout << val << std::endl;                  // local variable value

    return 0;
}

   /* OUTPUT:
   ** 123
   ** 100
   ** 200
   */
```

---
Summary

``cpp
int val;
// this variable val is defined in global namespace
// which means, its scope is global. It exists
// everywhere.

namespace _namespace
{
    int val;  
    // it is defined in a local namespace called '_namespace'
    // outside _namespace it doesn't exist.
}

void _func() {
    int val;  
    // scope is the function itself.
    // outside the function, a doesn't exist.
   {
        int val;    //the curly braces defines this scope
   }
}

class _class
{
    int val;  
    // scope is the class itself.
    // outside class _class, it doesn't exist.
};
```

