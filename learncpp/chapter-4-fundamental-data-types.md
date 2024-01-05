# Chapter 4 Fundamental Data Types

## [4.1 Introduction to fundamental data types](https://www.learncpp.com/cpp-tutorial/introduction-to-fundamental-data-types/)

### Bits, bytes, and memory addressing

- To recap briefly, computers have **random access memory (RAM)** that is available for programs to use. When a variable is defined, a piece of that memory is set aside for that variable.

- The smallest unit of memory is a binary digit (also called a **bit**), which can hold a value of 0 or 1.

- Memory is organized into sequential units called **memory addresses** (or addresses for short). Similar to how a street address can be used to find a given house on a street, the memory address allows us to find and access the contents of memory at a particular location.

- Each memory address holds 1 byte of data. A **byte** is a group of bits that are operated on as a unit. The modern standard is that a byte is comprised of *8 sequential bits*.

![Alt text](https://www.learncpp.com/images/CppTutorial/Section2/MemoryAddresses.png?ezimgfmt=rs:188x180/rscb2/ng:webp/ngcb2)

#### Data types

- Because all data on a computer is just a sequence of bits, we use a **data type** (often called a “type” for short) to tell the compiler how to interpret the contents of memory in some meaningful way (ex.: *integer*).

### Fundamental data types

- C++ comes with built-in support for many different data types. These are called **fundamental data types**, but are often informally called **basic types**, **primitive types**, or **built-in types**.

### The _t suffix

- Many of the types defined in newer versions of C++ (e.g. ```std::nullptr_t```) use a ```_t``` suffix. This suffix means “type”, and it’s a common nomenclature applied to modern types.

## [4.2 Void](https://www.learncpp.com/cpp-tutorial/void/)

- Basically, **void** means “no type”!

- An **incomplete type** is a type that has been declared but not yet defined. The compiler knows about the existence of such types, but does not have enough information to determine *how much memory to allocate* for objects of that type. ```void``` is intentionally incomplete since it represents the lack of a type, and thus cannot be defined.

```C++
void value; // won't work, variables can't be defined with incomplete type void
```

### Functions that do not return a value

```C++
void writeValue(int x) // void here means no return value
{
    std::cout << "The value of x is: " << x << '\n';
    // no return statement, because this function doesn't return a value
}
```

### Deprecated: Functions that do not take parameters

```C++
int getValue() // empty function parameters is an implicit void
{
    int x{};
    std::cin >> x;

    return x;
}
```

- <span style="color:green">**BEST PRACTICE**</span>: Use an empty parameter list instead of void to indicate that a function has no parameters.

### Other uses of void

## [4.3 Object sizes and the sizeof operator](https://www.learncpp.com/cpp-tutorial/object-sizes-and-the-sizeof-operator/)

### Object sizes

- With an **8-bit byte**, a byte-sized object can hold 28 (256) different values.

- <span style="color:yellow">**KEY INSIGHT**</span>: New programmers often focus too much on optimizing their code to use as little memory as possible. In most cases, this makes a negligible difference. *Focus on writing maintainable code, and optimize only when and where the benefit will be substantive*.

### Fundamental data type sizes

- For this tutorial: A byte is 8 bits, memory is byte addressable, so the smallest object is 1 byte, floating point support is IEEE-754 compliant, we are on a 32-bit or 64-bit architecture.

- Boolean, character, integer, floating point, pointer.

- https://en.cppreference.com/w/cpp/language/types

### The ```sizeof``` operator

- The ```sizeof``` operator is a unary operator that takes either a type or a variable, and returns its size in bytes. 

```C++
#include <iomanip> // for std::setw (which sets the width of the subsequent output)
#include <iostream>

int main()
{
    std::cout << std::left; // left justify output
    std::cout << std::setw(16) << "bool:" << sizeof(bool) << " bytes\n";
    std::cout << std::setw(16) << "char:" << sizeof(char) << " bytes\n";
    std::cout << std::setw(16) << "short:" << sizeof(short) << " bytes\n";
    std::cout << std::setw(16) << "int:" << sizeof(int) << " bytes\n";
    std::cout << std::setw(16) << "long:" << sizeof(long) << " bytes\n";
    std::cout << std::setw(16) << "long long:" << sizeof(long long) << " bytes\n";
    std::cout << std::setw(16) << "float:" << sizeof(float) << " bytes\n";
    std::cout << std::setw(16) << "double:" << sizeof(double) << " bytes\n";
    std::cout << std::setw(16) << "long double:" << sizeof(long double) << " bytes\n";

    return 0;
}
/*
bool:           1 bytes
char:           1 bytes
short:          2 bytes
int:            4 bytes
long:           4 bytes
long long:      8 bytes
float:          4 bytes
double:         8 bytes
long double:    8 bytes
*/
```

- Your results may vary based on *compiler, computer architecture, OS, compilation settings* (32-bit vs 64-bit), etc…

### Fundamental data type performance

## [4.4 Signed integers](https://www.learncpp.com/cpp-tutorial/signed-integers/)

- An integer is an integral type that can represent positive and negative whole numbers, including 0 (e.g. -2, -1, 0, 1, 2). 

- C++ has 4 primary fundamental integer types available for use: ```short int```, ```int```, ```long int```, ```long long int```.

### Signed integers

- This attribute of being positive, negative, or zero is called the number’s **sign**.

### Defining signed integers

```C++
short s;      // prefer "short" instead of "short int"
int i;
long l;       // prefer "long" instead of "long int"
long long ll; // prefer "long long" instead of "long long int"

signed short ss;
signed int si;
signed long sl;
signed long long sll;
```

- <span style="color:green">**BEST PRACTICE**</span>: Prefer the shorthand types that do not use the ```int``` suffix or ```signed``` prefix.

### Signed integer ranges

- We call the set of specific values that a data type can hold its **range**. The range of an integer variable is determined by two factors: its size (in bits), and whether it is signed or not.

- By definition, an *8-bit signed integer has a range of -128 to 127*. This means a signed integer can store any integer value between -128 and 127 (inclusive) safely.

### Overflow

- The C++20 standard makes this blanket statement: “If during the evaluation of an expression, the result is not mathematically defined or not in the range of representable values for its type, the *behavior is undefined*”. Colloquially, this is called **overflow**.

- If an arithmetic operation (such as addition or multiplication) attempts to create a value outside the range that can be represented, this is called **integer overflow** (or **arithmetic overflow**). For signed integers, integer overflow will result in *undefined behavior*.

### Integer division

```C++
#include <iostream>

int main()
{
    std::cout << 8 / 5 << '\n'; // result: 1
    return 0;
}
```

- <span style="color:red">**WARNING**</span>: Be careful when using integer division, as you will *lose any fractional parts of the quotient*. However, if it’s what you want, integer division is safe to use, as the results are predictable.

## [4.5  Unsigned integers, and why to avoid them](https://www.learncpp.com/cpp-tutorial/unsigned-integers-and-why-to-avoid-them/)

### Unsigned integers

- **Unsigned integers** are integers that can only hold non-negative whole numbers.

### Defining unsigned integers

```C++
unsigned short us;
unsigned int ui;
unsigned long ul;
unsigned long long ull;
```

### Unsigned integer range

- An n-bit unsigned variable has a *range of 0 to (2n)-1*.

### Remembering the terms signed and unsigned

### Unsigned integer overflow

```C++
#include <iostream>

int main()
{
    unsigned short x{ 65535 }; // largest 16-bit unsigned value possible
    std::cout << "x was: " << x << '\n';

    x = 65536; // 65536 is out of our range, so we get modulo wrap-around
    std::cout << "x is now: " << x << '\n';

    x = 65537; // 65537 is out of our range, so we get modulo wrap-around
    std::cout << "x is now: " << x << '\n';

    return 0;
}

/*
x was: 65535
x is now: 0
x is now: 1
*/
```

```C++
#include <iostream>

int main()
{
    unsigned short x{ 0 }; // smallest 2-byte unsigned value possible
    std::cout << "x was: " << x << '\n';

    x = -1; // -1 is out of our range, so we get modulo wrap-around
    std::cout << "x is now: " << x << '\n';

    x = -2; // -2 is out of our range, so we get modulo wrap-around
    std::cout << "x is now: " << x << '\n';

    return 0;
}

/*
x was: 0
x is now: 65535
x is now: 65534
*/
```

### The controversy over unsigned numbers

- <span style="color:green">**BEST PRACTICE**</span>: Favor signed numbers over unsigned numbers for holding quantities (even quantities that should be non-negative) and mathematical operations. Avoid mixing signed and unsigned numbers.

### So when should you use unsigned numbers?

- Also note that if you’re developing for an embedded system (e.g. an *Arduino*) or some other processor/memory limited context, use of unsigned numbers is more common and accepted (and in some cases, unavoidable) for performance reasons.

## [4.6 Fixed-width integers and ```size_t```](https://www.learncpp.com/cpp-tutorial/fixed-width-integers-and-size-t/)

### Why isn’t the size of the integer variables fixed?

- C opted to intentionally leave the size of an integer open so that the *compiler implementers could pick a size* for int that performs best on the target *computer architecture*.

### Doesn’t this suck?

### Fixed-width integers

- To address the above issues, C99 defined a set of fixed-width integers (in the stdint.h header) that are guaranteed to be the same size on any architecture. Ex: ```std::int8_t```, ```std::uint8_t```, ```std::int16_t```, ```std::uint64_t```, ...

```C++
#include <cstdint> // for fixed-width integers
#include <iostream>

int main()
{
    std::int16_t i{5};
    std::cout << i << '\n';
    return 0;
}
```

- The fixed-width integers have two downsides that are typically raised:

1) The fixed-width integers are not guaranteed to be defined on all architectures.

