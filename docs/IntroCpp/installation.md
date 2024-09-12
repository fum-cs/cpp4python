---
layout: default
title: Installation Instructions
parent: Introduction to C++ for Python Programmers
nav_order: 4
---

# Installation Instructions

{: .no_toc }

## Table of contents

{: .no_toc .text-delta }

1. TOC
{:toc}

---

# Install a C++ compiler

- [Download & Install VSCode](https://code.visualstudio.com/download)
- Get the latest version of MinGW-w64 via [MSYS2](https://www.msys2.org/), [download page](https://github.com/msys2/msys2-installer/releases/download/2024-07-27/msys2-x86_64-20240727.exe), (about 100 MG downloaded, size of installation folder: about 1.5GB, installation duration: about 30 min)
- [Config MinGW in VSCode](https://code.visualstudio.com/docs/cpp/config-mingw)
    * Follow steps 1-7 of the mentioned site.
- Installing the following extensions in VSCode:
    * [C/C++ for Visual Studio Code](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)
    * [C/C++ Compile Run](https://marketplace.visualstudio.com/items?itemName=danielpinto8zz6.c-cpp-compile-run)
        + In *C/C++ Compile Run*'s setting change the value of `C-cpp-compile-run: Cpp-Copiler` to `C:\msys64\ucrt64\bin\g++`
        + In *C/C++ Compile Run*'s setting change the value of `C-cpp-compile-run: Cpp-flags` to `-std=c++20`

# Install on WSL

- [Using C++ and WSL in VS Code](https://code.visualstudio.com/docs/cpp/config-wsl)
	* [Error: /InRelease  Could not resolve 'archive.ubuntu.com'](https://tooba.co/%D8%AD%D9%84-%D9%85%D8%B4%DA%A9%D9%84-temporary-failure-resolving-ubuntu/)

# Throubleshooting
- According to [msys2 github:](https://github.com/msys2/MSYS2-packages/issues/2869) pacman -Syyuu, pacman -Syyuu