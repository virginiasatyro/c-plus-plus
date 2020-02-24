# C++

## edX - Introduction to C++

### Module 3 - Control Statements

- C++ Operators
  
- Decision Statements

- Repetition Statements

#### C++ Operators
```
Operator 	Description
+ 	        addition
- 	        subtraction
* 	        multiplication
/ 	        division
% 	        modulo
+= (y += x) same as y = y + x
-= (y -= x) same as y = y - x
*= (y *= x) same as y = y * x
++ 	        increment by 1
-- 	        decrement by 1
==      	equal to
!= 	        not equal to
> 	        greater than
< 	        less than
>= 	        greater than or equal to
<= 	        less than or equal to
&& 	        logical AND
|| 	        logical OR
! 	        logical NOT
```
  
#### Decision Statements

##### if
```
char response = 'y';
if (response == 'y' || response == 'Y')
{
    cout << "Positive response received" << endl;
}
```

##### else
```
string response;
if (response == "connection_failed")
{
    // Block of code executes if the value of the response variable is "connection_failed".
}
else
{
    // Block of code executes if the value of the response variable is not "connection_failed".
}
```

##### else if 
```
string response;
if (response == "connection_failed")
{
    // Block of code executes if the value of the response variable is "connection_failed".
}
else if (response == "connection_error")
{
    // Block of code executes if the value of the response variable is "connection_error".
}
else
{
    // Block of code executes if the value of the response variable is neither above responses.
}
```

##### switch 
```
char response = 'y';
switch (response)
{
   case 'y':
      // Block of code executes if the value of response is y.
      break;
   case 'Y':
      // Block of code executes if the value of response is Y.
      break;
   case 'n':
      // Block of code executes if the value of response is n.
      break;
   default:
      // Block executes if none of the above conditions are met.
      break;
}
```

##### ternary operator 
```
#include <iostream>
using namespace std;
int main()
{
    int i = 1, j = 2;
    cout << ( i > j ? i : j ) << " is greater." << endl;
}
```
```
i > j ? i : j where i is greater than j then the bold value is selected

i > j ? i : j where j is greater than i, then the bold value is selected
```

#### Repetition Statements

##### for 
```
for ([initializer(s)]; [condition]; [iterator])
{
   // code to repeat goes here
}
```
```
for (int i = 0 ; i < 10; i++)
{
    // Code to execute.
}
```

###### while 
```
string response;
cout << "Enter menu choice " << endl << "More" << endl << "Quit" << endl;
cin >> response;

    while (response != "Quit")
    {
        // Code to execute if Quit is not entered

        // Prompt user again with menu choices until Quit is entered
        cout << "Enter menu choice " << endl << "More" << endl << "Quit" << endl;
        cin >> response;
    }
```

##### do 
```
string response;

do
{        
    cout << "Enter menu choice " << endl << "More" << endl << "Quit" << endl;
    cin >> response;

    // Process the data.

} while (response != "Quit");
```

##### nesting loops 
```
bool alternate = true;

for (int x = 0; x < 8; x++)
{
    for (int y = 0; y < 4; y++)
    {
        if (alternate)
        {
            cout << "X ";
            cout << "O ";

        }
        else
        {
            cout << "O ";
            cout << "X ";

        }
    }
    alternate = !alternate;

    cout << endl;
}
```