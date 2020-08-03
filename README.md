# C Course Curriculum (C 11)
11FEB2018

# C Programming Language:


## Course Philosophy:

There is a major difference between enterprise level code and academic code. Speaking strictly from professional experience, I cannot even count how many times 
I have seen students master theory and successfully matriculate from four year degree programs in computer science, only to flounder in junior developer positions. Meanwhile, I have also seen countless examples of  bright graduates from a 12 week coding bootcamp confidently contributing solutions and leading code reviews at their first place of employment with virtually no on the job training, yet fail to have much understanding of the underlying processes that make their code work. This is not to say that one path is better than another, but rather that both are suited for different tasks. A thorough knowledge of computer science and a powerful command of theory are going to empower developers to make high-level design decisions and give a greater appreciation for the tools they're using. Similarly, understanding design patterns, being familir with practical features of a language like dependency injection, writing code that people know how to read, and following trends of what technologies are used to solve modern programming problems are what's going to get things working at the office.

As both an educator and a software engineer, I wholeheartedly feel that contemporary educators are currently faced with recognizing that major changes are warranted with how we teach and prepare the workforce of future software developers to solve problems. That being said, this course will encourage the student to write code. It will provide original, working examples. It will present the student with bugs in order to have them solve it. 

This being said, my philosophy on teaching starts with recognizing the value of both approaches. Instead of seeing them as two diametrically opposing forces, I feel 
that theory and practice should work together without compromising each other in order to prepare students for solving real world problems. This includes both
at the place of business and in higher education. I sincerely feel that this can most effectively be acheived by a comprehensive course curriculum comprised of 
several theory-focused courses and other classes focused on enterprise level application development.


