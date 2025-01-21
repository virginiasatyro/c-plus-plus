# Chapter 1 Introduction / Getting Started

## [1.1 Statements and the structure of a program](https://www.learncpp.com/cpp-tutorial/statements-and-the-structure-of-a-program/)

### Statements

- A computer program is a sequence of instructions that tell the computer what to do. 
- A **statement** is a type of instruction that causes the program to _perform some action_.
- Statements are the smallest independent unit of computation in the C++ language..
- Most (but not all) statements in C++ end in a semicolon.
- In a high-level language such as C++, a single statement may compile into many machine language instructions.
- There are many different kinds of statements in C++: Declaration statements, Jump statements, Expression statements, Compound statements, Selection statements (conditionals), Iteration statements (loops), Try blocks.

### Functions and the main function

- A **function** is a collection of statements that get executed sequentially (in order, from top to bottom).
- <span style="color:red">**RULE**</span>: Every C++ program must have a special function named **main**.
- In programming, the name of a function (or object, type, template, etc…) is called its **identifier**.

### Dissecting Hello world!

```C++
#include <iostream>

int main()
{
    std::cout << "Hello world!";
    return 0;
}
```

- This **preprocessor directive** (include) indicates that we would like to use the contents of the *iostream* library, which is the part of the C++ standard library that allows us to read and write text from/to the console.

### Syntax and syntax errors

-  The rules that govern how sentences are constructed in a language is called **syntax**.
- A **syntax error** is a compiler error that occurs at compile-time when your program violates the grammar rules of the C++ language.

## [1.2 Comments](https://www.learncpp.com/cpp-tutorial/comments/)

- A **comment** is a programmer-readable note that is inserted directly into the source code of the program.

### Single-line comments

- The ```//``` symbol begins a C++ single-line comment, which tells the compiler to ignore everything from the ```//``` symbol to the end of the line. 

### Multi-line comments

- The ```/*``` and ```*/``` pair of symbols denotes a C-style multi-line comment. Everything in between the symbols is ignored.
- Comments should be used to describe *why* the code is doing something. A bad statement comment explains *what* the code is doing.
- <span style="color:green">**BEST PRACTICE**</span>: Comment your code liberally, and write your comments as if speaking to someone who has no idea what the code does. Don’t assume you’ll remember why you made specific choices.

### Commenting out code

- Converting one or more lines of code into a comment is called **commenting out your code**. This provides a convenient way to (temporarily) exclude parts of your code from being included in your compiled program.
- <span style="color:green">**TIP**</span>: If you do need to comment out a code block that contains multi-line comments, you can also consider using the ```#if``` 0 preprocessor directive.

## [1.3 Introduction to objects and variables](https://www.learncpp.com/cpp-tutorial/introduction-to-objects-and-variables/)

### Data and values

- In computing, **data** is any information that can be moved, processed, or stored by a computer.
- <span style="color:yellow">**KEY INSIGHT**</span>: **Programs** are collections of instructions that manipulate **data** to produce a desired result.
- A single piece of data is called a **value**.

### Random Access Memory

- The main memory in a computer is called **Random Access Memory** (**RAM**).
- When we run a program, the operating system *loads the program into RAM*.
- The operating system also *reserves some additional RAM* for the program to use while it is running. 
- Common uses for this memory are to store values entered by the user, to store data read in from a file or network, or to store values calculated while the program is running (e.g. the sum of two values) so they can be used again later.

### Objects and variables

- An **object** is a region of storage (usually memory) that can store a value, and has other associated properties.
- An object with a name is called a **variable**.
- <span style="color:yellow">**KEY INSIGHT**</span>: An **object** is used to store a value in memory. A **variable** is an object that has a name (identifier).

### Variable instantiation

- In order to create a variable, we use a special kind of declaration statement called a **definition**.

```C++
int x; // define a variable named x, of type int
//  whenever the compiler sees the identifier x, it will know that we’re referencing this variable
```
- When the program is run (called **runtime**), the variable will be instantiated. 
- **Instantiation** - the object will be created and assigned a memory address.
- An **instantiated object** is sometimes called an instance.

### Data types

- A **data type** tells the compiler what type of value (e.g. a number, a letter, text, etc…) the variable will store.
- In C++, the type of a variable must be known at **compile-time** (when the program is compiled).

### Defining multiple variables

- <span style="color:green">**BEST PRACTICE**</span>: Although the language allows you to do so, avoid defining multiple variables of the same type in a single statement. Instead, define each variable in a separate statement on its own line (and then use a single-line comment to document what it is used for).

