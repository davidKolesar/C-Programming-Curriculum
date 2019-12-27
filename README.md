# C Course Curriculum (C 11)
11FEB2018

# C Programming Language:

## Introduction:


* The C progamming langauge was created by Dennis Ritchie at Bell Telephone Laboratories in 1972.
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

Q. **Who created the C programming language?. Where did he work? What was the year?** 


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
-- One kilobyte of memory is 1024 **bytes**. A **byte** is a fundamental unit of computer data storage. 

Ergo, a computer with 4GB of memory would have a total of 4,294,967,296 bytes of RAM.   

The RAM in a computer is organized sequentially. That is, each byte follows another and hs their own unique address in memory that is used to identify it. While RAM has several uses, data storage is the function that is the pirmary concern for the C programmer. When you declare a variable, what you're really doing is naming a data storage location in your computer's memory.

When declaring numeric variables, they fall into two categories:

* **Integer variables** -- Numeric values that hold no fractional part (whole numbers). 
	* *Signed integers* can hold positive or negative values. 
	* *unsigned* integer can only hold positive values (including 0). 
* **Floating-point** variables hold values that have a fractional part (real numbers).



![alt text](/dataTypes.png "Data Types in C")


* *Note :* Where x = your datatype, you can get the size of a datatype with the following line:
printf(""\nA x is %d bytes"," sizeof( x ));

For example: 
printf(""\nA int is %d bytes"," sizeof( int ));

Be careful not to define variables outside outside the allowed range! For example:

short count = 1000000;
unsigned int value = -29000;

You should **NOT** do this! Your program might even compile, but your results will be incorrect. 



**Quiz:**


Q. **Why not just always use larger datatypes (such as long or double) when declaring variables?** 

Q. **What would be the output for the following line of code?**
		*int pi = 3.14;*


Q. **What would happen when the following code is executed? Explain why: **
		*short hoursProgramming = 399388299039;*
		*printf(hoursProgramming);*

Q. **What's the difference between an integer variable and a floating-point variable?** 

Q. **Go through the following variable declarations and indicate if they would compile. Explain why they would or they would not.** 
	*int Percent = 4;*
	*int yw8_444 = 0;*
	*int _Percent = 9;*
	*int double = 2;*
	*boolean 4sale = true;*
	*boolean Percent = 4;*
	
Q. **If a software engineer was following standard C programming conventions, what is true about a variable she named "TICKETS" ?** 

Q. **If a software engineer was following standard C programming conventions, what is the difference between a function she named *"convertStringsToChar"* and *"_convertStringsToChar?"***

Q. **True or false, C is case sensitive?** 

Q. **If a laptop is marketed as having 8 GB or ram, how many bytes of Random Access Memory does it have?** 

Q. **If James assignes a variable as a constant and then restarts his computer, is that variable still allocated in RAM?** 

Q. **What is the byte range of a char?** 

Q. **Explain what a keyword is in C:** 

Q. **What is the byte range of a char?** 

Q. **What is the difference between a signed and unsigned int?** 
	


**Programming Challenge:**
*Write a basic program that adds two numbers (Be sure to include a main function).*



## Components of a C program:

**_Statements_**

* **Statements** are a complete instruction that directs the computer in question to carry out some task -- usually these are one per line. 
* **Compound Statements** (also known as **blocks*) are a group of two or more C statements.

This is a _statement_: 

	printf("I have opinions!");

This is a _block_:

  { // start of block
        printf("People are imprisoned in their phones.");
        printf("That's why they're called cell phones.");
  } // end ofblock


**_Operators_**

* An **operator** is a symbol that instructs C to perform some kind of operation. Operators fall into one of several categories:

	_Assignment Operator_

	Assignment is whenever a program demarks the value of an object with the equals sign. This sign is used differently here than it would be in mathematics. For example, consider the statement:
	
	x = y;
	
	In mathematics, this would read that "x and y are equal." Instead, in C programming, this would be read "Assign the value of x to y." 
	

_Mathemetical Operators_

	These are a specific branch of operators that perform (you guessed it) mathematical operations (such as addition and subtraction).

_Relational Operators__
_Logical Operators_