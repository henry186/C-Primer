![image](img\ex1.1-1.2.png)

**1.1**

MinGW, .cpp

**1.2**

The program run normally

![image](img\ex1.3-1.6.png)

**1.3**

```cpp
#include<iostream>

int main()
{
    return 0;
}
    std::cout << "hello world";
```

**1.4**

```cpp
#include<iostream>

int main()
{
    int v1,v2;
    std::cin >> v1 >> v2;
    std::cout << "The product of " << v1 << " and " << v2
    <<" is " << v1 * v2 << std::endl;

    return 0;
}
```

**1.5**

```cpp
#include<iostream>

int main()
{
    int v1,v2;
    std::cin >> v1 >> v2;

    std::cout << "v1 = " << v1 << std::endl;
    std::cout << "v2 = " << v2 << std::endl;
    std::cout << "The product of v1 and v2 is: " << v1*v2 << std::endl;

    return 0;
}
```

**1.6**

The semicolons shouldn't be there if the cout command hadn't finished.
```cpp
std::out << "The sum of "<< v1
<< " v2 " << v2
<< " is " << v1+v2 <<std::endl;

```

![image](img\ex1.7-1.8.png)

**1.7**

 error: expected primary-expression before '/' token */

**1.8**

```cpp
#include<iostream>

int main(){
    std::cout << "/*";
    std::cout << "*/";
    //std::cout << /*"*/" */;            //only this one cannot correctly compile
    std::cout << /* "*/" /* "/*" */;    
   return 0;
}
```
![image](img/ex1.9-1.11.png)


**1.9**

```cpp
#include<iostream>
using namespace std;

int main()
{
    int val = 50, sum = 0;
    while(val <= 100)
    {
        sum += val;
        val++;
    }
    cout << "The sum of 50 to 100 inclusive is " << sum << endl;
    
    return 0;
}
```

**1.10**

```cpp
#include<iostream>
using namespace std;

int main()
{
    int val = 10;
    while(val >= 0)
    {
        cout << val << endl;
        val--;
    }
    
    return 0;
}
```

**1.11**

```cpp
#include<iostream>
using namespace std;

int main()
{
    int start, end;
    cout << "enter two numbers: " << endl;
    cin >> start >> end;
    cout << endl;
    if(start > end)
    {
        while (start >= end)
        {
            cout << start << endl;
            start--;
        }
    }
    else
    {
        while (start <= end)
        {
            cout << start << endl;
            start++;
        }
    }

    return 0;
}
```

![image](img/ex1.12-1.15.png)

**1.12**

(1) store the sum of -100 to 100 in the variable named 'sum'

(2) 0

**1.13**

```cpp
#include <iostream>
int main()
{
int sum = 0;

for (int val = 1; val <= 10; val++)
{
    sum += val;
}
std::cout << "Sum of 1 to 10 inclusive is "
<< sum << std::endl;
return 0;
}
```

**1.14**

for loop is more clear and convenient, while while loop is more flexible while the number of iterations is not fixed

**1.15**

```cpp
#include<iostream>
// error: missing ) in parameter list for main
int main () {
// error: used colon, not a semicolon, after endl
std::cout << "Read each file." << std::endl;
// error: missing quotes around string literal
std::cout << "Update master." << std::endl;
// error: second output operator is missing
std::cout << "Write new master." << std::endl;
// error: missing ; on return statement
return 0;
}
```
![img](img/ex1.16.png)
**1.16**
```cpp
#include <iostream>
using namespace std;

int main()
{
    int sum = 0, value;
    while(cin >> value)
    {
        sum += value;
    }
    cout << "The sum of the inputs is " << sum << endl;

    return 0;
}
```
**1.17**

**1.18**
**1.19**
**1.20**
**1.21**
