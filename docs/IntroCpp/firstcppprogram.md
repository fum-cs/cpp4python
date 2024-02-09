---
layout: default
title: Let's look at a C++ program
parent: Introduction to C++ for Python Programmers
nav_order: 3
---

# Let's look at a C++ program

{: .no_toc }

## Table of contents

{: .no_toc .text-delta }

1. TOC
{:toc}

---

# Let\'s look at a C++ program

A time honored tradition in computer science is to write a program
called "hello world." The "hello world" program is simple and easy. No
logic errors are possible to make, so getting it to run relies only on
understanding the syntax. Let\'s look at an easy version of \"hello
world\" in Python:

```python
print("Hello World!")
```

Now, lets look at a more "complicated" version of the \"hello world\"
program with a `main` function in Python:

```python
def main():
    print("Hello World!")
main()
```

Next, lets look at (almost) the same program written in C++23:

```cpp
import std;
int main() {
    std::print("Hello, World!");
}
```

Good :)
Very similar.

But unfortunately the above code can not be run on almost all current C++ compilers! So we move back to C++11 -- C++20.

*import*, *print* and *println* are only [available in C++23](https://en.cppreference.com/w/cpp/header/print).

Next, lets look at the same program written using [*cout*](https://en.cppreference.com/w/cpp/io/cout) in previous standards of C++, including C++11:

```cpp
#include <iostream>
int main(){
    std::cout << "Hello World!\n";
    return 0;
}
```

The above program can alternatively be written as follows to allow
better facilitate standard input and output:

```cpp
#include <iostream>
using namespace std;

int main(){
    cout << "Hello World!\n";
    return 0;
}
```

What we see is that at the core there are a few similarities with the
complicated Python version, such as the `main` function and the string
"Hello world". However, in C++ there is a lot more stuff around the
edges that make it harder to see the core of the program. Do not worry!
An important skill for a computer scientist is to learn what to ignore
and what to look at carefully. You will soon find that there are some
elements of C++ that will fade into the background as you become used to
seeing them. One thing that will help you is to learn a little bit more
about C++.

## Compilation

A question you may have about this little program is "How would I run it?"

The good news is that many online C++ compilers are exist that you can use them to run your program such as the following ones:

### Online C++ compilers

1. **Wandbox**:
   - Provides various functionality, including support for multiple files and different editor keybindings.
   - Features libraries like Boost (up to 1.64), Sprout, and MessagePack.
   - [Explore Wandbox](https://wandbox.org/)

2. **cpp.sh**:
   - Compile and execute C++ programs online.
   - Simple and straightforward interface.
   - [Try cpp.sh](http://cpp.sh/)

3. **OnlineGDB C Compiler**:
   - Code, compile, run, and debug C programs online.
   - Write your code in the editor and press the "Run" button to compile and execute it.
   - [Try OnlineGDB](https://www.onlinegdb.com/online_c_compiler)

4. **Programiz C++ Compiler**:
   - A user-friendly online compiler that allows you to write and run C++ code.
   - Supports taking input from the user and accessing standard libraries.
   - Utilizes the **GCC (g++) compiler** for code compilation.
   - [Try it out here](https://www.programiz.com/cpp-programming/online-compiler/)

5. **OnlineCPP**:
   - Quick and easy tool for building, compiling, and testing C++ programs online.
   - Supports various programming languages, including C++.
   - [Visit OnlineCPP](https://www.online-cpp.com/)

6. **Replit C++ Compiler & Interpreter**:
   - Collaborate in real-time with friends, classmates, or coworkers.
   - Quickly deploy your C++ projects.
   - [Explore Replit](https://replit.com/languages/cpp)

Only [Wandbox](https://wandbox.org/) meet the requirements of our course for formatted string. Also many of them can be used for usual C++ programs.

### Installing C++ compiler on your system

The bad news is that if you want to compile and run a C++ program on your own machine, there is not as simple as running a
Python program. The first big difference between C++ and Python is that
Python is an *interpreted language* while C++ is a *compiled language*.
We could run our Python programs in the Python **interpreter**, and we
were often quite happy to do that. In C++, running programs is a two
step process.

First, we must type the hello world program into a file and save that
file using a name like `hello.cpp` Once we have saved the file we
**compile** it either from the command line or from an integrated
development environment (IDE). Only after the program is compiled, can
we run it.

Now you may be wondering what good is this extra step? What does
compiling do for us? There are a couple of important benefits we get
from compiling:

- Early detection of errors
- Faster program execution

The job of the compiler is to turn your C++ code into language that your
machine can understand. We call the code that the computer understands
**machine code**. The computer interprets the machine code much like the
Python interpreter interprets your Python. However, since machine code
is much closer to the native language of the computer, it can run
faster.

When the compiler does the translation it can find many different kinds
of errors. For example if you make a typo or forget to declare a
variable the compiler will find these and point them out to you before
you ever run the program. We will look at some examples of errors that
the compiler catches shortly. Chances are you may create some on your
own very soon too, but first let\'s talk about each of the statements in
a C++ program.

For installing a C++ compiler and using VSCode see [Installation Instructions](installation).

## Using headers and libraries

Preprocessor directives in C++ appear as statements preceded by the hash
sign `#`. These tell the preprocessor which file, header, or library to
make available to the compiler. For example, `#include <iostream>` will
make sure that the `iostream` library is available at compile time.
Here, the term *header* is used for a type of C++ file that contains
definitions of functions and variables, but not the function
implementations.

You can think of the `#include ...` statement in C++ as working a bit
like the `import ...` statement in Python. Python\'s `import` statement
directly accesses the code written in another file while the `#include`
statement in C++ copies classes and functions from another file.

In Python, an import statement looks like:

    import classname

With exception of `impoert` in C++23, there are two ways to use `#include` in C++:

    #include <libraryname>
    #include "filename"

Here the angle-brackets `<>` are used to include libraries or headers
provided by the implementation, such as the headers in the standard
library (`iostream`, `string`, etc.). The double quotes `"` are used for
headers and files not provided by the implementation.

## The main function

Unlike Python, every C++ program **must** have a `main` function which
begins with `int main()`. This `main` function is called implicitly
instead of explicitly like we must do in Python when we have a main
function. This is why you do not see an explicit function call invoking
main.

The `int` in `int main()` indicates that the *return type* of the `main`
function will be an integer. The final line of the `main` C++ function
is typically `return 0`, so you can see that the program does actually
return the integer 0. Here zero is returned to indicate successful
completion of the `main` function. In case you are wondering why an
integer is returned, if you do error handling in C++, instead of 0, you
can alternatively return an integer error code representing a specific
error when and where it occurs.

C++ functions and other C++ code blocks are grouped together using the
curly `{}` brackets. These curly brackets are used much like tabbing is
used in Python. Many people also use tabbing in C++ to indicate blocks,
but tabs and other whitespace (mostly) have no inherent meaning in C++.
Instead, the semi-colon (`;`) must be used to conclude most statements
in C++.

In fact, the following program will run perfectly even though the lack
of meaningful spacing is more difficult for humans to read.

```cpp
#include <iostream>
using namespace std; int main(){cout << "Hello World!\n"; return 0;}
```

As you program in C++, we strongly recommend you continue to use the
kind of human-readable formatting you have become used to in Python. You
will likely learn to appreciate this when you are debugging.

## Comments in C++

Python and C++ both support comments that are not processed by the
interpreter or compiler.

Python\'s single line comment begins with a hash (`#`). In C++, the
equivalent is two forward slashes (`//`) In each case the rest of the
line is treated as a comment and ignored by the interpreter or compiler.

Python supports comments using triple quotes. Like Python, C++ also
supports multi-line comments beginning with `/*` and ending with `*/`.

The triple quoted docstring in Python is often used for automatically
processing documentation. There is no equivalent in the C++ standard to
the triple-quoted docstring in Python. However, the symbol groups `/**`
and `*/` are often used to indicate documentation blocks at the
beginning of a class, program, or function, which is legal because the
second asterisk `*` is simply treated as part of the multi-line comment.
Certain libraries will also automatically process the text between these
symbol groups, as a docstring for the documentation.

    // The remainder of this line is a C++ comment which is ignored by the compiler

    /* This is a multi-line C++ comment that can
    span many lines, beginning and ending with the given symbols */

## Standard Output

We often have a need to interact with users, either to get data or to
provide some sort of result. The C++ `<iostream>` library provides us
with the functionality to get information from the standard input as
well as to output information to the standard output. This input and
output is handled by what is known as a `stream`.

A `stream` is essentially a channel in which data flows from the source
to a destination (often called the \"sink\".) Output streams send data
out, and the standard output stream `cout` sends character data to the
screen. So, `cout` stands for \"character output\". Much like the Python
`print` statement, `cout` is used to print to the standard output
device, which is typically your screen. When `cout` is used, you will
also see `<<` used. When this odd set of symbols are used together, they
are called the \"output operator\". The output operator is used to
direct output to the designated output device or file. The output
operator can also be used to concatenate output, much like the \"+\" can
be used to concatenate in Python.

```cpp
/* Ever heard of rubber duck debugging?
    See https://en.wikipedia.org/wiki/Rubber_duck_debugging */
#include <iostream>
using namespace std;

int main(){
    cout << "Ever heard of rubber duck debugging?" << endl;
    cout << "                __     " << endl;
    cout << "              <(o )___-" << endl;
    cout << "               ( .__> /" << endl;
    cout << "                `----' " << endl;
}
```

Another example:

```cpp
#include <iostream>
using namespace std;
int main()
{
    int num = 42;
    string name = "Mohammad";
    cout << "My name is " << name << " and my favorite number is " << num;
    return 0;
}
```

The above example using `format` library, like [formatted strings in Python](https://pyformat.info/):

```cpp
#include <format>
#include <iostream>
using namespace std;
int main()
{
    int num = 42;
    string name = "Mohammad";
    cout << format("My name is {} and my favorite number is {}", name, num);
    return 0;
}
```

Currently the above program, runs only limited complilers; [Wnadbox](https://wandbox.org/) and [g++ 13.2](https://www.msys2.org/) are among of them.

The following program is the C version of the program that runs on all of current C/C++ compilers.

```c
// Old C Style
#include <stdio.h>
int main()
{
    int num = 42;
    char name[10] = "Mohammad";
    printf("My name is %s and my favorite number is %d", name, num);
    return 0;
}
```

This style of string formatting is used in many app or languages such as MATLAB, Python, PHP, Java, Javascript, Ruby, Swift, Go, Kotlin and Rust, that can be checked in [www.onlinegdb.com](https://www.onlinegdb.com/).

```python
# Python
print("My name is {} and my favorite number is {}".format(name, num))
```

```python
# Python using f-strings
print(f"My name is {name} and my favorite number is {num}")
```

```matlab
% MATLAB
sprintf('My name is %s and my favorite number is %d', name, num)
```

```php
// PHP
echo "My name is $name and my favorite number is $num";
```

```java
// JAVA
System.out.printf("My name is %s and my favorite number is %d", name, num);
```

## Standard Input

In addition to being able to output to the standard output, we want to
be able to take input from the user. The command `cin` is somewhat
similar to `cout` except, of course, it is used for getting character
input. Input streams direct data from a source, such as the keyboard or
a file. As you might have guessed, `cin` stands for \"character input\"
and it makes getting input from the standard input device (usually the
keyboard) relatively easy. The input operator in C++ is `>>`.

Here is an example that uses `cin`:

```cpp
// The active code below is an example of what getting input from the user might look like. Not all online compilers have input terminal!
~~~~
#include <iostream>
using namespace std;

int main() {
//declares num as a floating point number variable
float num;
// Displays this text to the console
cout << "Give me a number:" << endl;
// Takes the user's input and stores it in num
cin >> num;
// Displays to the console
cout << "This is your number doubled: " << num*2 << endl;
return 0;
}
```

## Type Declarations

In this example, you may note the line `float num` which declares a new
variable called `num` of type `float`. Just like functions, all
variables in C++ must be declared before use, and they cannot change
type. This is known as **static typing**. The line `float num`
essentially tells the compiler to set aside sufficient space for a
floating point number, and to name this memory location `num.` Then
whatever the user types in will be stored in the `num` variable. Using
the `cout` function, we can write instructions that will prompt the user
to enter data and then incorporate that data into further processing.
For example, in the code above, the floating point number is doubled and
then displayed!.

We will talk more about type declarations in the section on data types,
and we will go into more depth on input and output later when we discuss
C++ streams and file handling.

# Summary

Now that we have run our \"hello world\" program, lets go back and look
at it carefully to see what we can learn about the C++ language.

```cpp
/* This hello world program demonstrates the C++ concepts of commenting, using libraries, and using output.
*/

#include <iostream>
using namespace std;

int main(){         // main() must exist & return an int
    cout << "Hello World!\n";
    return 0;       // 0 indicates program ended correctly.
    }
```

This simple example illustrates a few very important rules:

1. Everything in C++ must be declared as a specific type of object or
    variable, including declaring the return type for each function.
2. Every C++ program must have a function which begins as `int main()`,
    and ends with the statement `return 0;` when successfully completed.
3. C++ statements are ended by a semi-colon.
4. White space is mostly meaningless in C++, but all C++ code blocks
    must be surrounded by curly brackets {}, rather than using
    indentation to delineate blocks as is done in Python.
