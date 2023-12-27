# Chapter 3 Debugging C++ Programs

## [3.1  Syntax and semantic errors](https://www.learncpp.com/cpp-tutorial/syntax-and-semantic-errors/)

### Syntax and semantic errors

- Errors generally fall into one of two categories: *syntax errors*, and *semantic errors (logic errors*).

- A **syntax error** occurs when you write a statement that is not valid according to the grammar of the C++ language. This includes errors such as missing semicolons, using undeclared variables, mismatched parentheses or braces, etc...

- A **semantic error** occurs when a statement is syntactically valid, but does not do what the programmer intended. Program crash, wrong value or behavior, etc...

- *Modern compilers* have been getting better at detecting certain types of common semantic errors (e.g. use of an uninitialized variable).

## [3.2 The debugging process](https://www.learncpp.com/cpp-tutorial/the-debugging-process/)

### A general approach to debugging

1) Find the root cause of the problem (usually the line of code that’s not working)

2) Ensure you understand why the issue is occurring

3) Determine how you’ll fix the issue

4) Repair the issue causing the problem

5) Retest to ensure the problem has been fixed and no new problems have emerged

## [3.3 A strategy for debugging](https://www.learncpp.com/cpp-tutorial/a-strategy-for-debugging/)

### Finding problems via code inspection

### Finding problems by running the program

### Reproducing the problem

### Homing in on issues

## [3.4 Basic debugging tactics](https://www.learncpp.com/cpp-tutorial/basic-debugging-tactics/)

### Debugging tactic #1: Commenting out your code

### Debugging tactic #2: Validating your code flow

- Using ```std::cerr``` also helps make clear that the information being output is for an error case rather than a normal case.

### Debugging tactic #3: Printing values

### One more example

### Why using printing statements to debug isn’t great

## [3.5 More debugging tactics](https://www.learncpp.com/cpp-tutorial/more-debugging-tactics/)

### Conditionalizing your debugging code

```C++
#include <iostream>

#define ENABLE_DEBUG // comment out to disable debugging

int getUserInput()
{
#ifdef ENABLE_DEBUG
std::cerr << "getUserInput() called\n";
#endif
	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}

int main()
{
#ifdef ENABLE_DEBUG
std::cerr << "main() called\n";
#endif
    int x{ getUserInput() };
    std::cout << "You entered: " << x << '\n';

    return 0;
}
```

### Using a logger

- An alternative approach to conditionalized debugging via the preprocessor is to send your debugging information to a log. A **log** is a sequential record of events that have happened, usually time-stamped. The process of generating a log is **called logging**.

```C++
#include <plog/Log.h> // Step 1: include the logger headers
#include <plog/Initializers/RollingFileInitializer.h>
#include <iostream>

int getUserInput()
{
	PLOGD << "getUserInput() called"; // PLOGD is defined by the plog library

	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}

int main()
{
	plog::init(plog::debug, "Logfile.txt"); // Step 2: initialize the logger

	PLOGD << "main() called"; // Step 3: Output to the log as if you were writing to the console

	int x{ getUserInput() };
	std::cout << "You entered: " << x << '\n';

	return 0;
}
/*
RESULT (in the Logfile.txt file):
2018-12-26 20:03:33.295 DEBUG [4752] [main@19] main() called
2018-12-26 20:03:33.296 DEBUG [4752] [getUserInput@7] getUserInput() called

INTERESTING! https://github.com/SergiusTheBest/plog

BETTER OPTION? https://github.com/gabime/spdlog
*/
```

```C++
#include <plog/Log.h> // Step1: include the headers
#include "plog/Initializers/RollingFileInitializer.h"

int main()
{
    plog::init(plog::debug, "Hello.txt"); // Step2: initialize the logger

    // Step3: write log messages using a special macro
    // There are several log macros, use the macro you liked the most

    PLOGD << "Hello log!"; // short macro
    PLOG_DEBUG << "Hello log!"; // long macro
    PLOG(plog::debug) << "Hello log!"; // function-style macro
    
    // Also you can use LOG_XXX macro but it may clash with other logging libraries
    LOGD << "Hello log!"; // short macro
    LOG_DEBUG << "Hello log!"; // long macro
    LOG(plog::debug) << "Hello log!"; // function-style macro

    return 0;
}
/*
2015-05-18 23:12:43.921 DEBUG [21428] [main@13] Hello log!
2015-05-18 23:12:43.968 DEBUG [21428] [main@14] Hello log!
2015-05-18 23:12:43.968 DEBUG [21428] [main@15] Hello log!
*/
```

## [3.6 Using an integrated debugger: Stepping](https://www.learncpp.com/cpp-tutorial/using-an-integrated-debugger-stepping/)

### The debugger

- A **debugger** is a computer program that allows the programmer to control how another program executes and examine the program state while that program is running. 

### Stepping

- **Stepping** is the name for a set of related debugger features that let us execute (step through) our code statement by statement.

### Step into

- The **step into** command executes the next statement in the normal execution path of the program, and then pauses execution of the program so we can examine the program’s state using the debugger. 

### Step over

- Like step into, the **step over** command executes the next statement in the normal execution path of the program. 

### Step out

- Unlike the other two stepping commands, **Step out** does not just execute the next line of code. Instead, it executes all remaining code in the function currently being executed, and then returns control to you when the function has returned.

### A step too far

### Step back

## [3.7 Using an integrated debugger: Running and breakpoints](https://www.learncpp.com/cpp-tutorial/using-an-integrated-debugger-running-and-breakpoints/)