## [1.4 Variable assignment and initialization](https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/)

### Variable assignment

- After a variable has been defined, you can give it a value (in a separate statement) using the = operator. This process is called **assignment**, and the = operator is called the **assignment operator**.

```C++
int width; // define an integer variable named width
width = 5; // assignment of value 5 into variable width

// variable width now has value 5
```

- By default, assignment copies the value on the right-hand side of the = operator to the variable on the left-hand side of the operator. This is called **copy assignment**.
-  When a variable is defined, you can also provide an initial value for the variable at the same time. This is called **initialization**. The value used to initialize a variable is called an **initializer**.

### Initialization

```C++
int a;         // no initializer (default initialization)
int b = 5;     // initializer after equals sign (copy initialization)
int c( 6 );    // initializer in parenthesis (direct initialization)

// List initialization methods (C++11) (preferred)
int d { 7 };   // initializer in braces (direct list initialization)
int e = { 8 }; // initializer in braces after equals sign (copy list initialization)
int f {};      // initializer is empty braces (value initialization)

int width { 4.5 }; // error: a number with a fractional value can't fit into an int

int width {}; // value initialization / zero initialization to value 0
```

### Default initialization

- When no initialization value is provided (such as for variable a above), this is called default initialization. 
- In most cases, default initialization leaves a variable with an indeterminate value.

### Default initialization

- When an initializer is provided after an equals sign, this is called copy initialization. 
- This form of initialization was inherited from C.

### Direct initialization

- When an initializer is provided inside parenthesis, this is called direct initialization.

### List initialization

- The modern way to initialize objects in C++ is to use a form of initialization that makes use of curly braces. This is called list initialization (or uniform initialization or brace initialization).

```C++
int width { 5 };    // direct list initialization of value 5 into variable width
int height = { 6 }; // copy list initialization of value 6 into variable height
int depth {};       // value initialization (see next section)
```

- When no initialization value is provided (such as for variable a above), this is called **default initialization**. In most cases, default initialization leaves a variable with an **indeterminate value**.
- When an initializer is provided after an equals sign, this is called **copy initialization**.
- <span style="color:green">**BEST PRACTICE**</span>: Prefer direct list initialization (or value initialization) for initializing your variables ([CoreGuidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Res-list)).

### Value initialization and zero initialization

```C++
// When should I initialize with { 0 } vs {}?

int x { 0 };    // explicit initialization to value 0
std::cout << x; // we're using that zero value

int x {};      // value initialization
std::cin >> x; // we're immediately replacing that value
```

### Initialize your variables