2) If you use a fixed-width integer, it may be slower than a wider type on some architectures. For example, if you need an integer that is guaranteed to be 32-bits, you might decide to use ```std::int32_t```, but your CPU might actually be faster at processing 64-bit integers. 

### Fast and least integers

- To help address the above downsides, C++ also defines two alternative sets of integers that are guaranteed to be defined.

- The fast types (```std::int_fast#_t``` and ```std::uint_fast#_t```) provide the fastest signed/unsigned integer type with a width of at least # bits (where # = 8, 16, 32, or 64). For example, ```std::int_fast32_t``` will give you the fastest signed integer type that’s at least 32 bits. By fastest, we mean the integral type that can be processed most quickly by the CPU.

- The least types (```std::int_least#_t``` and ```std::uint_least#_t```) provide the smallest signed/unsigned integer type with a width of at least # bits (where # = 8, 16, 32, or 64). For example, ```std::uint_least32_t``` will give you the smallest unsigned integer type that’s at least 32 bits.

```C++
#include <cstdint> // for fast and least types
#include <iostream>

int main()
{
	std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
	std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
	std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
	std::cout << '\n';
	std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
	std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
	std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";

	return 0;
}

/*
least 8:  8 bits
least 16: 16 bits
least 32: 32 bits

fast 8:  8 bits
fast 16: 32 bits
fast 32: 32 bits
*/
```

