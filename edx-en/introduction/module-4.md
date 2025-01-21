# C++

## edX - Introduction to C++

### Module 4 - Functions

- Introducing Functions

- Introducing Objects (Classes)

- Encapsulation

- Const Objects


#### Introducing Functions
```
int Sum(int x, int y)
{
    return x + y;
}

int Sum(int x, int y, int z)
{
    return x + y + z;
}
```

When declaring a function, you specify its storage class, return type, name, and parameters.  Some refer to this as the function signature.  In C++ it is also called a function prototype. 

In C++, function prototypes belong in header files.  Recall that the header file is what gets imported into other source code files so that the compiler can track proper use of functions and other aspects of the included files.  The function prototype only contains the function's signature with no implementation details.  The implementation details along with the function signature, define the function.  The function definition exists in the source code file (.cpp).


```
int Sum(int a, int b)
{
    return a + b;
}
```
```
int result = Sum(2, 3);
```
```
inline void swap(int & a, int & b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Traditional method that results in a function call
swap(5, 6);

// Using an inline function call, the compiler converts the previous line to this
int temp = a;
a = b;
b = temp;
```
```
#include <iostream>
int main()
{
    int total = 0;
    for(int i = 1; i <= 10; i++)
    {
      total += i;
    }
    std::cout << "The sum of the numbers 1 to 10 is " << total << std::endl;
    std::cout << "Current value of i is " << i << std::cout;
    return 0;
}
```

C++ makes use of the following keywords that apply to storage classes:

- static - identifiers declared with static are allocated when the program starts and deallocated when the program execution ends.  Declaring a variable as static in a function means that the variable will retain its value between calls to the function.
- extern - used to declare an object that is defined in another translation unit of within the enclosing scope but has an external linkage.
- thread_local - declares that the identifier is only accessible on the thread in which it is created.  This prevents sharing of the identifier across multiple threads in the same application.   This is part of the C++11 standard.

#### Introducing Objects (Classes)

##### Creating Classes and Members
```
//Declaring a Class
class Rectangle
{
public:
    int _width;
    int _height;
};
```

##### Using a Class
```
void main()
{
    Rectangle outer;
    Rectangle inner;    

    outer._width = 10;
    outer._height = 10;

    inner._width = 5;
    inner._height = 5;
}
```

#### Encapsulation

Often considered the first pillar of object-oriented programming, encapsulation can be used to describe the accessibility of the members belonging to a class.  C++ provides access modifiers and properties to help implement encapsulation in your classes.  While some consider this accessibility configuration to be the only aspect of encapsulation, others also define encapsulation as the act of including all data and behavior required of the class, within the class definition.

We use encapsulation to prevent changing the member variables directly.  This is considered a poor practice because it presents the opportunity for potentially incorrect values to be assigned to these member variables.  This can result in unexpected behavior or more serious problems with your executing code.  It also helps with debugging of your code.

```
class Rectangle
{
private:
    int _width;
    int _height;

public:
    Rectangle() : _width{}, _height{}
    {}
    Rectangle(int initial_width, int initial_height) : _width{initial_width}, _height{initial_height}
    {}

    int get_width()  { return _width; }
    int get_height() { return _height; }

    void resize(int new_width, int new_height)
    {
        _width  = new_width;
        _height = new_height;
    }

    int area()
    {
        return _width * _height;
    }

};
```

```
#include "Rectangle.h"

int main()
{
    Rectangle uninitialized;
    Rectangle value{};
    Rectangle agregate{4, 7};

    value.resize(5, 5);
    agregate.resize(1, 2);
}
```

#### Const Objects

```
class Rectangle
{
public:
    int get_area() const
    {
        return _width * _height;
    }
};
```
```
int main()
{
    Rectangle const value{};

    int area_of_value{value.area()}; 
}
```