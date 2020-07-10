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
- Diference between ```#include<iostream>```, library in C++ and ```#include<stdlib.h>```, C;

### 11) How to DEBUG C++ in VISUAL STUDIO

###