### ```std::int8_t``` and ```std::uint8_t``` likely behave like chars instead of integers

- <span style="color:green">**BEST PRACTICE**</span>: The 8-bit fixed-width integer types are often treated like chars instead of integer values (and this may vary per system). Prefer the 16-bit fixed integral types for most cases.

### Best practices for integral types

- Our stance is that *it’s better to be correct than fast, and better to fail at compile time than runtime*.

- Therefore, if you need an integral type with a fixed size, we *recommend avoiding the fast/least types* in favor of the fixed-width types. 

- <span style="color:green">**BEST PRACTICE**</span>: 

    - Prefer int when the size of the integer doesn’t matter (e.g. the number will always fit within the range of a 2-byte signed integer). For example, if you’re asking the user to enter their age, or counting from 1 to 10, it doesn’t matter whether int is 16 or 32 bits (the numbers will fit either way). This will cover the vast majority of the cases you’re likely to run across.
    - Prefer ```std::int#_t``` when storing a quantity that needs a guaranteed range.
    - Prefer ```std::uint#_t``` when doing bit manipulation or where well-defined wrap-around behavior is required.

- Avoid the following when possible:

    - ```shor```t and ```long``` integers -- use a fixed-width type instead.
    - Unsigned types for holding quantities.
    - The 8-bit fixed-width integer types.
    - The fast and least fixed-width types.
    - Any compiler-specific fixed-width integers -- for example, Visual Studio defines ```__int8```, ```__int16```, etc…

### What is ```std::size_t```?

```C++
#include <iostream>

int main()
{
    std::cout << sizeof(int) << '\n';

    return 0;
}
// 4
```

- The answer is that sizeof (and many functions that return a size or length value) return a value of type ```std::size_t```. ```std::size_t``` is defined as an unsigned integral type, and it is typically used to represent the size or length of objects.

```C++
#include <cstddef> // for std::size_t
#include <iostream>

int main()
{
	std::cout << sizeof(std::size_t) << '\n';

	return 0;
}
// 4
```

- That is, for 32-bit applications, ```std::size_t``` will typically be a 32-bit unsigned integer, and for a 64-bit application, ```std::size_t``` will typically be a 64-bit unsigned integer.

## [4.7 Introduction to scientific notation](https://www.learncpp.com/cpp-tutorial/introduction-to-scientific-notation/)

- **Scientific notation** is a useful shorthand for writing lengthy numbers in a concise manner.

- Numbers in scientific notation take the following form: **significand x 10exponent**. For example, in the scientific notation ```1.2 x 10⁴```, ```1.2``` is the significand and 4 is the exponent. Since ```10⁴``` evaluates to ```10,000```, ```1.2 x 10⁴``` evaluates to ```12,000```.

### Significant digits

- The digits in the **significand** (the part before the ‘e’ - (*5e-2*)) are called the **significant digits** (or **significant figures**). The more significant digits, the more precise a number is.

