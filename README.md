# C Course Curriculum (C 11)
11FEB2018

# C Programming Language:


## Course Philosophy:

There is a major difference between enterprise level code and academic code. Speaking strictly from professional experience, I cannot even count how many times 
I have seen successful students with four year degrees in computer science flounder in a junior developer position. Meanwhile, I have also seen countless examples of  
bright graduates from a 12 week coding bootcamp confidently contributing solutions and leading code reviews at their first job with virtually no on the job 
training, yet have no understanding whatsoever of the underlying processes that make their code work. This is not to say that one path is better than another, 
but rather that both are suited for different tasks. A thorough knowledge of computer science and a powerful command of theory are going to empower developers to 
make high-level design decisions and give a greater appreciation for the tools they're using. Similarly, understanding dependency injection, writing code that 
people know how to read, and following trends of what technologies are used to solve modern programming problems are what's going to get things working at the office.

As both an educator and a software engineer, I wholeheartedly feel that our society is currently faced with recognizing that major changes are warranted with how we educate 
and prepare the workforce of future software developers to solve problems. 

This being said, my philosophy on teaching starts with recognizing the value of both approaches. Instead of seeing them as two diametrically opposing forces, I feel 
that theory and practice should work together without compromising each other in order to prepare students for solving real world problems. This includes both
at the place of business and in higher education. I sincerely feel that this can most effectively be acheived by a comprehensive course curriculum comprised of 
several theory-focused courses and other classes focused on enterprise level application development.

