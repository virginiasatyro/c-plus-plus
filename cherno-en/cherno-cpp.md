# The Cherno

## C++

### 1) Welcome to C++

- fast code that performs well;
- Good to direct control of hardware;
- Games industries use it a lot;
- Control every single intruction on the CPU;
- Development of OS;

### 2) How to Setup C++ on Windows

### 3) How to Setup C++ on Mac

### 4) How to Setup C++ on Linux

(study more about CMAKE later)

### 5) How C++ Works

```C++
#include <iostream> // preprocessor statement

void Log(const char* message)
{
    std::cout << message << std::endl;
}

int main()
{
    Log("Hello World!");
    std::cin.get();
}
```

(information about Microsoft Visual Studio, which I'm not interest in the moment)

(compiling/linking)

### 6) How the C++ Compiler Works

(compiling and Microsoft Visual Studio)

### 7) How the C++ Linker Works

Resolving two functions with the same name:

```C++
static void Log(const char* message)
{
    std::cout << message << std::endl;
}
```

Marking the second declarations as ```static``` means that the linking that should happen to this log function should only be internal, which means that this log fuction when it gets included into log will just be internal to this file.

### 8) Variables in C++

### 9) Functions in C++

### 10) C++ Header Files

```pragma once```

- see difference between ```pragma once``` and ```ifndef```. Prefer ```pragma once```.
- Diference between ```#include "Log.h"``` and ```#include<iostream>```.
- Diference between ```#include<iostream>```, library in C++ and **```**#include<stdlib.h>```, C;

### 11) How to DEBUG C++ in VISUAL STUDIO

### 12) CONDITIONS and BRANCHES in C++ (if statements)

### 13) BEST Visual Studio Setup for C++ Projects(!)

### 14) Loops in C++ (for loops, while loops)

### 15) Control Flow in C++ (continue, break, return)

### 16) POINTERS in C++

A pointer is an integer, a number which stores a memory address.

```C++
int main()
{
    // void pointer - we don't care what type this data is
    // void* ptr = 0; // this is not valid, zero cannot be a valid address
    void *ptr = NULL; // #define NULL 0
    void *ptr = nullptr; // C++11

    int var = 8;
    void *ptr = &var; // get the memory address of var and assign it to a pointer
    *ptr = 10; // change the value 8 to 10 -->> var = 10 too

    char *buffer = new char[8]; // allocates 8 byte of memory and it is returning a pointer to the beginning of that block of memory
    memset(buffer, 0, 8); // set all bytes to 0

    char **ptr = &buffer;

    delete[] buffer; // deallocate
}
```

### 17) REFERENCES in C++

- way to us to reference an existing variable;
- they have to reference an already existing variable;
- they are not variables, they do not occupy memory/storage;
- the **&** is part of the type: ```int& ref = a;```;
- this reference above created and alias;
- this is not a new variable;
- we can use ```ref``` as it was ```a```;
- when you declare a reference, you have to assign it to something;

```C++
int main()
{
    int a = 5;
    int& ref = a;

    ref = 2;
    cout << a; // a = 2
}
```

- passing by reference - we can pass the memory address to the function:

```C++
void Increment(int* value)
{
    value++; // or (*value)++;
}

int main()
{
    int a = 5;
    Increment(&a);
    LOG(a); // a = 6
}
```

```C++
void Increment(int& value)
{
    value++;
}

int main()
{
    int a = 5;
    Increment(a);
    LOG(a); // a = 6
}
```

### 18) CLASSES in C++

```C++

#define LOG(x) std::cout << x << std::endl

class Player
{
public:
    int x, y;
    int speed;

    void Move(int xa, int ya)
    {
        x += xa * speed;
        y += ya * speed;
    }
};

void Move(Player& player, int xa, int ya)
{
    player.x += xa * player.speed;
    player.y += ya * player.speed;
}

int main()
{
    Player player;
    player.x = 5;
    Move(player, 1, -1);
    player.Move(1, -1);
}
```