- <span style="color:yellow">**KEY INSIGHT**</span>: The more digits in the significand, the more precise a number is.

### How to convert decimal numbers to scientific notation

```
Start with: 600.410
Slide decimal left 2 spaces: 6.00410e2
No leading zeros to trim: 6.00410e2
Don't trim trailing zeros: 6.00410e2 (6 significant digits)

Start with: 0.0078900
Slide decimal right 3 spaces: 0007.8900e-3
Trim leading zeros: 7.8900e-3
Don't trim trailing zeros: 7.8900e-3 (5 significant digits)

Start with: 42030 (no information to suggest last 0 is significant)
Slide decimal left 4 spaces: 4.2030e4
No leading zeros to trim: 4.2030e4
Trim trailing zeros: 4.203e4 (4 significant digits)

Start with: 42030 (last 0 is significant)
Slide decimal left 4 spaces: 4.2030e4
No leading zeros to trim: 4.2030e4
Keep trailing zeros: 4.2030e4 (5 significant digits)
```

### Handling trailing zeros

## [4.8 Floating point numbers](https://www.learncpp.com/cpp-tutorial/floating-point-numbers/)

- Integers are great for counting whole numbers, but sometimes we need to store very large (positive or negative) numbers, or numbers with a fractional component. A **floating point** type variable is a variable that can hold a number with a fractional component, such as 4320.0, -3.33, or 0.01226. 

- There are three different floating point data types: **float**, **double**, and **long double**. As with integers, C++ does not define the actual size of these types (but it does guarantee minimum sizes).

```C++
float fValue;
double dValue;
long double ldValue;

int x{5};      // 5 means integer
double y{5.0}; // 5.0 is a floating point literal (no suffix means double type by default)
float z{5.0f}; // 5.0 is a floating point literal, f suffix means float type
```

- When using floating point literals, **always include at least one decimal place** (even if the decimal is 0). This helps the compiler understand that the number is a floating point number and not an integer.

- <span style="color:green">**BEST PRACTICE**</span>: Always make sure the type of your literals match the type of the variables they’re being assigned to or used to initialize. Otherwise an unnecessary conversion will result, possibly with a loss of precision.

### Printing floating point numbers

```C++
#include <iostream>

int main()
{
	std::cout << 5.0 << '\n';
	std::cout << 6.7f << '\n';
	std::cout << 9876543.21 << '\n';

	return 0;
}

/*
5
6.7
9.87654e+06 >> scientific notation
*/
```

### Floating point range

- 4 bytes - ±1.18 x 10-38 to ±3.4 x 1038 and 0.0 - 6-9 significant digits, typically 7.

### Floating point precision

- The **precision** of a floating point type defines how many significant digits it can represent without information loss.

- <span style="color:yellow">**KEY INSIGHT**</span>: A floating point type can only precisely represent a certain number of significant digits. Using a value with more significant digits than the minimum may result in the *value being stored inexactly*.

### Outputting floating point values

```C++
// When outputting floating point numbers, std::cout has a default precision of 6
#include <iostream>

int main()
{
    std::cout << 9.87654321f << '\n';
    std::cout << 987.654321f << '\n';
    std::cout << 987654.321f << '\n';
    std::cout << 9876543.21f << '\n';
    std::cout << 0.0000987654321f << '\n';

    return 0;
}

/*
9.87654
987.654
987654
9.87654e+006
9.87654e-005
*/
```

- We can override the default precision that ```std::cout``` shows by using an output manipulator function named ```std::setprecision()```. **Output manipulators** alter how data is output, and are defined in the ```iomanip``` header.

```C++
#include <iomanip> // for output manipulator std::setprecision()
#include <iostream>

int main()
{
    std::cout << std::setprecision(17); // show 17 digits of precision
    std::cout << 3.33333333333333333333333333333333333333f <<'\n'; // f suffix means float
    std::cout << 3.33333333333333333333333333333333333333 << '\n'; // no suffix means double

    return 0;
}

/*
3.3333332538604736 <<<<<<<<<<<<<<<<
3.3333333333333335
*/
```

- Because we set the precision to 17 digits using ```std::setprecision()```, each of the above numbers is printed with 17 digits. But, as you can see, the numbers certainly aren’t precise to 17 digits! And because floats are less precise than doubles, the float has more error.

- <span style="color:green">**TIP**</span>: Output manipulators (and input manipulators) are sticky -- meaning if you set them, they will remain set.

```C++
#include <iomanip> // for std::setprecision()
#include <iostream>

int main()
{
    float f { 123456789.0f }; // f has 10 significant digits
    std::cout << std::setprecision(9); // to show 9 digits in f
    std::cout << f << '\n';

    return 0;
}

/*
123456792 <<<<< this value is greater!
*/
```

