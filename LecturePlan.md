Lecture Plan
============

Course: CS1020 Introductio to Programming
Term : 2018 Winter (Jan-Apr)

# Lecture 1
Jan 3, 2018

Objective of the course:
	To give you a /balance of C/.

## Learning C programming is like learning cycling
	- Looks very intimidating in the beginning
	- Very enjoyable once you get the balance of it
	- Persistence is the key till you get the balance
	- Practice is the key afterwards

## Why C?
	- Popularity
	- Many domains: 
		OS, Embedded Systems, Robotics, 
		Scientific Simulations, FEM
	- Many languages are C-like
	- Gives an exposure to the underlying hardware

## Disadvantage of C
	- Difficult to start
	- Strict syntax
	- Error prone

## Conceptual structure of a Program

                    Memory
                     ↑ ↓	
                --------------
        Input → | Processing | → Output	
                --------------

## Steps in completing a C program
	1. 	Create/Edit your program in a text editor
		(gedit, vim, emacs, atom, ...)
		Output is a text file called the source code
	2. 	Compile the source code using a C compiler
		(gcc file.c)
		Output is an executable file named a.out
	3.	Run the program 
		Test it with different inputs

## Demo of a "hello world program"

# Lecture 2
Jan 4, 2018
	
##	File structure in Linux
	-	Folders and files
	-	cd, ls, mkdir

##	Structure of a C program
	- 	A C program consists of one or more functions
	- 	A function is a small program that does a subtask.
	- 	A function named *main* is mandatory and it is the
		first function to run.
	-	A function can accept zero or more arguments
		and return zero or one result.
	-	One function can call another function
		(They help each other)

##	Structure of a function
	-	First line
		return data type, function name, arguments
		internal variable declarations
		processing
		return

		Example
		
		int main()
		{
			//Variable Declarations
			...

			// Processing
			...

			// Return the result
			return 0;
		}

# Lecture 3
Jan 10, 2018
	
## Data types
	-	You need not tell what is the value of x,
		but you have to tell what type of values x can hold
	- 	int, float, char
	- 	How to print and read each of the above
	-	integer division results in truncation
	-	= stands for assignment

##	Arithmetic operations
	-	+, - , *, /, %

# Lecture 4
Jan 17, 2018
	
##	Exam on Jan 25.
	- 	Topics
	-	Programming in C (Stephen G. Kochan)
		-	Some fundamentals
		-	Compiling and running your first program
		-	Variables, data types and arithmetic expressions
		-	Making decisions


## Decision making
	if (condition)
	{
		action 
	}
 
	Example 1: 	Checking if a number is a multiple of 3
	Example 2:	Division with zero check

	if (condition)
	{
		some actions;
	} 
	else
	{
		some other actions;
	}
	
	Examples : Modifiy both the above two programs
	Example 3: Larger of two numbers

	
	if (condition)
	{
		some actions;
	} 
	else if (another condition)
	{
		some other actions;
	}
	else
	{
		some other actions;
	}
	
	Example: Simple calculator

# Lecture 5 and 6
Jan 18, 2018
	
## Multiway branching switch case

	switch (expression)
	{
		case value1:
			action1a;
			action1b;
			break;
		case value2:
			action2;
			break;
		...
		case valuen:
			actionn;
			break;
		default:
			action-default
			break;
	}
	
	Example: Reimpliment Calculator using switch-case
	Falling through cases
	* and x for multiplication
	
	Another example of nested if
	Example: Check if three lengths can form the sides of a triangle
	
	Example: Check if a sequence of 3 numbers is monotone
	
	Making flatter decisions
		- && and ||
		- Using flags
		- Returning early
		- Being over smart

## For loop
	
	for(0-initialisation; 1-continue-condition; 3-update)
	{
		2-statements;
	}
	
	Sequence: 0,1,2,3,1,2,3 

	- Example 1 : Print numbers 1 to 10, 10 to 1, other increments
	- Example 2 : Mutliplication table of an arbitrary integer

# Lectures 7 and 8
Jan 25, 2018

## For loop continued
	Example 1: Factorial
	for(0. loop initialise; 1. continue condition; 4. update condition)
	{
		2. statements;
	}
	
	Order of check: 0, 1, 2, 3, 1, 2, 3, 1, 2, 3, ....	

## If inside for
	Example 1: IsPrime
		- sqrt(), math.h?
	Example 2: are two numbers relatively prime

## Switch inside for
	Example 1: hip hip hurray
	Example 2: read out the digits

## for inside a switch
	Enhance the calculator

# Lectures 9 and 10
Feb 1, 2018

## do-while loop
	Example 1: Sum of input numbers
	Example 2: Average, standard dev, maximum
	Example 3: Binary to decimal
		
		
	
		
