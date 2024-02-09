---
layout: default
title: Installation Instructions
parent: Introduction to C++ for Python Programmers
nav_order: 4
---

# Let's look at a C++ program

{: .no_toc }

## Table of contents

{: .no_toc .text-delta }

1. TOC
{:toc}

---

# Install a C++ compiler

- [Download & Install VSCode](https://code.visualstudio.com/download)
- Get the latest version of MinGW-w64 via [MSYS2](https://github.com/msys2/msys2-installer/releases/download/2024-01-13/msys2-x86_64-20240113.exe), (about 80 MG, installation folder: about 1.2GB)
- [Config MinGW in VSCode](https://code.visualstudio.com/docs/cpp/config-mingw)
    * Follow steps 1-7 of the mentioned site.
- Installing the following extensions in VSCode:
    * (C/C++ for Visual Studio Code)[https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools]
    * [C/C++ Compile Run](https://marketplace.visualstudio.com/items?itemName=danielpinto8zz6.c-cpp-compile-run)
        + In *C/C++ Compile Run*'s setting change the value of `C-cpp-compile-run: Cpp-Copiler` to `C:\msys64\ucrt64\bin\g++`
        + In *C/C++ Compile Run*'s setting change the value of `C-cpp-compile-run: Cpp-flags` to `-std=c++20`
