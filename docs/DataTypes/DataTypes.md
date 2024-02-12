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

::: {.tabbed}
intro

::: {.tab}
C++

::: {.activecode caption="Basic Arithmetic Operators C++" language="cpp"}
intro_1cpp

\#include \<iostream\> \#include \<cmath\> using namespace std;

// Function that perfoms various math operations int main(){

> cout \<\< (2+3\*4) \<\< endl; cout \<\< (2+3)\*4 \<\< endl; cout \<\<
> pow(2, 10) \<\< endl; cout \<\< float(6)/3 \<\< endl; cout \<\<
> float(7)/3 \<\< endl; cout \<\< 7/3 \<\< endl; //In C++ this is
> integer division cout \<\< 7%3 \<\< endl; cout \<\< float(3)/6 \<\<
> endl; cout \<\< 3/6 \<\< endl; cout \<\< 3%6 \<\< endl; cout \<\<
> pow(2, 100) \<\< endl;
>
> return 0;

}
:::
:::

::: {.tab}
Python

::: {.activecode caption="Basic Arithmetic Operators Python"}
intro_1py

\# Function that performs a variety of math operations. def main():

> print(2+3\*4) print((2+3)*4) print(210) print(6/3) print(7/3)
> print(7//3) print(7%3) print(3/6) print(3//6) print(3%6)
> print(2*\*100)

main()
:::
:::
:::

When declaring numeric variables in C++, modifiers like `short`, `long`,
and `unsigned` can optionally be used to help to ensure space is used as
efficiently as possible.

::: {.mchoice answer_a="1" answer_b="1.5" answer_c="2" answer_d="A run-time error will occur." answer_e="none of the above" correct="a" feedback_a="Right!  This is like ``3//2`` in Python." feedback_b="No. Integer division is used. Try again." feedback_c="No. Integer division is used. Try again." feedback_d="No, C++ generally will try to do as you ask." feedback_e="One of the above is correct."}
mc_integer_div

what is the result of dividing `3/2` in C++?
:::

::: {.mchoice answer_a="``4**5``" answer_b="``5**4``" answer_c="``4^5``" answer_d="``pow(4, 5)``" correct="d" feedback_a="No, ``**`` is used in Python, not C++." feedback_b="No, ``**`` is used in Python, not C++, and the operators are reversed." feedback_c="No. The ``^`` is a valid operator in C++, but it does something else." feedback_d="You got it! Remember the cmath library will need to be included for pow() to work."}
mc_exponentiation

How do I raise 4 to 5th power in C++?
:::

# Boolean Data

Boolean data types are named after George Boole who was an English
mathematician, so the word \"Boolean\" should be capitalized. However,
the Boolean data type, in C++ uses the keyword `bool` which is not
capitalized. The possible state values for a C++ Boolean are lower case
`true` and `false`. Be sure to note the difference in capitalization
from Python. In Python, these same truth values are capitalized, while
in C++, they are lower case.

C++ uses the standard Boolean operators, but they are represented
differently than in Python: \"and\" is given by `&&` , \"or\" is given
by `||` , and \"not\" is given by `!`. Note that the internally stored
values representing `true` and `false` are actually `1` and `0`
respectively. Hence, we see this in output as well.

::: {.tabbed}
logical1

::: {.tab}
C++

::: {.activecode caption="Logical Operators C++" language="cpp"}
logical_1cpp

\#include \<iostream\> using namespace std;

// function that demonstrates logical operators int main() { cout \<\<
true \<\< endl; cout \<\< false \<\< endl; cout \<\< (true \|\| false)
\<\< endl; cout \<\< (true && false) \<\< endl; return 0; }
:::
:::

::: {.tab}
Python

::: {.activecode caption="Logical Operators Python"}
logical_1py

\# Function that demonstrates logical operators. def main(): print(True)
print(False) print(True or False) print(True and False) main()
:::
:::
:::

Boolean data objects are also used as results for comparison operators
such as equality (==) and greater than ($>$). In addition, relational
operators and logical operators can be combined together to form complex
logical questions. `Table 1 <tab_relational>`{.interpreted-text
role="ref"} shows the relational and logical operators with examples
shown in the session that follows.

