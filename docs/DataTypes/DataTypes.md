---
layout: default
title: C++ Data Types
parent: C++ Data Types
nav_order: 3
---

# Using Data in C++

C++ requires the users specify the specific data type of each variable
before it is used. The primary C++ built-in atomic data types are:
integer (`int`), floating point (`float`), double precision floating
point (`double`), Boolean (`bool`), and character (`char`). There is
also a special type which holds a memory location called `pointer`. C++
also has collection or compound data types, which will be discussed in a
future chapter.

## Results {.tabset}

### Tab One

### Tab Two

## {-}

# [Linux](#tab/linux)

Content for Linux...

# [Windows](#tab/windows)

Content for Windows...

---

# Numeric Data

Numeric C++ data types include `int` for integer, `float` for floating
point, `double` for double precision floating point.

The standard arithmetic operations, +, -, \*, and / are used with
optional parentheses to force the order of operations away from normal
operator precedence.

In Python we can use `//` to get integer division. In C++, we declare
all data types. When two integers are divided in C++, the integer
portion of the quotient is returned and the fractional portion is
removed. i.e. When two integers are divided, integer division is used.
To get the whole quotient, declaring one of the numbers as a float will
convert the entire result into floating point.

Exponentiation in C++ is done using `pow()` from the `cmath` library and
the remainder (modulo) operator is done with `%`.

Run the following code to see that you understand each result.

<table>
    <tr>
        <th>Python</th>
        <th>C++</th>
    </tr>
    <tr>
<td markdown="span">

```python
  # Function that performs a variety of math operations.
  def main():
  
      print(2+3*4)
      print((2+3)*4)
      print(2**10)
      print(6/3)
      print(7/3)
      print(7//3)
      print(7%3)
      print(3/6)
      print(3//6)
      print(3%6)
      print(2**100)
  
  main()

```  
        </td>
<td markdown="span">

```cpp
  #include <iostream>
  #include <cmath>
  using namespace std;
  
  // Function that perfoms various math operations
  int main(){
  
      cout << (2+3*4) << endl;
      cout << (2+3)*4 << endl;
      cout << pow(2, 10) << endl;
      cout << float(6)/3 << endl;
      cout << float(7)/3 << endl;
      cout << 7/3 << endl; //In C++ this is integer division
      cout << 7%3 << endl;
      cout << float(3)/6 << endl;
      cout << 3/6 << endl;
      cout << 3%6 << endl;
      cout << pow(2, 100) << endl;
  
      return 0;
  }
  
```

        </td>
    </tr>
</table>