- 123456792 is greater than 123456789. The value 123456789.0 has 10 significant digits, but float values typically have *7 digits of precision* (and the result of 123456792 is precise only to 7 significant digits). We lost some precision! When *precision is lost* because a number can’t be stored precisely, this is called a **rounding error**.

- <span style="color:green">**BEST PRACTICE**</span>: Favor double over float unless space is at a premium, as the lack of precision in a float will often lead to inaccuracies.

### Rounding errors make floating point comparisons tricky

- Floating point numbers are tricky to work with due to non-obvious differences between binary (how data is stored) and decimal (how we think) numbers.

```C++
#include <iomanip> // for std::setprecision()
#include <iostream>

int main()
{
    double d{0.1};
    std::cout << d << '\n'; // use default cout precision of 6
    std::cout << std::setprecision(17);
    std::cout << d << '\n';

    return 0;
}

/*
0.1
0.10000000000000001
*/
```

```C++
#include <iomanip> // for std::setprecision()
#include <iostream>

int main()
{
    std::cout << std::setprecision(17);

    double d1{ 1.0 };
    std::cout << d1 << '\n';

    double d2{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 }; // should equal 1.0
    std::cout << d2 << '\n';

    return 0;
}

/*
1
0.99999999999999989
*/
```

- Because floating point numbers tend to be inexact, *comparing floating point numbers* is generally problematic!

- <span style="color:yellow">**KEY INSIGHT**</span>: Rounding errors occur when a number can’t be stored precisely. This can happen even with simple numbers, like 0.1. Therefore, rounding errors can, and do, happen all the time. Rounding errors aren’t the exception -- they’re the norm. *Never assume your floating point numbers are exact*. A corollary of this rule is: *be wary of using floating point numbers for financial or currency data*.

- https://float.exposed/0x3dcccccd

### NaN and Inf

- There are two special categories of floating point numbers. The first is **Inf**, which *represents infinity*. **Inf** can be positive or negative. The second is **NaN**, which stands for *“Not a Number”*.

```C++
#include <iostream>

int main()
{
    double zero {0.0};
    double posinf { 5.0 / zero }; // positive infinity
    std::cout << posinf << '\n';

    double neginf { -5.0 / zero }; // negative infinity
    std::cout << neginf << '\n';

    double nan { zero / zero }; // not a number (mathematically invalid)
    std::cout << nan << '\n';

    return 0;
}

/*
1.#INF
-1.#INF
1.#IND
*/
```

- <span style="color:green">**BEST PRACTICE**</span>: Avoid division by 0.0 altogether, even if your compiler supports it.

### Conclusion

1. **Floating point numbers** are useful for storing very large or very small numbers, including those with fractional components.

2. **Floating point numbers** often have small rounding errors, even when the number has fewer significant digits than the precision. Many times these go unnoticed because they are so small, and because the numbers are truncated for output. However, comparisons of floating point numbers may not give the expected results. Performing mathematical operations on these values will cause the rounding errors to grow larger.

## [4.9 Boolean values](https://www.learncpp.com/cpp-tutorial/boolean-values/)

- These kinds of sentences that have only two possible outcomes: yes/true, or no/false are so common, that many programming languages include a special type for dealing with them. That type is called a **Boolean** type.

### Boolean variables

- Boolean variables are variables that can have only two possible values: *true*, and *false*. To declare a Boolean variable, we use the keyword **bool**.

```C++
bool b1 { true };
bool b2 { false };
b1 = false;
bool b3 {}; // default initialize to false
```

### Printing Boolean values

```C++
#include <iostream>

int main()
{
    std::cout << true << '\n'; // true evaluates to 1
    std::cout << !true << '\n'; // !true evaluates to 0

    bool b {false};
    std::cout << b << '\n'; // b is false, which evaluates to 0
    std::cout << !b << '\n'; // !b is true, which evaluates to 1
    return 0;
}
/*
1
0
0
1
*/
```

### Integer to Boolean conversion

```C++
#include <iostream>

int main()
{
	std::cout << std::boolalpha; // print bools as true or false

	bool b1 = 4 ; // copy initialization allows implicit conversion from int to bool
	std::cout << b1 << '\n';

	bool b2 = 0 ; // copy initialization allows implicit conversion from int to bool
	std::cout << b2 << '\n';

	return 0;
}
/*
true
false
*/
```

### Inputting Boolean values

```C++
#include <iostream>

int main()
{
	bool b{};
	std::cout << "Enter a boolean value: ";

	// Allow the user to enter 'true' or 'false' for boolean values
	// This is case-sensitive, so True or TRUE will not work
	std::cin >> std::boolalpha;
	std::cin >> b;

	std::cout << "You entered: " << b << '\n';

	return 0;
}
```

