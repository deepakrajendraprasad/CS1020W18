Lecture Plan
============

Course: CS1020 Introduction to Programming
Term : 2018 Winter (Jan-Apr)

Grading Policy :
	- Theory 	: 50
		- Quiz 1 : 10
		- Quiz 2 : 10
		- End Sem : 30
	-Lab : 50

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
	
## Multi-way branching switch case

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
	- Example 2 : Multiplications table of an arbitrary integer

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

## do-while loops
	Example 1: Sum of input numbers, terminated by zero
	Example 2: Find dip, first peak

## while loops
	Example 1 : log-star function.
	Example 2 : Next higher power perfect square.
	Example 3 : Square root
		- Enhancements: exact when available, negative numbers

## Nested loops
	(Did not cover)
	Example : 10 x 10 Multiplication table
	Example : Bar graph


# Lectures 11 and 12
Feb 8, 2018

## Arrays

	- 	Discovery of arrays is like discovery of paper
		You can use it to store a lot of data and 
		read through it multiple times.
	
### Three steps to using an array

	1. 	Declare an array
		int marks[100]; // marks is an array that can hold at most 100 integers
		float weights[10]; // weights is an array that can hold at most 10 floating point numbers

	2. 	Store a value to i-th cell in an array
		marks[i-1] = 10 // First cell of the array is indexed by 0

	3. 	Read the data stored in an array
		value = marks[i-1];

### Points to remember

	1. 	The type of data to be stored (int/float/char etc)
		and the maximum number of them (size of the array)
		has to be declared in advance.

	2.	Array index starts from 0.
		So if marks is an array of 100 integers,
		they are marks[0], marks[1], ..., marks[99]	

	3.	Writing or reading to 101-th location of an
		array of size 100 can lead to unpredictable
		behaviour.
	
### Typical program flow when using arrays

	1. 	Try to guess what would be the maximum size of the 
		array that might be needed for the task and
		declare the array accordingly

	2.	Ask the user to enter length of his data.

	3. 	Make sure that his requirement is not more than
		the size we allotted for the array.

	4.	Read the data from the user one by one and
		store it in the array by using a scanf
		inside a for loop.

	5.	Optionally print back the contents of the array
		using a printf inside a for loop to check if
		the storing part was OK.

	6. 	Do what ever processing is needed and display
		the results.

	Example: Multi-function interactive data analyser.


# Lectures 13 and 14
Feb 15, 2018

## Arrays (contd ...)

	1. 	Discuss array initialisation and use it to modify 
		the program for doing array operations
	2. 	Enhance the previous program to do array reversal
	3. 	Enhance the previous program to do sorting
		- Bubble sort algorithm

## 2D-arrays (Matrices)

	1.	Do a matrix operations program by starting from the 
		same for 1D-arrays
	2.	Implement Search, Mirror etc

\pagebreak

# Lectures 15 and 16
Feb 22, 2018

## Agenda
	1.	Introduce file operations
		fopen(), fclose(), fscanf(), fprintf()
	2.	Write your own cat command
	3.	Write your own copy command
	4.	Enhance it to a substitution cipher
	5.	Enhance the matrix program to load the matrix from a file
	6.	Enhance the above program to save the matrix to a file

## Steps in using files

	1.	Declare two file pointers
			FILE *in_file, *out_file;
	2.	Declare character arrays for both file names 
			char in_file_name[81], out_file_name[81];
	3.	Get the file names from the user
			printf("Please enter the name of input file: ");
			scanf(" %s", in_file_name);
			printf("Please enter the name of output file: ");
			scanf(" %s", out_file_name);
	4.	Open the input file for reading
			in_file = fopen(in_file_name, "r");
	5. 	Check if the input file was opened correctly. 
		Otherwise, print an error message and return
	6.	Open the output file for reading
			out_file = fopen(out_file_name, "w");
	7.	Read data from input file using fscanf
			return_value = fscanf(in_file, "%c", &c);
	8.	Process the data c
	9.	Write the result to output file using fprintf
			fprintf(out_file, "%c", c);
	10. Check if return_value == EOF
		Continue with Step 7 if not
		If yes, break out of the loop
	11.	Close both the files
			fclose(in_file);
			fclose(out_file);
	12.	Return from the function


# Lectures 17 and 18
Mar 1, 2018

## Agenda
	1. 	Introduce functions, and present their beauty
		Kochan, Ch-7, First Line:
		"Behind all well-written C programs lies the same
		fundamental element - the /function/".
	
## Steps in using functions
	1.	Declare a function
		- 	name
		- 	number of inputs and the type of each input
		- 	type of return value 
		- 	Example: int factorial(int n);
	2.	Define a function a.k.a. write the code for the function
		-	You already know everything because main is a function
	3.	Calling a function

## Example programs
	1.	One argument, one return value
		abs()
		ceil(), floor(), round()
		to_upper(), to_lower()
	2.	Two arguments, one return value
		max(), power()
	3.	No arguments, no return value
		void print_message()
	4.	No arguments, one return value
		int main()
	5.	Making old code better
		sqrt() 
		two-variable calculator
	

## Some concepts
	1.	Actual parameters, formal parameters
	2.	Local variables, scope

# Lectures 19 and 20
Mar 8, 2018

##	Agenda 
	1.	Actual and formal parameters
	2.	Recursion
	3.	Scope of a variable
		auto, global and static variables		

##	Examples
	1.	Attempt to increment a variable using a function
	2.	Attempt to swap two variables using a function 
	
##	Recursion Examples
	1.	Factorial
	2.	Reading out the digits of a number (in decimal and in binary)
	3.	Towers of Hanoi

##	Using global and static variables
	1.	Global variables
		+ 	Can be shared across multiple functions
		+ 	Reduces the number of arguments to be passed to a function
		- 	Very very confusing to a reader of the program
		- 	Drastically reduces the chance of your funcion being used by
			another programmer.
		-	You cannot use that variable name in a function
	2. 	Static variables
		+	Communication with previous and later lifes
		-	

# Lecture 21 and 22
Mar 15, 2018

## Portions for Quiz-2

Chapters from Kochan on 
	-	Program Looping
	-	Making Decision (Repeat of Quiz-1), 
	-	Working with Arrays (including multi-dimensional arrays)
	-	Working with Functions (global, static and automatic variables) 
	- 	Pointers (You can skip the sections involving structures and strings)

##	Agenda

	1.	Pointers
	2.	Passing pointers to functions
	3.	Array names are pointers

##	Examples

	1.	Swapping two variables
	2.	Sorting an array using a function (Exercise)


# Lecture 23 and 24
Mar 22, 2018

## Agenda
	1.	More examples of pointers, arrays and functions
	2.	Variable length arrays
	3.	Handling 2D arrays in functions
	4.	Strings


##	Examples

	1.	Binary Search in a sorted array
		- First using array indices
		- Next using start and end pointers
	2.	Matrix addition (did not do)

# Lecture 25 and 26
Apr 04, 2018

## Agenda
	1.	Strings
		- Character arrays with an endmarker
		- C has special features for such arrays (but not enough)
		- C has a string library with more functions (but not enough)
		- Buffer overflow issues
	
## Examples
		- Length of a string
		- Isequal, Compare
		- Substring


# Lecture 27 and 28
Apr 12, 2018

## Structures in C
	1. What is it?
	2. How to use it?
		- Declaration of the type
		- Declaration of variables
		- Initialisation
		- Assignment
		- Passing structures to functions
		- Returning structures from functions


# Tentative Plan	


	
	
