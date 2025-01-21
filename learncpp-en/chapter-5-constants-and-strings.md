# Chapter 5 Introduction / Getting Started

## [5.1 Constant variables (named constants)](https://www.learncpp.com/cpp-tutorial/constant-variables-named-constants/)

### Introduction to constants

- In programming, a **constant** is a value that may not be changed during the program’s execution.

- C++ supports two different kinds of constants: **Named constants** and **Literal constants**.

- **Named constants** are constant values that are associated with an identifier. These are also sometimes called symbolic constants, or occasionally just constants.

- **Literal constants** are constant values that are not associated with an identifier.

### Types of named constants

- *Constant variables* (covered in this lesson).

- *Object-like* macros with substitution text.

- *Enumerated* constants.

### Constant variables

- Although it is a well-known oxymoron, a variable whose value cannot be changed is called a **constant variable**.

### Declaring a const variable

```C++
const double gravity { 9.8 };  // preferred use of const before type
int const sidesInSquare { 4 }; // "east const" style, okay but not preferred
```

- <span style="color:green">**BEST PRACTICE**</span>: Place ```const``` before the type (because it is more conventional to do so).

### ```Const``` variables must be initialized

```C++
#include <iostream>

int main()
{
    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;

    const int constAge { age }; // initialize const variable using non-const value

    age = 5;      // ok: age is non-const, so we can change its value
    constAge = 6; // error: constAge is const, so we cannot change its value

    return 0;
}
```

### Naming your const variables

### ```Const``` function parameters

```C++
#include <iostream>

void printInt(const int x)
{
    std::cout << x << '\n';
}

int main()
{
    printInt(5); // 5 will be used as the initializer for x
    printInt(6); // 6 will be used as the initializer for x

    return 0;
}
```

- Making a function parameter constant enlists the compiler’s help to ensure that the *parameter’s value is not changed inside the function*. However, in modern C++ we don’t make value parameters ```const``` because we generally don’t care if the function changes the value of the parameter (since it’s just a copy that will be destroyed at the end of the function anyway). 

- <span style="color:green">**BEST PRACTICE**</span>: Don’t use ```const``` when passing by value.

### ```Const``` return values

```C++
#include <iostream>

const int getValue()
{
    return 5;
}

int main()
{
    std::cout << getValue() << '\n';

    return 0;
}
```

- <span style="color:green">**BEST PRACTICE**</span>: Don’t use ```const``` when returning by value.

### Object-like macros with substitution text

```C++
#include <iostream>

#define MY_NAME "Alex"

int main()
{
    std::cout << "My name is: " << MY_NAME << '\n';

    return 0;
}
```

### Prefer constant variables to preprocessor macros

```C++
#include <iostream>

void someFcn()
{
// Even though gravity is defined inside this function
// the preprocessor will replace all subsequent occurrences of gravity in the rest of the file!!!!
#define gravity 9.8
}

void printGravity(double gravity) // including this one, causing a compilation error!!!!
{
    std::cout << "gravity: " << gravity << '\n';
}

int main()
{
    printGravity(3.71);

    return 0;
}
```

- <span style="color:green">**BEST PRACTICE**</span>: Prefer constant variables over object-like macros with substitution text.

### Using constant variables throughout a multi-file program

- In many applications, a given named constant needs to be used throughout your code (not just in one file). These can include physics or mathematical constants that don’t change (e.g. pi or Avogadro’s number), or application-specific “tuning” values (e.g. friction or gravity coefficients). *Instead of redefining these every time they are needed, it’s better to declare them once in a central location and use them wherever needed* (inline variables).

### Type qualifiers

- The ```const``` used to declare a constant variable is called a **const type qualifier** (or **const qualifier** for short).

- As of C++23, C++ only has two type qualifiers: ```const``` and ```volatile```.

- The ```volatile``` qualifier is used to tell the compiler that an object may have its value changed at any time. This rarely-used qualifier disables certain types of optimizations.

## [5.2 Literals](https://www.learncpp.com/cpp-tutorial/literals/)

- **Literals** are values that are inserted directly into the code.

```C++
return 5;                     // 5 is an integer literal
bool myNameIsAlex { true };   // true is a boolean literal
double d { 3.4 };             // 3.4 is a double literal
std::cout << "Hello, world!"; // "Hello, world!" is a C-style string literal
```

- **Literals** are sometimes called literal constants because their meaning cannot be redefined (5 always means the integral value 5).

### The type of a literal

- integer value	- 5, 0, -3	- int	

- boolean value	- true, false	- bool	

- floating point value	- 1.2, 0.0, 3.4	 - double (not float!)	

- character	- ‘a’, ‘\n’ - char	

- C-style string - “Hello, world!” - const char[14]

### Literal suffixes

- EX.: ```unsigned int```, ```long```, ```unsigned long```, ```long long```, ```long double```, ```std::string```, ...