- <span style="color:red">**WARNING**</span>: Enabling ```std::boolalpha``` will only allow lower-cased “false” or “true” to be accepted. Variations with capital letters will not be accepted.

### Boolean return values

```C++
#include <iostream>

// returns true if x and y are equal, false otherwise
bool isEqual(int x, int y)
{
    return x == y; // operator== returns true if x equals y, and false otherwise
}

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    std::cout << std::boolalpha; // print bools as true or false

    std::cout << x << " and " << y << " are equal? ";
    std::cout << isEqual(x, y) << '\n'; // will return true or false

    return 0;
}
/*
Enter an integer: 5
Enter another integer: 5
5 and 5 are equal? true
---
Enter an integer: 6
Enter another integer: 4
6 and 4 are equal? false
*/
```

## [4.10 Introduction to if statements](https://www.learncpp.com/cpp-tutorial/introduction-to-if-statements/)

- An **if statement** allows us to execute one (or more) lines of code only if some condition is true.

- A **condition** (also called a **conditional expression**) is an expression that evaluates to a Boolean value.

### A sample program using an ```if``` statement

```C++
#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int x {};
    std::cin >> x;

    if (x == 0)
        std::cout << "The value is zero\n";

    return 0;
}
/*
Enter an integer: 0
The value is zero
*/
```

### If-else

```C++
#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int x {};
    std::cin >> x;

    bool zero { (x == 0) };
    if (zero)
        std::cout << "The value is zero\n";
    if (!zero)
        std::cout << "The value is non-zero\n";

    return 0;
}
```

```
if (condition)
    true_statement;
else
    false_statement;
```

### Chaining if statements

```C++
#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int x {};
    std::cin >> x;

    if (x > 0)
        std::cout << "The value is positive\n";
    else if (x < 0)
        std::cout << "The value is negative\n";
    else
        std::cout << "The value is zero\n";

    return 0;
}
```

### Boolean ```return``` values and ```if``` statements

```C++
#include <iostream>

// returns true if x and y are equal, false otherwise
bool isEqual(int x, int y)
{
    return (x == y); // operator== returns true if x equals y, and false otherwise
}

int main()
{
    std::cout << "Enter an integer: ";
    int x {};
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y {};
    std::cin >> y;

    if (isEqual(x, y))
        std::cout << x << " and " << y << " are equal\n";
    else
        std::cout << x << " and " << y << " are not equal\n";

    return 0;
}
```

### Non-Boolean conditionals

```C++
#include <iostream>

int main()
{
    if (4) // nonsensical, but for the sake of example...
        std::cout << "hi\n";
    else
        std::cout << "bye\n";

    return 0;
}
```

### If-statements and early returns

- A return statement that is not the last statement in a function is called an **early return**.

```C++
#include <iostream>

// returns the absolute value of x
int abs(int x)
{
    if (x < 0)
        return -x; // early return (only when x < 0)

    return x;
}

int main()
{
    std::cout << abs(4) << '\n'; // prints 4
    std::cout << abs(-3) << '\n'; // prints 3

    return 0;
}
```

## [4.11 Chars](https://www.learncpp.com/cpp-tutorial/chars/)

- The **char** data type was designed to hold a single character. A **character** can be a single letter, number, symbol, or whitespace.

- The char data type is an integral type, meaning the underlying value is *stored as an integer*.

- Similar to how a Boolean value ```0``` is interpreted as ```false``` and non-zero is interpreted as ```true```, the integer stored by a ```char``` variable are intepreted as an **ASCII character**.

- **ASCII** stands for *American Standard Code for Information Interchange*, and it defines a particular way to represent *English characters* (plus a few other symbols) as numbers between 0 and 127 (called an **ASCII code** or code point). For example, ASCII code 97 is interpreted as the character ‘a’.

### Initializing chars

```C++
char ch2{ 'a' }; // initialize with code point for 'a' (stored as integer 97) (preferred)

char ch1{ 97 }; // initialize with integer 97 ('a') (not preferred)

char ch{5}; // initialize with integer 5 (stored as integer 5)

char ch{'5'}; // initialize with code point for '5' (stored as integer 53)
```

### Printing chars

```C++
#include <iostream>

int main()
{
    char ch1{ 'a' }; // (preferred)
    std::cout << ch1; // cout prints character 'a'

    char ch2{ 98 }; // code point for 'b' (not preferred)
    std::cout << ch2; // cout prints a character ('b')


    return 0;
}
/*
ab
*/
```

### Inputting chars

