---
layout: default
title: Vectors
parent: Collection Data Types
nav_order: 3
---

**Vectors** are much more similar to Python lists than arrays are.
Vectors use a dynamically allocated array to store their elements, so
they can change size, and they have other friendly features as well.
Because they use a dynamically allocated array, they use contiguous
storage locations which means that their elements can be accessed and
traversed, and they can also be accessed randomly using indexes.
However, vectors are dynamically sized, so their size can change
automatically. A new element can be inserted into or deleted from any
part of a vector, and automatic reallocation for other existing items in
the vector will be applied. Unlike Python lists, vectors are
homogeneous, so every element in the vector must be of the same type.

Vectors are a class that is available through a library called the
Standard Template Library (STL), and one uses a `< >` notation to
indicate the data type of the elements. In order to use vectors, One
needs to include the vector library.

    #include <vector>

::: {#tbl_vectorbasics}
+----------------------+----------------------+----------------------+
| **Vector Operation** | **Use**              | **Explanation**      |
+======================+======================+======================+
| > `[ ]`              | > `myvector[i]`      | > access value of    |
|                      |                      | > element at index i |
+----------------------+----------------------+----------------------+
| > `=`                | >                    | > assign value to    |
|                      |  `myvector[i]=value` | > element at index i |
+----------------------+----------------------+----------------------+
| > `push_back`        | > `myv               | > Appends item to    |
|                      | ect.push_back(item)` | > the far end of the |
|                      |                      | > vector             |
+----------------------+----------------------+----------------------+
| > `pop_back`         | >                    | > Deletes last item  |
|                      |  `myvect.pop_back()` | > (from far end) of  |
|                      |                      | > the vector         |
+----------------------+----------------------+----------------------+
| > `insert`           | > `myv               | > Inserts an item at |
|                      | ect.insert(i, item)` | > index i            |
+----------------------+----------------------+----------------------+
| > `erase`            | > `myvect.erase(i)`  | > Erases an element  |
|                      |                      | > from index i       |
+----------------------+----------------------+----------------------+
| > `size`             | > `myvect.size()`    | > Returns the actual |
|                      |                      | > size used by       |
|                      |                      | > elements           |
+----------------------+----------------------+----------------------+
| > `capacity`         | >                    | > Returns the size   |
|                      |  `myvect.capacity()` | > of allocated       |
|                      |                      | > storage capacity   |
+----------------------+----------------------+----------------------+
| > `reserve`          | > `myv               | > Request a change   |
|                      | ect.reserve(amount)` | > in capacity to     |
|                      |                      | > amount             |
+----------------------+----------------------+----------------------+

: **Common C++ Vector Operators**
:::

A very common programming task is to grow a vector using the
`push_back()` method to append to the vector as we see in the next
example. Because vectors can change size, vectors typically allocate
some extra storage to accommodate for possible growth. Thus the vector
typically has an actual *capacity* greater than the storage *size*
strictly needed to contain its elements.

# Iterating through Vectors

When iterating vectors, you must first find the length of your
container. You can simply call the `.length()` function. For arrays, the
number of elements can be found by getting the size in memory of the
array by using the `sizeof()` function, and then dividing it by the size
of the first element of the array using the same `sizeof()` function.
Because all elements in C++ arrays are the same type, they take the same
amount of space and that can be used to find the number of elements the
Array contains!

::: {.activecode language="cpp" sourcefile="ArrayIteration.cpp"}
vectorIteration1

\#include \<iostream\> using namespace std;

int main() {

:   int nums\[\] = {1,3,6,2,5}; //Divide the size of the array (in
    bytes) by the size of a single element (in bytes) // to get the
    total number of elements in the array. int numsSize =
    sizeof(nums)/sizeof(nums\[0\]); // Get size of the nums array

    for (int index=0; index\<numsSize; index++) {

    :   cout \<\< nums\[index\] \<\< endl;

    }

    // Simpler Implementation that may only work in // Newer versions of
    C++

    // for (int item:nums) { // cout \<\< item \<\< endl; // }

    return 0;

}
:::

An optional secondary version of the `for` loop has been commented out
of the above code. You can try running this in your version of C++ to
see if it works, but in some older versions of C++, such as C++98, it
does not.

The above loop assigns the variable `index` to be each successive value from 0 to numsSize.

:   Then, the value at that index in the array is printed to the
    console.

## Matching

