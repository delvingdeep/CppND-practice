This example demonstrates the privacy levels between parent and child classes.

Below is the `psuedo code` C++ code for the inherited access modifiers.

```cpp
class ParentClass
{
    public:
        int var1;

    protected:
        int var2;
    
    private:
        int var3;
};

class ChildClass_1 : public ParentClass
{
    // var1 is public for this class
    // var2 is protected for this class
    // var3 cannot be accessed from this class
};

class ChildClass_2 : protected ParentClass
{
    // var1 is protected for this class
    // var2 is protected for this class
    // var3 cannot be accessed from this class
};

class ChildClass_3 : private ParentClass
{
    // var1 is private for this class
    // var2 is private for this class
    // var3 cannot be accessed from this class
};
```