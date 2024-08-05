# C-Fundamentals-to-Advanced
C Basics to Advanced: Introduction to syntax, data types, matrices, functions, pointers, files and algorithms.

-- Overview --

This project contains several C programming exercises implemented in a modular fashion, separating function definitions into header (.h) and implementation (.c) files to enhance maintainability and readability.

This summary outlines the primary functionalities provided by the project and highlights the modular structure for better code organization and maintenance. It also includes clear instructions on how to compile, run, and interact with the program.

Below is a brief description of each function and its purpose:

Arithmetic Operations
sum: Returns the sum of two integers.
difference: Returns the difference between two integers.
product: Returns the product of two integers.
quotient: Returns the quotient of two integers, with a check to prevent division by zero.

Factorial Calculations
factorialUsingLoop: Calculates the factorial of a number using a loop.
recursiveFactorial: Calculates the factorial of a number using recursion.

Fibonacci Series
isInFibonacci: Checks if a given number belongs to the Fibonacci series.

Prime Number Check
isPrimeNumber: Determines if a number is a prime number.

Array Operations
showArray: Displays the elements of an integer array.
reverseArray: Reverses the elements of an integer array.
sortArray: Sorts an integer array using selection sort.

Palindrome Check
isPalindrome: Checks if a given word is a palindrome.

Matrix Operations
showMatrixInt: Displays a matrix of integers.
transposeMatrixInt: Transposes a given matrix of integers.

Text Manipulation
normalizeText: Converts a string to lowercase except for the first character.
myStrCpy: Custom implementation of the strcpy function to copy a string from source to destination.

File Operations
optionCreateTextFile: Prompts the user to enter text and saves it to a file.
optionReadTextFile: Reads and displays the content of a text file.

Miscellaneous
pressAnyKey: Pauses the program until the user presses a key.
swapInt: Swaps the values of two integers.

Menu and Options
The program provides a menu for the user to select and execute different exercises. Each option calls a specific function to demonstrate various C programming concepts.

-- Usage --

To compile and run the program, follow these steps:

1. Compile the program: Use a C compiler like gcc to compile the source files.
2. Run the executable: Execute the compiled program.
3. Navigate the menu: Upon running the program, you will be presented with a menu of options. Enter the corresponding number to execute a specific exercise. For example, entering 1 will execute the simple arithmetic operations, and entering 0 will exit the program.
4. Interact with the program: Follow the on-screen prompts to provide input and view the output for each exercise. For example, you will be asked to enter integers for factorial calculations or a word to check for palindromes.