::: {.dragndrop feedback="Feedback shows incorrect matches." match_1="[ ]|||Accesses value of an element." match_2="=||| Assigns value to an element." match_3="push_back|||Appends item to the end of the vector." match_4="pop_back||| Deletes last item of the vector." match_5="insert|||Injects an item into the vector." match_6="erase|||Deletes an element from the choosen index." match_7="size|||Returns the actual capacity used by elements." match_8="capacity|||Returns the ammount of allocated storage space." match_9="reserve||| Request a change in space to amount"}
matching_vectors

Match the Vector operations with their corresponding explination.
:::

::: {.tabbed}
intro_vector

::: {.tab}
C++

::: {.activecode caption="Using a vector in C++" language="cpp"}
introvector_cpp

// function that uses a vector to square // every number from 0 to 49 //
uses the reserve operation to save space in memory \#include
\<iostream\> \#include \<vector\> using namespace std;

int main(){

> vector\<int\> intvector; intvector.reserve(50);
>
> for (int i=0; i\<50; i++){
>
> :   intvector.push_back(i\*i); cout \<\< intvector\[i\] \<\< endl;
>
> } return 0;

}
:::
:::

::: {.tab}
Python

::: {.activecode caption="Using a Python list"}
introvector_py

\"\"\"Uses a list to square every number from 0 to 49 \"\"\" def main():
intlist=\[\] for i in range(50): intlist.append(i\*i)
print(intlist\[i\])

main()
:::
:::
:::

In the above example, the use of `reserve` was optional. However, it is
a good idea to use it before growing a vector in this way because it
will save time. Because vectors are stored in underlying arrays which
require contiguous memory, every time the vector\'s size gets too large
for the capacity, the entire vector must be moved to a larger location
in memory, and all that copying takes time. In a typical implementation,
the capacity is doubled each time. as in the example that follows.

::: {.activecode caption="With use of ``reserve``" language="cpp"}
vector_no_reserve_cpp

// function that uses a vector to square // every number from 0 to 49 //
and does not use reserve. // shows amount of space used \#include
\<iostream\> \#include \<vector\> using namespace std;

int main(){

> vector\<int\> intvector; // without intvector.reserve(50);
>
> for (int i=0; i\<50; i++){
>
> :   intvector.push_back(i\*i); cout \<\< intvector\[i\] \<\< endl;
>     cout \<\< \"capacity: \" \<\< intvector.capacity() \<\< endl;
>
> } return 0;

}
:::

Remembering that C++ is designed for speed, not protection, we will
likely not be surprised by the following:

::: {.tabbed}
vector_errors

::: {.tab}
C++

::: {.activecode caption="Vectors out of bounds" language="cpp"}
vector_errors_cpp

// Note: counting always starts at 0 // This demonstrates what happens
when // accessing datat outside of your vector

\#include \<iostream\> \#include \<vector\> using namespace std;

int main(){

> vector\<int\> intvector; intvector.reserve(10);
>
> for (int i=0; i\<10; i++){
>
> :   intvector.push_back(i);
>
> }
>
> for (int i=0; i\<=10; i++){
>
> :   cout \<\< \"intvector\[\" \<\< i \<\< \"\]=\" \<\<intvector\[i\]
>     \<\< endl;
>
> }
>
> return 0;

}
:::
:::

::: {.tab}
Python

::: {.activecode caption="Python list out of bounds"}
vector_errors_py

\"\"\"Demonstrates python\'s protections against iterating outside of a
list\"\"\" def main(): intlist=\[\] for i in range(10):
intlist.append(i)

> for i in range(11):
>
> :   print(\"intlist\[\" + str(i) + \"\]=\" + str(intlist\[i\]))

main()
:::
:::
:::

::: {.mchoice answer_a="Vectors can change size." answer_b="Vectors offer all of the features and protections of Python lists" answer_c="Vectors don't use contiguous memory, so elements can be inserted." answer_d="more than one of the above" answer_e="none of the above" correct="a" feedback_a="Right! Good job!" feedback_b="Not all of the protections of lists are offered by vectors; one can still iterate off of either end." feedback_c="No. Although elements can be inserted in vectors, they do require contiguous memory." feedback_d="No. Only one of the above is correct." feedback_e="One of the above is indeed correct."}
mc_array_vector

Which of the following is the biggest difference between a C++ array and
a C++ vector?
:::

::: {.mchoice answer_a="Nothing. It is completely optional." answer_b="Using it will save time if you know the maximum size needed." answer_c="It is required so memory can be allocated." answer_d="none of the above" correct="b" feedback_a="It is optional but it does serve a purpose. Try again." feedback_b="Right!" feedback_c="It is not required." feedback_d="One of the above is indeed correct."}
mc_vector1

What good is the `reserve` method in a vector?
:::