::: {#tab_relational}
+-----------------------+--------------------+-----------------------+
| **Operation Name**    | **Operator**       | **Explanation**       |
+=======================+====================+=======================+
| > less than           | > $<$              | > Less than operator  |
+-----------------------+--------------------+-----------------------+
| > greater than        | > $>$              | > Greater than        |
|                       |                    | > operator            |
+-----------------------+--------------------+-----------------------+
| > less than or equal  | > $<=$             | > Less than or equal  |
|                       |                    | > to operator         |
+-----------------------+--------------------+-----------------------+
| > greater than or     | > $>=$             | > Greater than or     |
| > equal               |                    | > equal to operator   |
+-----------------------+--------------------+-----------------------+
| > equal               | > $==$             | > Equality operator   |
+-----------------------+--------------------+-----------------------+
| > not equal           | > $!=$             | > Not equal operator  |
+-----------------------+--------------------+-----------------------+
| > logical and         | > [&&]{.title-ref} | > Both operands true  |
|                       |                    | > for result to be    |
|                       |                    | > true                |
+-----------------------+--------------------+-----------------------+
| > logical or          | > $||$             | > One or the other    |
|                       |                    | > operand is true for |
|                       |                    | > the result to be    |
|                       |                    | > true                |
+-----------------------+--------------------+-----------------------+
| > logical not         | > $!$              | > Negates the truth   |
|                       |                    | > value, false        |
|                       |                    | > becomes true, true  |
|                       |                    | > becomes false       |
+-----------------------+--------------------+-----------------------+

: **Table 1: C++ Relational and Logical Operators**
:::

::: {.tabbed}
basiclogical

::: {.tab}
C++

::: {.activecode caption="Basic Relational and Logical Operators C++" language="cpp"}
locicalcpp

\#include \<iostream\> using namespace std;

// function that demonstrates relational operators. int main(){

> cout \<\< (5 == 10) \<\< endl; cout \<\< (10 \> 5) \<\< endl; cout
> \<\< ((5 \>= 1) && (5 \<= 10)) \<\< endl;
>
> return 0;

}
:::
:::

::: {.tab}
Python

::: {.activecode caption="Basic Relational and Logical Operators Python"}
logicalpy

\# Function that demonstrates relational operators. def main():

> print(5 == 10) print(10 \> 5) print((5 \>= 1) and (5 \<= 10))

main()
:::
:::
:::

When a C++ variable is declared, space in memory is set aside to hold
this type of value. A C++ variable can optionally be initialized in the
declaration by using a combination of a declaration and an assignment
statement.

Consider the following session:

::: {.activecode language="cpp"}
booleanpitfall

\#include \<iostream\> using namespace std;

// Demonstrates how to use variables in C++ // moreover, we assign an
integer to a boolean variable, // showing the static typing of C++. int
main(){

> int theSum = 4; cout \<\< theSum \<\< endl;
>
> theSum = theSum + 1; cout \<\< theSum \<\< endl;
>
> bool theBool = true; cout \<\< theBool \<\< endl;
>
> theBool = 4; cout \<\< theBool \<\< endl;
>
> return 0;

}
:::

The declaration `int theSum = 4;` creates a variable called `theSum` and
initializes it to hold the data value of `4`. As in Python, the
right-hand side of each assignment statement is evaluated and the
resulting data value is "assigned" to the variable named on the
left-hand side. Here the type of the variable is integer. Because Python
is dynamically typed, if the type of the data changes in the program, so
does the type of the variable. However, in C++, the data type cannot
change. This is a characteristic of C++\'s static typing. A variable can
hold ever only one type of data. Pitfall: C++ will often simply try to
do the assignment you requested without complaining. Note what happened
in the code above in the final output.

::: {.mchoice answer_a="Setting theBool to anything other than true or false is ignored." answer_b="Setting theBool to anything > 0 will be true and false otherwise." answer_c="false == 0 and true = !false i.e. anything that is not zero and can be converted to a Boolean is not false, thus it must be true." answer_d="None of the above." correct="c" feedback_a="No. Try changing the code and setting theBool to 0." feedback_b="No. Try changing the code and setting theBool to -4." feedback_c="Correct!" feedback_d="Try again. One of the above is correct. You might try changing the code and rerunning."}
mc_bool

