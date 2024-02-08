---
layout: default
title: Python\'s turtle vs C-Turtle
nav_exclude: true
---

`C-Turtle` varies from the Python `turtle` library primarily in syntax.
Most of the methods are exactly the same between implementations,
however there are a few notable differences between the two. Colors, for
example, must be surrounded by curly brackets (e.g, \'{\' and \'}\')
when referring to them by a name such as \"red\", \"green\", or
\"blue\". You can also ask for a random color by using the string
\"random\".

``` {.cpp}
ct::Color red   = {"red"};
ct::Color green = {"green"};
ct::Color blue  = {"blue"};
ct::Color random = {"random"};

//This works due to the variable above...
turtle.pencolor(red);

//And so do these.
turtle.pencolor({"green"});
turtle.pencolor({"random"});
```

Unlike in Python, the `write` method does not allow you to specify a
font nor size. In contrast to Python, C++ finds it much more challenging
to handle fonts because operating systems deal with them in a complex
way. Furthermore, there is no \"world\" screen mode like there is in
Python. Normally, this would allow you to specify the \"bounds\" of your
canvas (e.g, specify minimum and maximum coordinates for your canvas).

Default shapes are also different and somewhat limited in comparison.
Python offers six shapes by default, being \"arrow\", \"circle\",
\"turtle\", \"square\", \"triangle\", and \"classic\". `C-Turtle`, on
the other hand, offers four shapes by default: \"arrow\", \"triangle\",
\"indented triangle\", and \"square\".

There are a few utility methods available in `C-Turtle` that are not
available in Python, such as `shift` and `middle`. The former of the
two, `shift`, simply adds to the X and Y coordinate position of the
turtle. If your turtle is at coordinate 600x, 400y and `shift` is called
with coordinate 50x and -50y, the turtle\'s final position would be
650x, 350y. The latter of the two, `middle`, returns the point exactly
between two other points. See the examples below.

``` {.cpp}
turtle.goTo(600, 400);
turtle.shift(50, -50);
//Turtle position is now 650x, 350y.
```

``` {.cpp}
ct::Point a = {400, 300};
ct::Point b = {450, 300};

//Should equal the point 425x, 300y.
ct::Point middle = ct::middle(a, b);
```
