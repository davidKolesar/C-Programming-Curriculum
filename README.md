# C-Exercises
11FEB2018

# C Programming Language:

## Introduction:


* The C progamming langauge was created by Dennis ritchie at Bell Telephone Laboratories in 1972.
* C was created for the specfic purpose of designing the UNIX operating system. 
* Many programmers used C to solve problems. This resulted in disharmony, so the American National STandards Institute (ANSI) formed a committe in 1983 to create ANSI Standard C. Modern compilers adhere to these standards.
* There was a predecessor language named B (That's why it's called C).


### Why would you use C?

* C is a [Turing-Complete Langauge](https://en.wikipedia.org/wiki/Turing_completeness).
* C is [portable language](https://en.wikipedia.org/wiki/Software_portability).
* C is a mid-level language. Ergo, it's ideal for:
	* drivers
	* kernels
	* low level code
* C is also object-oriented

### What is the lifecycle of a C program?

0. **Source Code Files (.c)**
*A programmer writes a disk file creating the source code:* 

  *printf("Helo World");*

 
1. **Object Files ( .obj or .o)** 
The source code is compiled to create an object file (translating the human readable source code into binary). 
*This is performed by the compiler. This binary is known as object code. The disk file containing them is an [object file](https://en.wikipedia.org/wiki/Object_file).*

 
2. **Linking  (.h)** 
The compiled code is linked to create a .exe file. 
*Library functions (such as printf() ) are **predefined functions**. These functions are those which have been defined in advance by the compiler to solve problems that almost every programmer will need (such as printing to the console). The object file produced is linked to the predefined library functions to create the final executable program. This is done with a **linker**.* 


### C Development lifecycle model:

![alt text](/CCompilationModel.jpg "The C Compilation Model")


**Quiz:**


Q. **What's is the purpose of a file with the extension ".h" in a C program?** 

Q. **What's is the purpose of a file with the extension ".c" in a C program?** 

Q. **What's is the purpose of a file with the extension ".o" or ".obj" in a C program?** 

Q. **Draw a graph of the C compilation model.** 


**Define:**

* compilation
* linking
* source code
* object file
* library
* executable



## Components of a C program ("BasicPrograms" Directory):

Created examples illustrating basic concepts in C:

* **helloWorld** 
	* -- Always start with a helloWorld program! Illustrates working program. 

* **ageCalculator / calculateArea**

	* -- Illustrates #include, function calls, variables, function prototypes vs function definitions, && use of **#define**.
	* **#define** is a pre-processor directive while const is actually a keyword. This means if define is used to, for example, define some values with a name (string). This means the defined string is known as a **Macro definition** in C/C++. However, const is a keyword or used to make the value of an identifier (that is constant) constant.
	* a **function prototype** provied the compiler with the name and arguments of the functions contained in the program -- appearing before the function is actually used.*
	* a function definition is the actual statements written in a user-defined function.


**Quiz:**


Q. **What's the difference between a statement and a block?** 

Q. **What are the two types of functions offered in C?**

Q. **Explain the use of #define versus const**


**Define:**

* function 
* variable
* function prototype
* function definition


## Memory and Variables:

**_Random Access Memory_**

* A computer uses **Random Access Memory** (RAM) to store information while it operates. 
* RAM is volatile -- meaning that it is erased and replaced with new information when needed. 
* RAM is wiped when a computer is restared. 

The amount of RAM each computer has installed is typically denoted in Gigabytes (GB). 

-- One gigabyte of memory is 1024 megabytes (MB). 
-- One megabyte of memory is 1,024 kilobytes (KB). 
-- One kilobyte of memory is 1024 **bytes**.

A **byte** is a fundamental 

Ergo, a computer with 4GB of memory would have a total of 4,294,967,296 bytes of RAM.   