Why did theBool output a value of 1 after being set to 4?
:::

# Character Data

In Python strings can be created with single or double quotes. In C++
single quotes are used for the character (`char`) data type, and double
quotes are used for the string data type.

Consider the following code.

::: {.tabbed}
usingchars

::: {.tab}
Python

::: {.activecode caption="Python strings"}
charpy

\# Shows direct comparison of both Strings & Characters in Python def
main():

> strvar = \"b\" charvar = \'b\'
>
> print(\'b\' == charvar) print(\"b\" == strvar) print(\'a\' == \"a\")

main()
:::
:::

::: {.tab}
C++

::: {.activecode caption="Considering characters and strings" language="cpp"}
charcpp

\#include \<iostream\> \#include \<string\> using namespace std;

// Demonstrates how chars and strings can not be // directly compared.
int main(){

> string strvar = \"b\"; char charvar = \'b\';
>
> cout \<\< (\'b\' == charvar) \<\< endl; cout \<\< (\"b\" == strvar)
> \<\< endl; //cout \<\< (\'a\' == \"a\") \<\< endl; // will error!
>
> return 0;

}
:::
:::
:::

Try the following question.

::: {.mchoice answer_a="' '" answer_b="\" \"" answer_c="' ' or \" \" may be used" answer_d="It depends upon the implementation." answer_e="none of the above" correct="b" feedback_a="No, single quotes are only used for single characters." feedback_b="Good job reading!" feedback_c="No. Only one set of symbols may be used." feedback_d="No. The implementation is consistent." feedback_e="One of the above is indeed correct."}
mc_cpp_strings

If I want to create a string in C++, what set of symbols may be used?
:::

# Pointers

A C++ **pointer** is a variable that stores a memory address and can be
used to indirectly access data stored at that memory location.

We know that variables in a computer program are used to label data with
a descriptive identifier so that the data can be accessed and used by
that computer program.

Let\'s look at some examples of storing an integer in Python and C++.

In Python every single thing is stored as an object. Hence, a Python
variable is actually a reference to an object that is stored in memory.
Hence, each Python variable requires two memory locations: one to store
the reference, and the other to store the variable value itself in an
object.

In C++ the value of each variable is stored directly in memory without
the need for either a reference or an object. This makes access faster,
but it is one of the reasons we need to declare each variable because
different types take differing amounts of space in memory!

The following code declares a variable called *varN* that has in it a
value of 100:

    // Python reference for a single integer value
    varN = 100

::: {#fig_py_reference}
![Figure 2.1: Python
reference](Figures/python_reference.png){.align-center}
:::

    // C++ variable declaration and assignment of an integer value
    int varN = 100;

In C++ the results of running this code will look like the diagram
below:

::: {#fig_cpp_reference}
![Figure 2.2: C++ variable](Figures/cpp_var.png){.align-center}
:::

In each case, when we want to output the value to the console, we use
the variable name to do so.

But, we can also identify the memory location of the variable by its
address. In both Python and C++, this address may change each time the
program is run. In C++, the address will always look odd because it will
be the actual memory address written in a hexadecimal code which is a
base 16 code like 0x7ffd93f25244. In Python it is implementation
dependent, it is sometimes a hexadecimal code and sometimes just a count
or another way to reference the address.

In Python we use `id` to reference the address, while in C++ we use the
*address-of operator*, `&`.

::: {.tabbed}
memory-addresses

::: {.tab}
C++

::: {.activecode caption="Memory addresses in C++" language="cpp"}
address_cpp

\#include \<iostream\> using namespace std;

// outputs the value of a variable // as well as the memory address in
C++. int main(){ int varN = 101; cout \<\< varN \<\< endl; cout \<\<
&varN \<\< endl; //outputs the memory address of variable varN return 0;
}
:::
:::

::: {.tab}
Python

::: {.activecode caption="Memory identifier in Python"}
address_py

\# Outputs the value & memory address of \# variable titled varN. def
main(): varN = 101; print(varN) print(id(varN)) \# ID function returns
the memory address in Python.

main()
:::
:::
:::

In both Python and C++, variables are stored in memory locations which
are dependent upon the run itself. If you repeatedly run the above code
in either C++ or Python, you may see the location change.

As suggested above, in Python, it is impossible to store a variable
directly. Instead, we must use a variable name and a reference to the
data object. (Hence the arrow in the image.) In C++, variables store
values directly, because they are faster to reference.

References are slower, but they are sometimes useful. If in C++, we want
to create a analogous reference to a memory location, we must use a
special data type called a **pointer**.

## Pointer Syntax

When declaring a pointer in C++ that will \"point\" to the memory
address of some data type, you will use the same rules of declaring
variables and data types. The key difference is that there must be an
asterisk (\*) between the data type and the identifier.

    variableType *identifier; // syntax to declare a C++ pointer
    int *ptrx; // example of a C++ pointer to an integer

White space in C++ generally does not matter, so the following pointer
declarations are identical:

    SOMETYPE *variablename; // preferable
    SOMETYPE * variablename;
    SOMETYPE* variablename;

However, the first declaration is preferable because it is clearer to
the programmer that the variable is in fact a pointer because the
asterisk is closer to the variable name.

### The address-of operator, `&`

Now that we know how to declare pointers, how do we give them the
address of where the value is going to be stored? One way to do this is
to have a pointer refer to another variable by using the address-of
operator, which is denoted by the ampersand symbol, `&`. The address-of
operator `&` does exactly what it indicates, variableType varN; // a
variable to hold the value namely it returns the address.

The syntax is shown below, where varN stores the value, and ptrN stores
the address of where varN is located:

    variableType *ptrN = &varN;  // a variable pointing to the address of varN

Keep in mind that when declaring a C++ pointer, the pointer needs to
reference the same type as the variable or constant to which it points.

Expanding on the example above where varN has the value of 9.

    //variable declaration for a single integer value
    int varN = 9;
    int *ptrN;
    ptrN = &varN;

The results of running this C++ code will look like the diagram below.

::: {#fig_point2}
![Figure 2.3: View into memory with
pointers](Figures/new_new_point2.png){.align-center}
:::

## Accessing Values from Pointers

Once you have a C++ pointer, you use the asterisk before the pointer
variable, to *dereference* the pointer, which means go to the location
pointed at by the 3.

    In other words, varN and *ptrN (note the asterisk in front!) reference the same
    value in the code above.

Let\'s extend the example above to output the value of a variable and
its address in memory:

::: {#dereferencing}
> ::: {.activecode language="cpp"}
> firstptr
>
> \#include \<iostream\> using namespace std;
>
> // demonstrates what happens when you dereference a pointer int main(
> ) { int varN = 9; int \*ptrN = &varN; // ptrN points to varN address
>
> > cout \<\< \"varN value: \" \<\< varN \<\< endl; cout \<\< \"varN
> > location: \" \<\< ptrN \<\< endl; cout \<\< \"dereference ptrN: \"
> > \<\< \*ptrN \<\< endl;
> >
> > return 0;
>
> }
> :::
:::

::: {.mchoice answer_a="varPntr: 9" answer_b="varPntr: 50" answer_c="varPntr: 150" answer_d="0x7ffeb9ce053c" answer_e="none of the above" correct="b" feedback_a="Not quite, the variable varN no longer equals 100 past line 7!" feedback_b="Right!" feedback_c="No, the values do not add together!" feedback_d="We are dereferencing the pointer, so you would not get the address of varN. Try again!" feedback_e="One of the above is indeed correct."}
mc_pntrhlp

If the lines (varN = 50;) and (cout \<\< \*ptrN \<\< endl;) were
inserted into line 7-8, what would it cout?
:::

Compiling and running the above code will have the program output the
value in varN, what is in ptrN (the memory address of varN), and what
value is located at that memory location.

The second output sentence is the address of varN, which would most
likely be different if you run the program on your machine.

WARNING: What happens if you forget the ampersand when assigning a value
to a pointer and have the following instructions instead?

::: {#cpp_address_error}
> ::: {.activecode language="cpp"}
> cpp_address_error1
>
> \#include \<iostream\> using namespace std;
>
> int main( ) {
>
> :   int varN = 100; int \*ptrN = varN; // Note no ampersand, // ptrN
>     now refers to memory position 100, // whatever happens to be
>     there! // You might get an error or you might not!
>
>     > cout \<\< \"varN value: \" \<\< varN \<\< endl; cout \<\< \"ptrN
>     > location: \" \<\< ptrN \<\< endl; cout \<\< \"ptrN points to
>     > varN: \" \<\< endl; cout \<\< \"dereference ptrN: \" \<\< \*ptrN
>     > \<\< endl;
>     >
>     > return 0;
>
> }
> :::
:::

**This is BAD, BAD, BAD!**

::: {#fig_point3}
![Figure 2.4: dangling pointer
reference](Figures/new_point_broken.png){.align-center}
:::

If your compiler does not catch that error (the one for this class may),
the first `cout` instruction outputs

    After changing *ptrN, varN now has: 50

which is expected because you changed where ptrN is pointing to and NOT
the contents of where it is pointing.

The second `cout` instruction is a disaster because (1) You don\'t know
what is stored in location 100 in memory, and (2) that location is
outside of your segment (area in memory reserved for your program), so
the operating system will jump in with a message about a \"segmentation
fault\". Although such an error message looks bad, a \"seg fault\" is in
fact a helpful error because unlike the elusive logical errors, the
reason is fairly localized.

## The null pointer

Like `None` in Python, the null pointer (`nullptr`) in C++ points to
nothing. Older editions of C++ also used `NULL` (all caps) or 0, but we
will use the keyword `nullptr` because the compiler can do better error
handling with the keyword. The null pointer is often used in conditions
and/or in logical operations.

The following example demonstrates how the null pointer works. The
variable ptrx initially has the address of x when it is declared. On the
first iteration of the loop, it is assigned the value of `nullptr`,
which evaluates to a false value; thereby ending the loop:

::: {#lst_cppcode2}
> ::: {.activecode language="cpp"}
> NULLexamplecpp
>
> \#include \<iostream\> using namespace std;
>
> //Shows the use of a Null pointer to represent \"nothing\". int main(
> ) { int x = 12345; int \*ptrx = &x;
>
> > while (ptrx) {
> >
> > :   cout \<\< \"Pointer ptrx points to \" \<\< ptrx \<\< endl; ptrx
> >     = nullptr;
> >
> > }
> >
> > cout \<\< \"Pointer ptrx points to nothing!n\";
>
> }
> :::
:::

Helpful Tip: The null pointer becomes very useful when you must test the
state of a pointer, such as whether the assignment to an address is
valid or not.

# Summary

1.  All variables must be declared before use in C++.
2.  C++ has typical built-in numeric types: `int` is for integers and
    `float` and `double` are used for floating point depending on the
    number of digits desired.
3.  C++ has the Boolean type `bool` that holds `true` or `false`.
4.  The character data type `char` holds a single character which is
    encased in single quotes.
5.  Pointers are a type of variable that stores a memory address. To
    declare a pointer, an `*` is used before the variable name that is
    supposed to store the location.

# Check Yourself

::: {.mchoice answer_a="' '" answer_b="\" \"" answer_c="' ' or \" \" may be used" answer_d="It depends upon the implementation." answer_e="none of the above" correct="a" feedback_a="Right!" feedback_b="No. Double quotes are only used for strings." feedback_c="No. Only one set of symbols may be used." feedback_d="No. The implementation is consistent." feedback_e="One of the above is indeed correct."}
mc_characters

If I want to use the `char` type in C++, what set of symbols must be
used?
:::

::: {.fillintheblank}
memoryvar

A/an `___` is used to store a memory address in C++?

\- :pointer: Right!

:   

    variable

    :   Be more specific!

    reference

    :   That\'s Python, not C++!

    default

    :   Incorrect. Please try again
:::

::: {.mchoice answer_a="using ``&``" answer_b="using ``*``" answer_c="using ``id``" answer_d="It depends upon the implementation." answer_e="none of the above" correct="a" feedback_a="Right! ``&`` is the \"address-of\" operator, used to reference an address." feedback_b="No. ``int *p;`` defines a pointer to an integer, and ``*p`` would dereference that pointer, i.e. retrieve the data that p points to." feedback_c="No. This is used in Python." feedback_d="No. Try again." feedback_e="One of the above is indeed correct."}
mc_memory

How may one reference a variable\'s memory address in C++?
:::