### Run to cursor

- This **Run to cursor** command executes the program until execution reaches the statement selected by your cursor. 

### Continue

- The **continue** debug command simply continues running the program as per normal, either until the program terminates, or until something triggers control to return back to you again (such as a breakpoint, which we’ll cover later in this lesson).

### Start

- The **start** command performs the same action as continue, just starting from the beginning of the program. 

### Breakpoints

- A **breakpoint** is a special marker that tells the debugger to stop execution of the program at the breakpoint when running in debug mode.

### Set next statement

- The **set next statement** command allows us to change the point of execution to some other statement (sometimes informally called *jumping*).

### “Step back” vs jumping backwards via “Set next statement”

### Conclusion

## [3.8 Using an integrated debugger: Watching variables](https://www.learncpp.com/cpp-tutorial/using-an-integrated-debugger-watching-variables/)

### Watching variables

- **Watching a variable** is the process of inspecting the value of a variable while the program is executing in debug mode.

### The watch window

- The **watch window** is a window where you can add variables you would like to continually inspect, and these variables will be updated as you step through your program. 

### Setting a breakpoint on watched variables

### The watch window can evaluate expressions too

### Local watches

## [3.9 Using an integrated debugger: The call stack](https://www.learncpp.com/cpp-tutorial/using-an-integrated-debugger-the-call-stack/)

- The **call stack** is a list of all the active functions that have been called to get to the current point of execution.

### Conclusion

## [3.10 Finding issues before they become problems](https://www.learncpp.com/cpp-tutorial/finding-issues-before-they-become-problems/)

### Don’t make errors

### Refactoring your code

- One way to address this is to break a single long function into multiple shorter functions. This process of making structural changes to your code without changing its behavior (typically in order to make your program more organized, modular, or performant) is called **refactoring**.

### An introduction to defensive programming

- **Defensive programming** is a practice whereby the programmer tries to anticipate all of the ways the software could be misused, either by end-users, or by other developers (including the programmer themselves) using the code. These misuses can often be detected and then mitigated (e.g. by asking a user who entered bad input to try again).

### Finding errors fast

### An introduction to testing functions

- This is a primitive form of **unit testing**, which is a software testing method by which small units of source code are tested to determine whether they are correct.

### An introduction to constraints

- *Constraints-based techniques* involve the addition of some extra code (that can be compiled out in a non-debug build, if desired) to check that some set of assumptions or expectations are not violated.

### Shotgunning for general issues

- These programs, generally known as **static analysis tools** (sometimes informally called *linters*) are programs that analyze your code to identify specific semantic issues (in this context, static means that these tools analyze the source code). 

- <span style="color:green">**BEST PRACTICE**</span>: Use a static analysis tool on your programs to help find areas where your code is non-compliant with best practices.

- <span style="color:green">**TIP**</span>: Some commonly recommended static analysis tools include: clang-tidy, cpplint, cppcheck, SonarLint.

- https://en.wikipedia.org/wiki/List_of_tools_for_static_code_analysis#C,_C++

## [3.x Chapter 3 summary and quiz](https://www.learncpp.com/cpp-tutorial/chapter-3-summary-and-quiz/)

### Chapter Review

- A **syntax error** is an error that occurs when you write a statement that is not valid according to the grammar of the C++ language. The compiler will catch these.

- A **semantic error** occurs when a statement is syntactically valid, but does not do what the programmer intended.

- The process of finding and removing errors from a program is called **debugging**. We can use a five step process to approach debugging: Find the root cause, Understand the problem, Determine a fix, Repair the issue, Retest.

- **Static analysis tools** are tools that analyze your code and look for *semantic* issues that may indicate problems with your code.

- A **log** file is a file that records events that occur in a program. The process of writing information to a log file is called **logging**.

- The process of restructuring your code without changing how it behaves is called **refactoring**. This is typically done to make your program more organized, modular, or performant.

- **Unit testing** is a software testing method by which small units of source code are tested to determine whether they are correct.

- **Defensive programming** is a technique whereby the programmer tries to *anticipate* all of the ways the software could be misused. These misuses can often be detected and mitigated.

- All of the information tracked in a program (variable values, which functions have been called, the current point of execution) is part of the **program state**.

- A **debugger** is a tool that allows the programmer to control how a program executes and examine the program state while the program is running. An integrated debugger is a debugger that integrates into the code editor.

- **Stepping** is the name for a set of related debugging features that allow you to step through our code statement by statement.

- **Step into** executes the next statement in the normal execution path of the program, and then pauses execution. If the statement contains a function call, step into causes the program to jump to the top of the function being called.

- **Step** over executes the next statement in the normal execution path of the program, and then pauses execution. If the statement contains a function call, step over executes the function and returns control to you after the function has been executed.

- **Step out** executes all remaining code in the function currently being executed and then returns control to you when the function has returned.

- **Run to cursor** executes the program until execution reaches the statement selected by your mouse cursor.

- **Continue** runs the program, until the program terminates or a breakpoint is hit. **Start** is the same as continue, just from the beginning of the program.

- A **breakpoint** is a special marker that tells the debugger to stop execution of the program when the breakpoint is reached.

- **Watching a variable** allows you to inspect the value of a variable while the program is executing in debug mode. The **watch** window allows you to examine the value of variables or expressions.

- The **call stack** is a list of all the active functions that have been executed to get to the current point of execution. The call stack window is a debugger window that shows the call stack.