This is where C comes in. This is a very special breed of programming language in that it is considered a _mid-level_ language -- meaning it has elements of both
machine languages and high-level languages. Simply put, C forces the programmer to manually deal with lower-level processes of the language (such as memory allocation) 
that would otherwise be handled for them in a higher-level language (such as Java or C#). By requiring attention to such details, it makes an excellent candidate for a 
theory/practice based course. 

The folowing course information is text that would be presented as power-point slides to supplement lecture. 

My hope is that the student, autodidact, or otherwise curious individual can walk away with from this course with a greater appreciation for both.

27DEC19

David Kolesar
 

### Introduction:


* The C progamming langauge was created by Dennis Ritchie at Bell Telephone Laboratories in 1972.
* C was created for the specfic purpose of designing the UNIX operating system. 
* Many programmers used C to solve problems. This resulted in disharmony, so the American National STandards Institute (ANSI) formed a committe in 1983 to create ANSI Standard C. Modern compilers adhere to these standards.
* There was a predecessor language named B (That's why it's called C).


## Why would you use C?

* C is a [Turing-Complete Langauge](https://en.wikipedia.org/wiki/Turing_completeness).
* C is [portable language](https://en.wikipedia.org/wiki/Software_portability).
* C is a mid-level language. Ergo, it's ideal for:
	* drivers
	* kernels
	* low level code
* C is also object-oriented

## What is the lifecycle of a C program?

0. **Source Code Files (.c)**
*A programmer writes a disk file creating the source code:* 

  *printf("Helo World");*

 
1. **Object Files ( .obj or .o)** 
The source code is compiled to create an object file (translating the human readable source code into binary). 
*This is performed by the compiler. This binary is known as object code. The disk file containing them is an [object file](https://en.wikipedia.org/wiki/Object_file).*

 
2. **Linking  (.h)** 
The compiled code is linked to create a .exe file. 
*Library functions (such as printf() ) are **predefined functions**. These functions are those which have been defined in advance by the compiler to solve problems that almost every programmer will need (such as printing to the console). The object file produced is linked to the predefined library functions to create the final executable program. This is done with a **linker**.* 


## C Development lifecycle model:

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


### Unit 1: Memory and Variables:

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



### Unit 2: Components of a C program:

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

	These are a specific branch of operators that perform (you guessed it) mathematical operations (such as addition and subtraction). These can be broken into *unary* and *binary* operators. *Unary* operators take a single operand, whereas *binary* operators take two operands. Consider the following:
	
	_Unary Operators_
	
	Increment variable x with unary operator:
	
		x = 1;	//the value of x is assigned to one

		x++;	//The unary operator increments x by 1
	
		x; 		//the value of x is now 2

	Incrementing a variable with unary operator also works this way:
	
		x = 1;	//the value of x is assigned to one

		++x;	//The unary operator increments x by 1
	
		x; 		//the value of x is now 2

	Similarly decrementing a variable with unary operator also works this way:
	
		x = 1;	//the value of x is assigned to one

		x--;	//The unary operator increments x by 1
	
		x; 		//the value of x is now 0

	The same pattern of placing the operator before or after the variable holds true for decrementing:
	
		x = 1;	//the value of x is assigned to one

		--x;	//The unary operator increments x by 1
	
		x; 		//the value of x is now 0

The difference between putting the operator before ( ++x; known as prefix mode ) and after ( x++; known as postfix mode) is when the variable is modified. In enterprise programming the difference is marginal, but academically it's worth noting that there is a difference. Namely, prefix mode incremends and decrements modify the variable before the operand is used in the enclosing expression, whereas they are modified afterwards in postfix mode. Consider the following example:

x = 10;
y = x++;

When this code is executed, x has the value of 11 and y has the value of 10. Why? The order of operations is as follows:

1. The value of x was assigned as 10.
2. The value of x was assigned to y;
3. X was incremented. 
 
 On the contrary, both x and y equal 11 in the following example:
 
x = 10;
y = ++x;
 
This is because the prefix model of the unary operator is used, so the value of x is incremented before assignment to the value of y. 


	_Binary Operators_

	Binary operators are a lot more familiar and include common mathematical operators the student has likely been exposed to as part of high school mathemathics:
	
	* Addition :  				x **+** y
	* Subtraction :  			x **+-** y
	* Multiplication :  		x ***** y
	* Modulus :  				x **%** y
	* Division :  				x **/** y


**Order Of Mathematical Operations**

	* Operations are performed in the following order:
	
		* Unary decrement and increment
		* Multiplication, Division, and Modulus
		* Addition and subraction

	* When an expression contains more than one operator of the same importance, they are solved left to right. For example:
	
		a * b / c * d  
		
		In this example, a is multiplied by b. The product is divided by c, and the quotient of this is multiplied by d.
	
	


_Relational Operators__

 * Relational operations are expressions whose result is always *true* or *false.*  The following table illustrates the relational operators in C:
 
 
![alt text](/relationalOperators.png "Relational Operators in C")


**Note : In C, the value _1_ equates to true and _0_ equates to false.**
	

	Perhaps the most important relational operator you will learn about is the _if statement_. These are statements which are part of a family of statements known as _program control statements_. These statemetns contain an expression which, if evaluating to true, instruct the program to execute the code within the brackets. Consider the following example:
		
		int Irene = 1;
		
		if (Irene >= 4 )
		{
			printf("Irene is greater than or equal to four.");
		}
	
	In this case, the code will )not) execute because the value of the variable is 1, meaning the conditions are not met to result in the expression being true. While it is 
	not modern convention, oldschool if statements can be written in C without brackets. For example:

		int Irene = 1;
		
		if (Irene >= 4 )
			printf("Irene is greater than or equal to four.");
	
	Again, this is not common practice, but the first and second example perform the exact same work. 
	
	The if statement is often paired with an else clause. The else clause is executed on the condition that the if statement's conditions are _not_ met. For example:


		int Irene = 1;
		
		if (Irene >= 4 )
		{
			printf("Irene is greater than or equal to four.");
		}
		else 
		{
			printf("Irene is not greater than or equal to four.");
		}
	
	In this case, the program will print "Irene is not greater than or equal to four" since the evaluated expression witin the if statement does not evaluate to true. 

_Logical Operators_