- <span style="color:green">**BEST PRACTICE**</span>: Initialize your variables upon creation!([CoreGuidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#es20-always-initialize-an-object))

### Initializing multiple variables

```C++
int a = 5, b = 6;          // copy initialization
int c( 7 ), d( 8 );        // direct initialization
int e { 9 }, f { 10 };     // direct brace initialization
int g = { 9 }, h = { 10 }; // copy brace initialization
int i {}, j {};            // value initialization

int a, b = 5; // wrong (a is not initialized!)

int a = 5, b = 5; // correct
```

### Unused initialized variables warnings

- Modern compilers will typically generate warnings if a variable is initialized but not used (since this is rarely desirable).
-  And if “treat warnings as errors” is enabled, these warnings will be promoted to errors and cause the compilation to fail.

### The ```[[maybe_unused]]``` attribute C++17

- C++17 introduced the ```[[maybe_unused]]``` attribute, which allows us to tell the compiler that we’re okay with a variable being unused.

```C++
int main()
{
    [[maybe_unused]] double pi { 3.14159 };
    [[maybe_unused]] double gravity { 9.8 };
    [[maybe_unused]] double phi { 1.61803 };

    // the above variables will not generate unused variable warnings

    return 0;
}
```

## [1.5 Introduction to iostream: cout, cin, and endl](https://www.learncpp.com/cpp-tutorial/introduction-to-iostream-cout-cin-and-endl/)

### The input/output library

- The input/output library (io library) is part of the C++ standard library that deals with basic input and output.

```C++
#include <iostream>

// rest of code that uses iostream functionality here
```

### ```std::cout```

- ```std::cout``` - allows us to send data to the console to be printed as text. cout stands for “character output”.
-  **insertion operator (<<)** - to send the text Hello world! to the console to be printed.

### ```std::endl```

- ```std::endl ``` prints a newline character to the console.
- <span style="color:green">**BEST PRACTICE**</span>: Output a newline whenever a line of output is complete.

### ```std::cout``` is buffered

- Statements in our program request that output be sent to the console. However, that output is typically not sent to the console immediately. Instead, the requested output “gets in line”, and is stored in a region of  memory set aside to collect such requests (called a **buffer**). Periodically, the buffer is **flushed**, meaning all of the data collected in the buffer is transferred to its destination (in this case, the console).

### ```std::endl``` vs ```‘\n’```

- Using ```std::endl``` can be a bit inefficient, as it actually does two jobs: it moves the cursor to the next line of the console, and it **flushes the buffer**. 

- Because of this, use of the ```\n``` character is typically preferred instead. The ```\n``` character moves the cursor to the next line of the console, but doesn’t request a flush, so it will often perform better. 

- <span style="color:green">**BEST PRACTICE**</span>: Prefer ```\n``` over ```std::endl``` when outputting text to the console.

### ```std::cin```

- ```std::cin``` (which stands for “character input”) reads input from keyboard using the **extraction operator** (```>>```).

- The C++ I/O library does not provide a way to accept keyboard input without the user having to press enter. If this is something you desire, you’ll have to use a third party library. For console applications, we’d recommend *pdcurses, FXTUI, cpp-terminal, or notcurses*.

## [1.6 Uninitialized variables and undefined behavior](https://www.learncpp.com/cpp-tutorial/uninitialized-variables-and-undefined-behavior/)

### Uninitialized variables

- Unlike some programming languages, C/C++ *does not initialize most variables to a given value (such as zero) automatically*. Thus when a variable is given a memory address to use to store data, the default value of that variable is whatever (garbage) value happens to already be in that memory address!

- A variable that has not been given a known value (usually through initialization or assignment) is called an **uninitialized variable**.

- **Initialized** = The object is given a known value at the point of definition.
- **Assignment** = The object is given a known value beyond the point of definition.
- **Uninitialized** = The object has not been given a known value yet.

- This lack of initialization is a performance optimization inherited from C, back when computers were slow. Imagine a case where you were going to read in 100,000 values from a file. In such case, you might create 100,000 variables, then fill them with data from the file.

- Once you are more comfortable with the language, there may be certain cases where you omit the initialization for optimization purposes. But this should always be done selectively and intentionally.

### Undefined behavior

- **Undefined behavior** is the result of executing code whose behavior is not well-defined by the C++ language.

- Code implementing undefined behavior may exhibit any of the following symptoms: program produces different results every time it is run, program consistently produces the same incorrect result, program behaves inconsistently (sometimes produces the correct result, sometimes not),
your program seems like it’s working but produces incorrect results later in the program, program crashes, either immediately or later, program works on some compilers but not others, program works until you change some other seemingly unrelated code.

- <span style="color:red">**RULE**</span>: Take care to avoid all situations that result in undefined behavior, such as using uninitialized variables.

### Implementation-defined behavior and unspecified behavior

- **Implementation-defined behavior** means the behavior of some syntax is left up to the implementation (the compiler) to define. Such behaviors must be consistent and documented, but different compilers may produce different results.

```C++
	std::cout << sizeof(int) << '\n'; // print how many bytes of memory an int value takes

    // On most platforms, this will produce 4, but on others it may produce 2
```

- **Unspecified behavior** is almost identical to implementation-defined behavior in that the behavior is left up to the implementation, but the implementation is not required to document the behavior.

- <span style="color:green">**BEST PRACTICE**</span>: Avoid implementation-defined and unspecified behavior whenever possible, as they may cause your program to malfunction on other implementations.

## [1.7 Keywords and naming identifiers](https://www.learncpp.com/cpp-tutorial/keywords-and-naming-identifiers/)

### Keywords

- C++ reserves a set of 92 words (as of C++23) for its own use. These words are called keywords (or reserved words), and each of these keywords has a special meaning within the C++ language.

### Identifier naming rules

- The name of a variable (or function, type, or other kind of item) is called an **identifier**.

- Naming rules...

### Identifier naming best practices

- It is a convention in C++ that variable names *should begin with a lowercase letter*.

```C++
int value; // conventional

int Value; // unconventional (should start with lower case letter)
int VALUE; // unconventional (should start with lower case letter)
int VaLuE; // unconventional (see your psychiatrist) ;)

int my_variable_name;   // conventional (separated by underscores/snake_case)
int my_function_name(); // conventional (separated by underscores/snake_case)

int myVariableName;   // conventional (intercapped/CamelCase)
int myFunctionName(); // conventional (intercapped/CamelCase)

int my variable name;   // invalid (whitespace not allowed)
int my function name(); // invalid (whitespace not allowed)

int MyVariableName;   // unconventional (should start with lower case letter)
int MyFunctionName(); // unconventional (should start with lower case letter)
```
- <span style="color:green">**BEST PRACTICE**</span>: When working in an existing program, use the conventions of that program (even if they don’t conform to modern best practices). Use modern best practices when you’re writing new programs.

-  You should *avoid naming your identifiers starting with an underscore*, as these names are typically reserved for OS, library, and/or compiler use.

- Your identifiers should make clear what the value they are holding means (particularly if the units aren’t obvious). 

## [1.8 Whitespace and basic formatting](https://www.learncpp.com/cpp-tutorial/whitespace-and-basic-formatting/)

- **Whitespace** is a term that refers to characters that are used for formatting purposes (spaces, tabs, new lines).

### Some language elements must be whitespace-separated

### Using whitespace to format code

### Basic formatting

- <span style="color:green">**BEST PRACTICE**</span>: Consider keeping your lines to 80 chars or less in length.

- <span style="color:green">**BEST PRACTICE**</span>: When working in an existing project, be consistent with whatever style has already been adopted.

### Automatic formatting

- <span style="color:green">**BEST PRACTICE**</span>: Using the automatic formatting feature is highly recommended to keep your code’s formatting style consistent ([clang-format](https://clang.llvm.org/docs/ClangFormat.html)).

## [1.9 Introduction to literals and operators](https://www.learncpp.com/cpp-tutorial/introduction-to-literals-and-operators/)

### Literals

- A **literal** (also known as a **literal constant**) is a fixed value that has been inserted directly into the source code.

```C++
#include <iostream>

int main()
{
    std::cout << 5 << '\n'; // print the value of a literal
                            // 5 can be printed directly

    int x { 5 };
    std::cout << x << '\n'; // print the value of a variable
                            // 5 must be fetched from the memory the variable represents
    return 0;
}
```

- <span style="color:yellow">**KEY INSIGHT**</span>: **Literals** are values that are inserted directly into the source code. These values usually appear directly in the executable code (unless they are optimized out). **Objects** and **variables** represent memory locations that hold values. These values can be fetched on demand.

### Operators

- In mathematics, an **operation** is a process involving zero or more input values (called operands) that produces a new value (called an output value). The specific operation to be performed is denoted by a symbol called an **operator**.

-  In C++, the output value of an operation is often called a **return value**.

- The number of operands that an operator takes as input is called the operator’s **arity**.

- **Unary** operators act on one operand.

- **Binary** operators act on two operands (often called left and right, as the left operand appears on the left side of the operator, and the right operand appears on the right side of the operator).

- **Ternary** operators act on three operands.

- **Nullary** operators act on zero operands.

### Chaining operators

- Parenthesis first, then Exponents, then Multiplication & Division, then Addition & Subtraction. This ordering is sometimes abbreviated PEMDAS, or expanded to the mnemonic “Please Excuse My Dear Aunt Sally”.

### Return values and side effects

## [1.10 Introduction to expressions](https://www.learncpp.com/cpp-tutorial/introduction-to-expressions/)

### Expressions

```C++
// five() is a function that returns the value 5
int five()
{
    return 5;
}

int main()
{
    int a{ 2 };             // initialize variable a with literal value 2
    int b{ 2 + 3 };         // initialize variable b with computed value 5
    int c{ (2 * 3) + 4 };   // initialize variable c with computed value 10
    int d{ b };             // initialize variable d with variable value 5
    int e{ five() };        // initialize variable e with function return value 5

    return 0;
}
```

- An **expression** is a combination of literals, variables, operators, and function calls that calculates a single value. The process of executing an expression is called **evaluation**, and the single value produced is called the **result** of the expression.

```C++
2               // 2 is a literal that evaluates to value 2
"Hello world!"  // "Hello world!" is a literal that evaluates to text "Hello world!"
x               // x is a variable that evaluates to the value of x
2 + 3           // operator+ uses operands 2 and 3 to evaluate to value 5
five()          // evaluates to the return value of function five()
```

- As you can see, *literals* evaluate to their own values. *Variables* evaluate to the value of the variable. *Operators* (such as operator+) use their operands to evaluate to some other value.

```C++
// expressions are always evaluated as part of statements - no semicolon!

x = 5           // x = 5 has side effect of assigning 5 to x, evaluates to x
x = 2 + 3       // has side effect of assigning 5 to x, evaluates to x
std::cout << x  // has side effect of printing value of x to console, evaluates to std::cout
```

- ```type identifier { expression };```

### Expression statements

- An **expression statement** is a statement that consists of an expression followed by a semicolon. 

### Useless expression statements

Some compilers (such as gcc and Clang) will produce warnings if they can detect that an expression statement is useless (```2 * 3;```).

### Subexpressions, full expressions, and compound expressions

```C++
2               // 2 is a literal that evaluates to value 2
2 + 3           // 2 + 3 uses operator + to evaluate to value 5
x = 4 + 5       // 4 + 5 evaluates to value 9, which is then assigned to variable x
```

- A **subexpression** is an expression used as an operand. 

- A **full expression** is an expression that is not a subexpression.

- A **compound expression** is an expression that contains two or more uses of operators. 

## [1.11 Developing your first program](https://www.learncpp.com/cpp-tutorial/developing-your-first-program/)

### Multiply by 2

- <span style="color:green">**BEST PRACTICE**</span>: New programmers often try to write an entire program all at once, and then get overwhelmed when it produces a lot of errors. A better strategy is to add one piece at a time, make sure it compiles, and test it. Then when you’re sure it’s working, move on to the next piece.

### The not-good solution

### The mostly-good solution

### The preferred solution

```C++
#include <iostream>

// preferred version
int main()
{
	std::cout << "Enter an integer: ";

	int num{ };
	std::cin >> num;

	std::cout << "Double that number is: " <<  num * 2 << '\n'; // use an expression to multiply num * 2 at the point where we are going to print it

	return 0;
}
```

## [1.x Chapter 1 summary and quiz](https://www.learncpp.com/cpp-tutorial/chapter-1-summary-and-quiz/)

### Chapter Review

- A **statement** is a type of instruction that causes the program to perform some action. Statements are often terminated by a semicolon.

- A **function** is a collection of statements that execute sequentially. Every C++ program must include a special function named main. When you run your program, execution starts at the top of the main function.

- In programming, the name of a function (or object, type, template, etc…) is called its **identifier**.

- The rules that govern how elements of the C++ language are constructed is called **syntax**. A **syntax error** occurs when you violate the grammatical rules of the language.

- **Comments** allow the programmer to leave notes in the code. C++ supports two types of comments. Line comments start with a ```//``` and run to the end of the line. Block comments start with a ```/*``` and go to the paired ```*/``` symbol.

- **Data** is any information that can be moved, processed, or stored by a computer. A single piece of data is called a value.

- A **variable** is a named piece of memory that we can use to store values. In order to create a variable, we use a statement called a **definition statement**. When the program is run, each defined variable is **instantiated**, which means it is assigned a memory address.

- A **data type** tells the compiler how to interpret a piece of data into a meaningful value. An **integer** is a number that can be written without a fractional component, such as 4, 27, 0, -2, or -12.

- **Copy assignment** (via ```operator=```) can be used to assign an already created variable a value.

- **Initialization** can be used to give a variable a value at the point of creation. C++ supports 3 types of initialization: copy initialization, direct initialization (also called parenthesis initialization), list initialization (also called uniform initialization or brace initialization).

- You should *prefer brace initialization over the other initialization forms*, and *prefer initialization over assignment*.

- ```std::cout``` and ```operator<<``` allow us to output an expression to the console as text. ```std::endl``` outputs a newline character, forcing the console cursor to move to the next line. ```std::cin``` and ```operator>>``` allow us to get a value from the keyboard.

- A variable that has not been given a value is called an **uninitialized variable**. Trying to get the value of an uninitialized variable will result in **undefined behavior**, which can manifest in any number of ways.

- C++ reserves a set of names called **keywords**. These have special meaning within the language and may not be used as variable names.

- A **literal constant** is a fixed value inserted directly into the source code. Examples are 5 and “Hello world!”.

- An **operation** is a process involving zero or more input values, called **operands**. The specific operation to be performed is denoted by the provided **operator**. The result of an operation produces an output value.

- **Unary** operators take one operand. **Binary** operators take two operands, often called left and right. **Ternary** operators take three operands. **Nullary** operators take zero operands.

- An **expression** is a combination of literals, variables, operators, and function calls that are evaluated to produce a single output value. The calculation of this output value is called **evaluation**. The value produced is the **result** of the expression.

- An **expression statement** is an expression that has been turned into a statement by placing a semicolon at the end of the expression.

## MY OTHER NOTES

- In C++, the creation of a new instance of the class is called **instantiation**. Memory is allocated for that object and the class constructor runs. Programmers can *instantiate objects on the heap with a new keyword* or *on the stack as a variable declaration*.