```C++
#include <iostream>

int main()
{
    std::cout << "Input a keyboard character: ";

    char ch{};
    std::cin >> ch;
    std::cout << "You entered: " << ch << '\n';

    return 0;
}
/*
Input a keyboard character: q
You entered: q
*/
```

```C++
#include <iostream>

int main()
{
    std::cout << "Input a keyboard character: "; // assume the user enters "abcd" (without quotes)

    char ch{};
    std::cin >> ch; // ch = 'a', "bcd" is left queued.
    std::cout << "You entered: " << ch << '\n';

    // Note: The following cin doesn't ask the user for input, it grabs queued input!
    std::cin >> ch; // ch = 'b', "cd" is left queued.
    std::cout << "You entered: " << ch << '\n';

    return 0;
}
/*
Input a keyboard character: abcd
You entered: a
You entered: b
*/
```

- A **string** is a collection of sequential characters (and thus, a string can hold multiple symbols).

### Char size, range, and default sign

- **Char** is defined by C++ to always be *1 byte in size*.

- If you’re using a char to hold small integers (something you should not do unless you’re explicitly optimizing for space), you should always specify whether it is signed or unsigned. A signed char can hold a number between *-128 and 127*. An unsigned char can hold a number between 0 and 255.

### Escape sequences

- There are some characters in C++ that have special meaning. These characters are called **escape sequences**. An escape sequence starts with a ‘\’ (backslash) character, and then a following letter or number.

```C++
#include <iostream>

int main()
{
    int x { 5 };
    std::cout << "The value of x is: " << x << '\n'; // standalone \n goes in single quotes
    std::cout << "First line\nSecond line\n";        // \n can be embedded in double quotes
    return 0;
}
/*
The value of x is: 5
First line
Second line
*/
```

- Another commonly used escape sequence is ```'\t'```, which embeds a horizontal tab.

### Newline (\n) vs. std::endl

### What’s the difference between putting symbols in single and double quotes?

- Single chars are always put in single quotes (e.g. ```'a'```, ```'+'```, ```'5'```). A char can only represent one symbol (e.g. the letter a, the plus symbol, the number 5).

- Text between double quotes (e.g. “Hello, world!”) is treated as a string of multiple characters. 

- <span style="color:green">**BEST PRACTICE**</span>: Put stand-alone chars in single quotes (e.g. ```'t'``` or ```'\n'```, not ```"t"``` or ```"\n"```). This *helps the compiler optimize more effectively*.

### Avoid multicharacter literals

- For backwards compatibility reasons, many C++ compilers support **multicharacter literals**, which are char literals that contain multiple characters (e.g. ```'56'```).

- <span style="color:green">**BEST PRACTICE**</span>: Avoid multicharacter literals (e.g. ```'56'```).

- <span style="color:red">**WARNING**</span>: Make sure that your newlines are using escape sequence ```'\n'``` , not multicharacter literal ```'/n'```.

### What about the other char types, ```wchar_t```, ```char8_t```, ```char16_t```, and ```char32_t```?

- ```wchar_t``` **should be avoided in almost all cases (except when interfacing with the Windows API)**. Its size is implementation defined, and is not reliable. It has largely been deprecated.

- The term **“deprecated”** means “still supported, but no longer recommended for use, because it has been replaced by something better or is no longer considered safe”.

- The most well-known mapping outside of ASCII is the **Unicode standard**, which maps over *144,000 integers to characters* in many different languages. Because Unicode contains so many code points, a single *Unicode code point needs 32-bits* to represent a character (called UTF-32). However, Unicode characters can also be encoded using multiple 16-bit or 8-bit characters (called UTF-16 and UTF-8 respectively).

- ```char16_t``` and ```char32_t``` were added to C++11 to provide explicit support for 16-bit and 32-bit Unicode characters. ```char8_t``` has been added in C++20. 

- You won’t need to use ```char8_t```, ```char16_t```, or ```char32_t``` unless you’re planning on making your program Unicode compatible. 

- In the meantime, you should only use ASCII characters when working with characters (and strings). Using characters from other character sets may cause your characters to display incorrectly.

## [4.12 Introduction to type conversion and static_cast](https://www.learncpp.com/cpp-tutorial/introduction-to-type-conversion-and-static_cast/)

### Implicit type conversion

-  The process of converting a value from one type to another type is called **type conversion**.

- When the compiler does type conversion on our behalf without us explicitly asking, we call this **implicit type conversion**.

### Type conversion produces a new value

- Even though it is called a conversion, *a type conversion does not actually change the value or type of the value being converted*. Instead, the value to be converted is used as input, and the conversion results in a new value of the target type (via direct initialization).

```C++
#include <iostream>

void print(double x) // print takes a double parameter
{
	std::cout << x << '\n';
}

int main()
{
	int y { 5 };
	print(y); // y is of type int

	return 0;
}
```