- <span style="color:green">**BEST PRACTICE**</span>: Prefer literal suffix L (upper case) over l (lower case).

- In most cases, suffixes aren’t needed (except for ```f```).

### Integral literals

```C++
#include <iostream>

int main()
{
    std::cout << 5 << '\n';  // 5 (no suffix) is type int (by default)
    std::cout << 5L << '\n'; // 5L is type long
    std::cout << 5u << '\n'; // 5u is type unsigned int

    return 0;
}
```

### Floating point literals

```C++
#include <iostream>

int main()
{
    std::cout << 5.0 << '\n';  // 5.0 (no suffix) is type double (by default)
    std::cout << 5.0f << '\n'; // 5.0f is type float

    return 0;
}
```

```C++
float f { 4.1f }; // use 'f' suffix so the literal is a float and matches variable type of float
double d { 4.1 }; // change variable to type double so it matches the literal type double
```

### Scientific notation for floating point literals

```C++
double pi { 3.14159 }; // 3.14159 is a double literal in standard notation
double avogadro { 6.02e23 }; // 6.02 x 10^23 is a double literal in scientific notation
double electronCharge { 1.6e-19 }; // charge on an electron is 1.6 x 10^-19
```

### String literals

- In programming, a **string** is a collection of sequential characters used to represent text (such as names, words, and sentences).

- "Hello, world!" is a **string literal**. String literals are placed between *double quotes* to identify them as strings (as opposed to char literals, which are placed between *single quotes*).

- Because strings are commonly used in programs, most modern programming languages include a *fundamental string data type*. For historical reasons, *strings are not a fundamental type in C++*. Rather, they have a strange, complicated type that is hard to work with (**C strings**).

- C-style string literals:

1) All C-style string literals have an implicit **null terminator**. Consider a string such as "hello". While this C-style string appears to only have five characters, it actually has six: 'h', 'e', 'l‘, 'l', 'o', and '\0' (a character with ASCII code 0).

2) Unlike most other literals (which are values, not objects), C-style string literals are const objects that are created at the start of the program and are guaranteed to exist for the entirety of the program. 

- <span style="color:green">**BEST PRACTICE**</span>: C-style string literals are const objects that are created at the start of the program and are guaranteed to exist for the entirety of the program.

### Magic numbers

- A **magic number** is a literal (usually a number) that either has an unclear meaning or may need to be changed later.

```C++
const int maxStudentsPerSchool{ numClassrooms * 30 };
setMax(30);
```

- <span style="color:green">**BEST PRACTICE**</span>: Avoid magic numbers in your code (use constexpr variables instead).

## [5.3 Numeral systems (decimal, binary, hexadecimal, and octal)](https://www.learncpp.com/cpp-tutorial/numeral-systems-decimal-binary-hexadecimal-and-octal/)

- In everyday life, we count using **decimal numbers**, where each numerical digit can be 0, 1, 2, 3, 4, 5, 6, 7, 8, or 9. Decimal is also called “base 10”, because there are 10 possible digits (0 through 9).

- In **binary**, there are only 2 digits: 0 and 1, so it is called “base 2”. In binary, we count like this: 0, 1, 10, 11, 100, 101, 110, 111, …

### Octal and hexadecimal literals

- **Octal** is base 8 -- that is, the only digits available are: 0, 1, 2, 3, 4, 5, 6, and 7. In Octal, we count like this: 0, 1, 2, 3, 4, 5, 6, 7, 10, 11, 12, … (note: no 8 and 9, so we skip from 7 to 10).

```C++
#include <iostream>

int main()
{
    int x{ 012 }; // 0 before the number means this is octal
    std::cout << x << '\n';
    return 0;
}
```

- **Hexadecimal** is base 16. In hexadecimal, we count like this: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F, 10, 11, 12, …

```C++
#include <iostream>

int main()
{
    int x{ 0xF }; // 0x before the number means this is hexadecimal
    std::cout << x << '\n';
    return 0;
}
```

### Using hexadecimal to represent binary

### Binary literals

```C++
// C++ 14
#include <iostream>

int main()
{
    int bin{};        // assume 16-bit ints
    bin = 0b1;        // assign binary 0000 0000 0000 0001 to the variable
    bin = 0b11;       // assign binary 0000 0000 0000 0011 to the variable
    bin = 0b1010;     // assign binary 0000 0000 0000 1010 to the variable
    bin = 0b11110000; // assign binary 0000 0000 1111 0000 to the variable

    return 0;
}
```

### Digit separators

```C++
#include <iostream>

int main()
{
    int bin { 0b1011'0010 };  // assign binary 1011 0010 to the variable
    long value { 2'132'673'462 }; // much easier to read than 2132673462

    return 0;
}
```

### Outputting values in decimal, octal, or hexadecimal

