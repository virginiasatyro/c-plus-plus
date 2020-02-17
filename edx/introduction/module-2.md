# C++

## edX - Introduction to C++

### Module 2 - Data Types in C++
    
- Available Data Types

- Variables and Constants
    
- Complex Data Types

#### Available Data Types

#### Variables and Constants
```
int myVar = 0;
int yourVar{1};
```
```
int myInt = 12;
long myLong;
myLong = myInt;
```
```
long myLong = (long)myInt;

// or you can use this version as well

long myLong = long(myInt);
```
```
char ch;
int i = 65;
float f = 2.5;
double dbl;
ch = static_cast<char>(i);   // int to char
dbl = static_cast<double>(f);   // float to double
```

#### Complex Data Types

##### Arrays
```
int arrayName[10];

int arrayName[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int arrayName[10] = {1, 2, 3};
```
```
//Accessing Data by Index
int oldNumbers[] = { 1, 2, 3, 4, 5 };

//number will contain the value 3
int number = oldNumbers[2];
```
```
//Iterating Over an Array
int oldNumbers[] = { 1, 2, 3, 4, 5 };
for (int i = 0; i < 5; i++)
{
     int number = oldNumbers[i];
     ...
}
```

##### Strings 

The last character of every string you store is the null character string, typically represented by the ASCII code for 0 which is \0. This is necessary so that the compiler knows when the string ends.
```
char isAString[6] = { 'H', 'e', 'l', 'l', 'o', '\0'};
char isNotAString[5] = { 'H', 'e', 'l', 'l', 'o'};
cout << isAString << endl;
cout << isNotAString << endl;
```
An alternative method of declaring a character array for use as a string is to simply initialize it with a string literal. A string literal is a sequence of characters enclosed in the double quotes (").
```
char isAString[6] = "Hello";
char isAnotherString[] = "Array size is inferred";
```

The string Class If the use of character arrays, single quoted characters, and null termination characters are making you think that strings aren't worth the hassle, consider the string class instead. The ISO/ANSI standard helped to expand the string handling capabilities of C++ by adding the string class.

In order to use the string class, you have to include the string header file. We have not covered namespaces yet but to make typing much easier, you would add a using statement as in the following example.
```
using namespace std;
string myString = "Hello!";
std::string myNewString = "Less typing";
```

##### Structures

Structures are known as user-defined types. You define the struct by giving it a name and then adding the member data types as in the following example:
```
struct coffeeBean
{
     string name;
     string country;
     int strength;
};
```

```
struct coffeeBean
{
     string name;
     string country;
     int strength;
};

coffeeBean myBean = { "Strata", "Colombia", 10 };
coffeeBean newBean;
newBean.name = "Flora";
newBean.country = "Mexico";
newBean.strength = 9;
cout << "Coffee bean " + newBean.name + " is from " + newBean.country << endl;
```

##### Unions 

A union, in C++, is similar to a structure in that it can store multiple, disparate data types. The differentiation is that a union can only store one piece of data at a time. 
```
union numericUnion
{
    int intValue;
    long longValue;
    double doubleValue;
};

numericUnion myUnion;
myUnion.intValue = 3;
cout << myUnion.intValue << endl;
myUnion.doubleValue = 4.5;
cout << myUnion.doubleValue << endl;
cout << myUnion.intValue; cout << endl;
```
The example shows how the union works when on the second to last line, we try to output the value for intValue again. In the output, it results in 0 rather than 3. The reason is that once we assign a value to doubleValue, what was contained in intValue is lost. The union can only store a value in one of its fields at a time.

Consider a situation where you are programming an application that will run on a device with limited memory. You would like to use a data type that can support multiple types internally like a struct, but not necessarily all at the same time. For example, part numbers for components in manufacturing where the part number may be a number or perhaps a string, depending on the manufacturer of the part. In this case, you could use the union to represent a numeric and a string data type internally but only assign the proper data type based on the part number.

##### Enumerations

In the topics on variables and constants, it was noted that anytime you want to create a value for use in a program, where the value should never change, you used a constant. An enumeration can be considered a way to create what are known as symbolic constants. The most common example is to use an enum to define the day of the week. There are only seven possible values for days of the week, and you can be reasonably certain that these values will never change.

To create an enum, you declare it in your code file with the following syntax, which demonstrates creating an enum called Day, that contains the days of the week:
```
enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
```
By default enum values start at 0 and each successive member is increased by a value of 1. As a result, the previous enum 'Day' would contain the values:

- Sunday = 0
- Monday = 1
- Tuesday = 2
- etc.
```
enum Day { Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
Day payDay;
payDay = Thursday;
cout << payDay << endl; // 5
```