- <span style="color:yellow">**KEY INSIGHT**</span>: Type conversion uses direct initialization to produce a new value of the target type from a value of a different type.

### Implicit type conversion warnings

```C++
#include <iostream>

void print(int x) // print now takes an int parameter
{
	std::cout << x << '\n';
}

int main()
{
	print(5.5); // warning: we're passing in a double value

	return 0;
}
```

- Some type conversions are always safe to make (such as int to double), whereas others may result in the value being changed during conversion (such as double to int). Unsafe implicit conversions will typically either generate a compiler warning, or (in the case of brace initialization) an error.

### An introduction to explicit type conversion via the ```static_cast``` operator

- C++ supports a second method of type conversion, called explicit type conversion. **Explicit type conversion** allow us (the programmer) to explicitly tell the compiler to convert a value from one type to another type, and that we take full responsibility for the result of that conversion (meaning that if the conversion results in the loss of value, it’s our fault).

```
static_cast<new_type>(expression)
```

```C++
#include <iostream>

void print(int x)
{
	std::cout << x << '\n';
}

int main()
{
	print( static_cast<int>(5.5) ); // explicitly convert double value 5.5 to an int

	return 0;
}
```

### Using static_cast to convert char to int

```C++
#include <iostream>

int main()
{
    char ch{ 97 }; // 97 is ASCII code for 'a'
    std::cout << ch << " has value " << static_cast<int>(ch) << '\n'; // print value of variable ch as an int

    return 0;
}
// a has value 97
```

### Converting unsigned numbers to signed numbers

```C++
#include <iostream>

int main()
{
    unsigned int u { 5 };
    int s { static_cast<int>(u) }; // return value of variable u as an int

    std::cout << s << '\n';
    return 0;
}
```

- <span style="color:red">**WARNING**</span>: The ```static_cast``` operator will produce undefined behavior if the value being converted doesn’t fit in range of the new type.

### ```std::int8_t``` and ```std::uint8_t``` likely behave like chars instead of integers

```C++
#include <cstdint>
#include <iostream>

int main()
{
    std::int8_t myInt{65};      // initialize myInt with value 65
    std::cout << myInt << '\n'; // you're probably expecting this to print 65
    // print 'A'
    return 0;
}
```

## [4.x Chapter 4 summary and quiz](https://www.learncpp.com/cpp-tutorial/chapter-4-summary-and-quiz/)

### Chapter Review

- The smallest unit of memory is a binary digit, also called a **bit**. 

- The smallest unit *amount of memory that can be addressed* (accessed) directly is a **byte**. The modern standard is that a byte equals 8 bits.

- A **data type** tells the compiler how to interpret the contents of memory in some meaningful way. C++ comes with support for many fundamental data types, including floating point numbers, integers, boolean, chars, null pointers, and void.

- **Void** is used to indicate no type. It is primarily used to indicate that a function does not return a value.

- Different types take different amounts of memory, and the amount of memory used may vary by machine.

- The **sizeof** operator can be used to return the size of a type in bytes.

- **Signed integers** are used for holding positive and negative whole numbers, including 0. The set of values that a specific data type can hold is called its **range**. When using integers, keep an eye out for overflow and integer division problems.

- **Unsigned integers** only hold positive numbers (and 0), and should generally be avoided unless you’re doing bit-level manipulation.

- **Fixed-width integers** are integers with guaranteed sizes, but they may not exist on all architectures. The fast and least integers are the fastest and smallest integers that are at least some size. std::int8_t and std::uint8_t should generally be avoided, as they tend to behave like chars instead of integers.

- **size_t** is an unsigned integral type that is used to represent the size or length of objects.

- **Scientific notation** is a shorthand way of writing lengthy numbers. C++ supports scientific notation in conjunction with floating point numbers. The digits in the significand (the part before the e) are called the **significant digits**.

- **Floating point** is a set of types designed to hold real numbers (including those with a fractional component). The **precision** of a number defines how many significant digits it can represent without information loss. A **rounding error** can occur when too many significant digits are stored in a floating point number that can’t hold that much precision. Rounding errors happen all the time, even with simple numbers such as 0.1. Because of this, you shouldn’t compare floating point numbers directly.

- The **Boolean** type is used to store a ```true``` or ```false``` value.

- **If statements** allow us to execute one or more lines of code if some condition is true. The conditional expression of an if-statement is interpreted as a boolean value. An **else statement** can be used to execute a statement when a prior if-statement condition evaluates to false.

- **Char** is used to store values that are interpreted as an ASCII character. When using chars, be careful not to mix up ASCII code values and numbers. Printing a char as an integer value requires use of ```static_cast``` (```static_cast<int>(x)```).