```C++
#include <iostream>

int main()
{
    int x { 12 };
    std::cout << x << '\n'; // decimal (by default)
    std::cout << std::hex << x << '\n'; // hexadecimal
    std::cout << x << '\n'; // now hexadecimal
    std::cout << std::oct << x << '\n'; // octal
    std::cout << std::dec << x << '\n'; // return to decimal
    std::cout << x << '\n'; // decimal

    return 0;
}
```

### Outputting values in binary

```C++
#include <bitset> // for std::bitset
#include <iostream>

int main()
{
	// std::bitset<8> means we want to store 8 bits
	std::bitset<8> bin1{ 0b1100'0101 }; // binary literal for binary 1100 0101
	std::bitset<8> bin2{ 0xC5 }; // hexadecimal literal for binary 1100 0101

	std::cout << bin1 << '\n' << bin2 << '\n';
	std::cout << std::bitset<4>{ 0b1010 } << '\n'; // create a temporary std::bitset and print it

	return 0;
}
/*
11000101
11000101
1010
*/
```

```C++
// In C++20 and C++23, we have better options available via the new Format Library (C++20) and Print Library (C++23):
#include <format> // C++20
#include <iostream>
#include <print> // C++23

int main()
{
    std::cout << std::format("{:b}\n", 0b1010);  // C++20
    std::cout << std::format("{:#b}\n", 0b1010); // C++20

    std::println("{:b} {:#b}", 0b1010, 0b1010);  // C++23

    return 0;
}
```

## [5.4 Constant expressions and compile-time optimization](https://www.learncpp.com/cpp-tutorial/constant-expressions-and-compile-time-optimization/)

### The as-if rule

-  The **as-if rule** says that the compiler can modify a program however it likes in order to produce more optimized code, so long as those modifications do not affect a program’s “observable behavior”.

### An optimization opportunity

```C++
#include <iostream>

int main()
{
	int x { 3 + 4 };
	std::cout << x << '\n';

	return 0;
}
// If this program were compiled exactly as it was written (with no optimizations), the compiler would generate an executable that calculates the result of 3 + 4 at runtime.
```

### Compile-time evaluation of expressions

- Modern C++ compilers are able to *evaluate some expressions at compile-time*. When this occurs, the compiler can replace the expression with the result of the expression.

```C++
#include <iostream>

int main()
{
	int x { 7 };
	std::cout << x << '\n';

	return 0;
}
// This program produces the same output (7) as the prior version, but the resulting executable no longer needs to spend CPU cycles calculating 3 + 4 at runtime!
```

### Constant expressions

- A **constant expression** is an expression that contains only compile-time constants and operators/functions that support compile-time evaluation.

- A **compile-time constant** is a constant whose value must be known at compile time. This includes: *Literals* (e.g. ‘5’, ‘1.2’), *Constexpr* variables, *Const* integral variables with a constant expression initializer, *Non-type template* parameters.

- Const variables that are not compile-time constants are sometimes called **runtime constants**. Runtime constants cannot be used in a constant expression.

f,
.
.
.
.
.
.
.

## [5.5 Constexpr variables](https://www.learncpp.com/cpp-tutorial/constexpr-variables/)

- When you declare a ```const``` variable using the const keyword, the compiler will implicitly keep track of whether it’s a runtime or compile-time constant. In most cases, this doesn’t matter for anything other than optimization purposes, but there are a few cases where C++ requires a constant expression. And only compile-time constant variables can be used in a constant expression.

 .  ..  .. 

## [5.6 The conditional operator](https://www.learncpp.com/cpp-tutorial/the-conditional-operator/)

- The **conditional operator** (```?:```) (also sometimes called the arithmetic if operator) is a **ternary operator** (an operator that takes 3 operands).

``condition ? expression1 : expression2;```

- If ```condition``` evaluates to ```true```, then ```expression1``` is evaluated, otherwise ```expression2``` is evaluated. The ```:``` and ```expression2``` are not optional.

```C++
if (x > y)
    greater = x;
else
    greater = y;


greater = ((x > y) ? x : y);
```

### The conditional operator evaluates as an expression



## [5.7 Introduction to programming languages](https://www.learncpp.com/cpp-tutorial/introduction-to-programming-languages/)

## [5.8 Introduction to programming languages](https://www.learncpp.com/cpp-tutorial/introduction-to-programming-languages/)

## [5.9 Introduction to programming languages](https://www.learncpp.com/cpp-tutorial/introduction-to-programming-languages/)

## [5.10 Introduction to programming languages](https://www.learncpp.com/cpp-tutorial/introduction-to-programming-languages/)

## [5.11 Introduction to programming languages](https://www.learncpp.com/cpp-tutorial/introduction-to-programming-languages/)

## [5.12 Introduction to programming languages](https://www.learncpp.com/cpp-tutorial/introduction-to-programming-languages/)

## [5.13 Introduction to programming languages](https://www.learncpp.com/cpp-tutorial/introduction-to-programming-languages/)