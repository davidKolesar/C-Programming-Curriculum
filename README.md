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

0. _Source Code Files (.c)_
*A programmer writes a disk file creating the source code:* 

  *printf("Helo World");*

 
1._Object Files ( .obj or .o)_ 
The source code is compiled to create an object file (translating the human readable source code into binary). 
*This is performed by the compiler. This binary is known as object code. The disk file containing them is an [object file](https://en.wikipedia.org/wiki/Object_file).*

 
2. _Linking  (.h)_ 
The compiled code is linked to create a .exe file. 
*Library functions (such as printf() ) are _predefined functions_. These functions are those which have been defined in advance by the compiler to solve problems that almost every programmer will need (such as printing to the console). The object file produced is linked to the predefined library functions to create the final executable program. This is done with a _linker_.* 


### C Development lifecycle model:

![alt text](/CCompilationModel.jpg "The C Compilation Model")



_Quiz:_


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

*_helloWorld_* -- Always start with a helloWorld program! Illustrates working program. 

*_ageCalculator_ / calculateArea*

* -- Illustrates #include, function calls, variables, function prototypes vs function definitions, && use of _#define_.
	* _#define_ is a pre-processor directive while const is actually a keyword. This means if define is used to, for example, define some values with a name (string). This means the defined string is known as a _Macro definition_ in C/C++. However, const is a keyword or used to make the value of an identifier (that is constant) constant.
	* a _function prototype_ provied the compiler with the name and arguments of the functions contained in the program -- appearing before the function is actually used.*
	* a function definition is the actual statements written in a user-defined function.


_Quiz:_


Q. **What's the difference between a statement and a block?** 

Q. **What are the two types of functions offered in C?**

Q. **Explain the use of #define versus const**


**Define:**

* function 
* variable
* function prototype_
* function definition



21DEC19