This is where C comes in. This is a very special breed of programming language in that it is considered a _mid-level_ language -- meaning it has elements of both
machine languages and high-level languages. Simply put, C forces the programmer to manually deal with lower-level processes of the language (such as memory allocation) that would otherwise be handled for them in a higher-level language (such as Java or C#). By requiring attention to such details, it makes an excellent candidate for a theory/practice based course. 

The folowing course information is text that would be presented as power-point slides to supplement lecture. 

My hope is that the student, autodidact, or otherwise curious individual can walk away with from this course with a greater appreciation for both.

Knowledge is power! 

David Kolesar

27DEC19

 

### Introduction:
**Some notes on the history of C:**

* The C progamming langauge was created by Dennis Ritchie at Bell Telephone Laboratories in 1972.
* C was created for the specfic purpose of designing the UNIX operating system. 
* Many programmers used C to solve problems. This resulted in disharmony, so the American National Standards Institute (ANSI) formed a committe in 1983 to create ANSI Standard C. Modern compilers adhere to these standards.
* There was a predecessor language named B (That's why it's called C).

### So what is a programming language?

A programming langauge is a set of artificial rules and sytanx that are used to create instructions for a computer. These instructions are called a program. Literally everything your computer does (play music, share pictures, send messages, access the internet, run games, etcetera) are a result of a series of instructions (called programs) that perform calculations behind the scenes to let you do these things. That's why they're called "computers." These tasks are the result of a series of computations. In this class, we'll be creating our own programs.  




## Why would you use C?

* C is a [Turing-Complete Langauge](https://en.wikipedia.org/wiki/Turing_completeness).
* C is [portable language](https://en.wikipedia.org/wiki/Software_portability).
* C is a mid-level language. Ergo, it's ideal for:
	* drivers (https://en.wikipedia.org/wiki/Device_driver)
	* kernels (https://en.wikipedia.org/wiki/Kernel_(operating_system))
	* low level code 
* C is also object-oriented (https://en.wikipedia.org/wiki/Object-oriented_programming)

**NOTE -- The links provided are just extra reading to help introduce the student to terms they might be unfamiliar with. They are not required to understand the rest of the text. **

## What is hello world? 

In computer programming, there's a tradition when learning a new language to make it display the phrase "Hello, world!" This is commonly done because displaying text is typically the most basic thing a given programming language will do. This way, the programmer knows that their environment is configured properly before they start trying to write more complicated programs. 


## What is the lifecycle of a C program?


Take a look at the helloWorld program that comes as an example with this class. They are located in the *"examplePrograms"* folder. Once inside the helloWorld folder, open the main.c program inside of a basic text editor (notepad is fine). Do not use more advanced text editors like Mircosoft Word, which will add markup information that will prevent your program from running properly. This is the "hello world" program mentioned in the previous paragraph. However, before we test it out, let's talk about the life-cycle of a C program. You don't just punch commands into a black box and have them suddenly execute. There is a process that all C programs go through, in which different files (with different file extensions) perform different tasks. 



0. **Source Code Files (.c)**
*A programmer writes a disk file creating the source code:* 

  *printf("Hello, world!");*

This source code is the human readable language that we use to give a computer a series of commands to execute. In the previous example above, the **source code** tells the computer we want to print the statement "Hello World!" to the console. We do this by typing out a a predefined *function* that our programming languages already recognizes (more on this later).

 
1. **Object Files ( .obj or .o)** 
The source code is **compiled** by something known as a **compiler.** The process of **compiling** code is when it is turned from human readable source code into machine code (binary). This resulting machine code you are left with is known as **object code.** The disk file containing them is an [object file](https://en.wikipedia.org/wiki/Object_file).*

One of the main catches here is that **a program cannot compile if there are structural / syntatic errors.** If these are present in your code, the compiler will oomplain and give you a detailed error message explaining why it did not work(known as a **stack trace**). If the source code is error-free, then it generates the object code.

 
2. **Header Files -- Linking  (.h)**

A header file is a file containing C declarations and macro definitions to that is shared between different source files. You request the use of a header file in your program by "including" it, with the C preprocessing directive *#include*. In our **helloWorld** program, we included *stuio.h.*
 
The compiled code is **linked** to create a .exe file. At a very high level overview, linking is the process of collecting and combining all the difference pieces of object code into a single file that can has the ability to  be loaded into memory and executed.

*Library functions (such as printf() ) are **predefined functions**. A function is a group of commands (or statements) that can be called upon to execute these commands in serial. These predefined functions are those which have been defined in advance by the compiler to solve problems that almost every programmer will need (such as printing to the console like we did above). This saves programmers the trouble of having to create all of their own functions to solve basic problems all the time. The object file produced from our "helloWorld" program is linked to the predefined library functions to create the final executable program (.exe file extension). This is done with a **linker**.* 


## C Development lifecycle model:

![alt text](/CCompilationModel.jpg "The C Compilation Model")




**Quiz:**


Q. **What's is the purpose of a file with the extension ".h" in a C program?** 

Q. **What's is the purpose of a file with the extension ".c" in a C program?** 

Q. **What's is the purpose of a file with the extension ".o" or ".obj" in a C program?** 

Q. **Draw a graph of the C compilation model.** 

Q. **Who created the C programming language?. Where did he work? What was the year?** 


**Define:**

* compiler
* compilation
* linking
* source code
* object file
* library
* executable



## Components of a C program ("BasicPrograms" Directory):

Take a look at the helloWorld program in the examples directory (remember, open the *main.c* file). We see the following:


		#include <stdio.h>

		int main()
		{
		printf("Hello, world!");
		return 0;
		}

Let's dissect this program:


This program is made of a few different parts. The first are **statements.** A statement is a command given to the computer that instructs the computer to do something(such as display text to the screen). A computer program is made up of statements. Can you identify a statement in this program? If you said *printf("Hello, world!);*, you are correct!. The part that follows it (*return 0;)* is also a statement (more on return statements later).


These two statements are encompassed with a **function.** A **function** is a group of statements that are grouped together perform a more complicated task task. Every C program has at least **one** function. This is called the the **main** function. The purpose of the **main** function is that, no matter where you write it, this is where your program will begin executing. There are more on functions in **Unit 3,** but for now this is all you need to know: 

* A **function definition** is the actual statements written in a user-defined function.
* A user-defiend function is one created by the user.
* A Standard library functions is one that is not defined by the user. We used **printf()**, but we didn't define it. It's defined i nthe stdio.h library..



**#include <stdio.h>** is a statement which tells the compiler to inject the code within the *stdio* file to be accessible within the *main.c* file. As mentioned in the preious section, **stdio.h** is a **header file.** It commonly deals with input and output within programs. 



**Quiz:**

Q. **What are the two types of functions offered in C?**

Q. **Identify each part of the helloWorld program.**


**Define:**

* function 
* variable
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

### Unit 2: Let's Write Some Code! Setting up an Environment:

If you want to write code, you're going to have to set up a **development environment** to do it. A **Development Environment** is the computer system and software suites that allows a programmer to develop changes in code before deploying it. Simply put, this is going to be the **compiler** and program that you will write your code directly into. This program is known as an **Integrated Development Environment** (or and **IDE**). While you can write code directly into notepad, this does not give you the ability to quickly compile or debug it. Moreover, it does not provide syntax highlighting, make code suggestions, and throw warnings or errors dynamically while you are writing your code. An IDE is an integral tool for actual enterprise software development. 

**Setting up a compiler:**

As you recall, the source code (human readable code) that you write needs a compiler to actually compile it into object code. The most frequently used and freely available compiler is the GNU C/C++ compiler. Others do exist, but this compiler is perhaps the most common. We will now install GNU C/C++ compiler on both Linux, Mac, and Windows. 

*Note - why are we installing both a C **and** a C++ compiler? What is the difference?*

For the sake of brevity, the major difference between C++ and C is that C++ has a lot of the bells and whistles that C doesn't. Namely, the greatest difference between both these languages is C is a **procedural programming language and does not support classes or objects.** On the otherhand, C++ is an object-oriented programming language and allows for classes / objects. If this is a little confusing, don't worry about because it isn't imperative for our current class. The main point to drive home here is that that the GNU compiler has both C and C++ because this compiler works for both C and C++ programming languages. That said, installing the GNU compiler on different computing platforms is very different and gives you a taste for the differences in each one.

**A note on "the best" development platform.**

Things have changed a lot since I was programming in the 90s. Computers were not nearly as common as they were today, and learning a programming language was like learning to interpret hyrogliphics. There wasn't much support. There was no such thing as Stack Overflow (actually until quite recently). Most of the instructions on how to code came from dusty old books that were frequently outdated by the time they were published (which is why online resources are almost always superior). If you felt like tying your phone line up for a few hours and surfing the web for answers, search engines were phenomenally bad. Getting 56k out of a 56k connection was often the exception rather than the rule. Of the resources you reached, bad practices were preached by self-proclaimed gurus who suffered greatly from the Dunning-Kruger Effect. Worst of all, many of the libraries and tools we take for granted today didn't exist yet. 

A major part of this hurdle was that different computing platforms were better suited for programming than others. When I started doing this back when dinosaurs roamed the earth, you could pretty much expect to be laughed out off vBulletin forum you went onto if you were trying to program in anything other than Linux. It was largely considered the gold standard. Windows was generally understood to be the operating system you bought your grandmother so she could play solitaire and use her America Online Free Trial CD. Now, with the growth of personal computing and the fact that technology as a whole has evolved into an integral part of our lives, this is no longer the case. Linux still has a close place in my heart and, anecdotally, I still find the most talented developers use it as their primary computing platform. However, you can program just as easily in Windows or Mac at this point in time. It's good to branch out and know all three, but you should use whatever one you're comfortable with.

**Linux / Unix**

The GNU Compiler Collection (GCC) is a compiler system produced by the GNU Project for all sorts of programming languages. If you are using Linux / UNIX, it's highly possible you already have it installed. However, we have to check if that is the case. In a terminal, type the following command:

*$ gcc -v*

If it's already installed, it will give you the version. As a general note to the reader, this is usually the surefire way to see if you have any given technology installed on your system. 

If GCC is not installed, you will have to look up how to do it yourself before you move onto the next step. Does you feel like that's just the author being lazy? Love it or hate it, technology changes all the time. A major part of software development is following leads to bridge the gaps of that change. For example, the specific commands used to install the GCC will be different most likely before this text is even published. 



**Mac**

If you're on Mac, what you're going to be looking for is something called the **Xcode development environment.** If you don't already have it, you can easily get it from Apple's web site. There will be instructions on the download page on how to install it and set it up. If it is configured properly, you will have the GCC set up (which, as mentioned, contains the  GNU compiler for C/C++).


**Windows**

To install GCC on Windows, you will need to install someting called MinGW (**Min**imalist **G**NU for **W**indows). MinGW is a free and open source software development environment that allows you to use the GCC. To install MinGW, go to the MinGW homepage (www.mingw.org) and head to the download page. You most likely will want to download the latest version of the MinGW installation. When you download and run this program, it will install MinGW for you. *Just make sure during the isntalation process that you install gcc-core, gcc-g++, binutils, and the MinGW runtime. If you don't do that, stuff most likely won't work.** 


Now you get to add the *bin* subdirectory of your MinGW installation to your PATH environment variable. In case you were wondering, this "bin" directory is short for "binaries." This is a convention in Linux/Unix systems found within the root directory. It's purpose is to house the executables that arer required for the machine to actually boot. How you add this is going to be different for each specific version of Windows. 



**Installing an IDE:**

**This is your first big assignment:** Install the compiler and the IDE. These instructions are intentionally *not explicit* because it will give you a taste of looking things up online and trying to figure out basic computing problems for yourself. If things do not go according to plan or you run into technical errors along the way **do not be discouraged. If you start getting frustrated, remember that if things always worked the way they were supposed to programmers wouldn't be paid.** Unforseen gaps in knowledge or unexpected technical errors are just the name of the game.



### Unit 3: Components of a C program:

**_Statements_**

* **Statements** are a complete instruction that directs the computer in question to carry out some task -- usually these are one per line. 
* **Compound Statements** (also known as **blocks*) are a group of two or more C statements.

This is a _statement_: 

		printf("I have opinions!");

This is a _block_:

		  { // start of block
				printf("People are imprisoned in their phones.");
				printf("That's why they're called cell phones.");
		  } // end of block


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
	
	* Addition :  				x + y
	* Subtraction :  			x +- y
	* Multiplication :  			x * y
	* Modulus :  				x % y
	* Division :  				x / y


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

Logical operators exist in case the programmer needs to ask more than one question at once. For example, imagine an intelligence system that evaluates "If the target 
exists in a conflict zone, possesses hostile enemy elements, and is clear of noncombattant civilians, report that the area is clear for smart missile contact." The
logical operator functionality of C allows the programmer to evaluate all of these conditionis in one expression. C only has three logical operators, which are as follows:
	
	&& -- AND
	|| -- OR
	! -- NOT
	
In the following examples, all of these expressions would be evaluated as true:
	
	boolean isTrue = true;
	boolean isFalse = false;
	
	
	if(isTrue == true && isFalse == false)
	{
		printf("The expression is true");
	}
	
	
	if(isTrue == true || isFalse == false)
	{
		printf("The expression is true");
	}
	
	
	if(isTrue == false || isFalse == false)
	{
		printf("The expression is true");
	}
	
	
	if(isTrue == true || isFalse == true)
	{
		printf("The expression is true");
	}
	
	
	if(isTrue != false)
	{
		printf("The expression is true");
	}
	
	**Note :*** Sometimes new developers are confused by the "or" operator. In both cases, _one_ of the conditions is true, so the code executes. 
	


**Quiz:**

Q. **What is the difference between a statement and a block?** 
	
Q. **What are the four kinds of operators?** 

Q. **Next to each operator, list which category it belongs to:**

* ||
* !
* if
* =
* ==
* =
* ==
* ++
* --
* %
* <
* =<

Q. **Which of the following is an example of assignment?**

int a = 1;

int b == 1;

Q. **What is the value of x and y in the following code?** 

x = 10;

y = x++;

Q. **What is the value of x and y in the following code?** 

x = 10;

y = ++x;

Q. **What is the difference between unary and binary operators?** 

Q. **Define whether each expression will evaluate to true or false:**

* (1 == 1)
* (1)
* (-1)
* (1 == 1 && 1 == 2)
* (1 == 1 || 1 == 2)
* (1 = 1)


**Define:**
* code block
* Operator
* expression 
* code block
* Operator
* function definition


**Programming Challenges:**

* Rewrite the expression so that a single if statement can be used such that __it evaluates to the same outcome__:

			if ( x > 1 ) 
			{
				if ( x < 20 ) 
				{
					printf("I hate tests.");
				}
			
			}
			
* The following program contains a nasty bug! Fix the bug in the program:

		#include <stdio.h>
		int x = 1;
		int main (  ) 
		{
		if (x = 1) 
			printf("Hello world!");
		else 
			printf("Goodbye world");
		} 

**Extra Credit Challenge:**

Write a program that evaluates a variable and calculates if it is a prime number. The variable should be able to be _any_ integer.

**Interactive Extra Credit Answer can be found at:** https://onlinegdb.com/HJBgnwMxD or in PrimeNumberExample within this repository.

### Unit 4: Functions:

Functions are a fundamental component of C programming and virtually all modern languages. While you have already been exposed to some functions from the C library, this unit will focus on creating our own functions and understanding each component. Simply put, a **function** is a named, indepedent block of code that does a specific thing that can be called within other sections of code. We're going to see why these are important with a real life example. 

**Code Challenge:**

Imagine your boss approaches you and explains that you need to write a program that takes in user input and gives a specific output depending on what it is. Specifically, the usecase she is looking for is:

1. If the user passes in "1," the program reutrns "a"
2. If the user passes in "2," the program returns "b"
3. If the user passes in "3," the program returns "ab"

Please take the time to write this program. Your result might look something like the following example:

		#include <stdio.h>

		main()
		{
			int userInput, i, isValid, isPrime = 0;
			printf("This program retuns 'a' if '1' is input. \n");
			printf("This program retuns 'b' if '2' is input. \n");
			printf("This program retuns 'ab' if '3' is input. \n");

			
			//perform user validation
			while (isValid == 0)
			{   
				printf("Enter 1, 2, or 3:  \n");
				scanf("%d", &userInput);

				if( userInput <= 3 && userInput >= 1 )
				{
					isValid = 1;
				}
			}
			
			if(userInput == 1)
			{
				printf("a");
			}

			if(userInput == 2)
			{
				printf("b");
			}

			if(userInput == 3)
			{
				printf("a");
				printf("b");
			}

					
			return 0;
		}

**NOTE --** For an interactive copy of this example with a functioning C compiler, check: https://onlinegdb.com/rJaH1Yflv or in functionsExample1 within this repository.

One of the things that you might notice from this simple example is that it actually repeats code. Specifically, ues case "3" just prints "a" and "b" all over again. While it actually prints them on top of each other, what we're really doing is duplicating code here. This violates something in programming known as the **"DRY" PRINCIPLE** (**D**on't **R**epeat **Y**ourself!). What that means is that you don't want to end up repeating code over and over again within a program. In our specific case, this can be aleviated by adding functions to our program.  


**Code Challenge:**

Attempt to write this program with functions so that it doesn't repeat itself. Remember, it's *okay* if you tried something and it doesn't work correctly! I presently work for a guy who used to repair aircraft for the United States Air Force. The way he puts it is that, one of the benefits of software engineering versus other kinds of engineering is that things won't blow up in your face or fall out of the sky if you do them wrong! Simply put, this is a **safe place** to make mistakes (before you start programming software for fighter jets!). When you finish, your program might look something like this: 

 
		#include <stdio.h>

		main()
		{
			int userInput, i, isValid, isPrime = 0;
			printf("This program retuns 'a' if '1' is input. \n");
			printf("This program retuns 'b' if '2' is input. \n");
			printf("This program retuns 'ab' if '3' is input. \n");

			
			//perform user validation
			while (isValid == 0)
			{   
				printf("Enter 1, 2, or 3:  \n");
				scanf("%d", &userInput);

				if( userInput <= 3 && userInput >= 1 )
				{
					isValid = 1;
				}
			}
			
			if(userInput == 1)
			{
				printA();
			}


			if(userInput == 2)
			{
				printB();
			}


			if(userInput == 3)
			{
				printA();
				printB();
			}

			return 0;
		}

		void printA() 
		{
			printf("a");    
		}

		void printB() 
		{
			printf("b");    
		}

**NOTE --** For an interactive example with a functioning C compiler, check: https://onlinegdb.com/HJJazYMxP or in functionsExample2 within this repository.

In this case, we have the exact same use case that does the exact same thing. The difference here is that we have code that doesn't repeat itself. That said, some of the keen students might ask what we've gained by doing this? After all, we ended up writing more code to do the exact same thing as we were doing previously! What might not be obvious in this example may make itself more clear in the next two coding challenges: 

**Code Challenge:**

Imagine your boss approaches you and explains that you need to write a program that takes in user input and determines if the given number is prime. You might be a smarty-pants and have it already finished as the previous unit's extra credit assignment. However, if want to write your own now or continue with the instructor's exmaple from the previous unit, that's okay too. However, it is **strongly** suggested that you use your own program. That said, your solution might look something like this: 

		#include <stdio.h>

		int
		main()
		{
			int userInput, i, isPrime = 0;
			printf("This program calculates if a positive integer is prime. \n");
			printf("Enter a positive integer: ");
			scanf_s("%d", &userInput);

			for (i = 2; i <= userInput / 2; ++i)
			{
				if (userInput % i == 0)
				{
					isPrime = 1;
					break;
				}
			}

			if (userInput == 0 || userInput == 1 || userInput == 2)
			{
				isPrime = 1;
			}

			if (isPrime == 1)
			{
				printf("%d is not a prime number.", userInput);
			}
			else
			{
				printf("%d is a prime number.", userInput);
			}
			return 0;
		}

**Note -- interactive example can be found at:** https://onlinegdb.com/HJBgnwMxD or in PrimeNumberExample within this repository.

Simply put, this is a program that takes a positive integer from the user and prints to the console if the integer is a prime number or not. It's very straight-forward and does one thing. However, enterprise level code is seldom this simple. An enterprise level programmer will often be put into positions where they are expected to refactor code or repurpose it to include different acceptance criteria. 


**Code Challenge:**

In this case, let's suppose you hear from your boss again that the customer wants this program to be adapted to three total use cases:

1. The program calculates if a number is prime (which it already does).
2. The program calculates area for a given number.  
3. The program gives the option to either calculate if the number is prime, area of the number, or both.  
 


We already have a working program that calculates area for a user given input (located in the example program folder). However, as mentioned previously, it is most beneficial to write one yourself. The completed product might look something like this: 

			#include <stdio.h>

			int radius, area;

			int main( void )
			{
				printf("Enter radius to calculate area: ");
				scanf ( "%d", &radius);
				area = (int) (3.14159 * radius * radius);
				printf( "\n\nArea \ %d\n", area);
				return 0;
			}

So how do we slap these two pieces together to solve the acceptance criteria? Remember, we can use functions to help us so that we don't repeat our code! 

If we were following the DRY principle, we might end up with something like this: 

		#include <stdio.h>

		int
		main ()
		{
		  int userInput, isValid, userNumber =0;
		  printf ("This program can perform the following calculations:\n");
		  printf ("1. Determine if the number is prime  \n");
		  printf ("2. Determine the area of the number  \n");
		  printf ("3. Determine if the number is prime AND determine the area of the number  \n");
		  printf ("Please enter 1, 2, or 3:  \n");


			//perform user validation
			while (isValid == 0)
			{   
				scanf ("%d", &userInput);
				printf ("Enter 1, 2, or 3:  \n");

				if( userInput <= 3 && userInput >= 1 )
				{
					isValid = 1;
				}
			}
			
		  printf ("Please enter the number you would like calculations performed on:  \n");
		  scanf("%d", &userNumber);

			if(userInput == 1)
			{
				calculatePrime(userNumber);    
			}

			if(userInput == 2)
			{
				calculateArea(userNumber);    
			}

			if(userInput == 3)
			{
				calculatePrime(userNumber);    
				calculateArea(userNumber); 
			}


		  return 0;
		}

		void calculatePrime(userNumber)
		{
			int i, isPrime = 0;
		for (i = 2; i <= userNumber / 2; ++i)
			{
			  if (userNumber % i == 0)
				{
				  isPrime = 1;
				  break;
				}
			}

		  if (userNumber == 0 || userNumber == 1 || userNumber == 2)
			{
			  isPrime = 1;
			}

		  if (isPrime == 1)
			{
			  printf ("%d is not a prime number.", userNumber);
			}
		  else
			{
			  printf ("%d is a prime number.", userNumber);
			}
		}

		void calculateArea(userNumber)
		{
			 int area = 0;
			 area = (int) (3.14159 * userNumber * userNumber);
			 printf( "\n\nArea \ %d\n", area);
		}

**Note -- interactive example can be found at:** https://onlinegdb.com/BJv-KKMxv or in functionsExample3 within this repository.