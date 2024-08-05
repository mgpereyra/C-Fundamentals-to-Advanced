#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

int sum(int num1, int num2);
int difference(int num1, int num2);
int product(int num1, int num2);
int quotient(int num1, int num2);
long long int factorialUsingLoop(int num);
int isInFibonacci(int num);
long long int recursiveFactorial(int num);
int isPrimeNumber(int num);
void showArray(int array [] , int size);
void reverseArray(int * array, int size);
int isPalindrome(char * word);
void showMatrixInt(int * matrix, int rows, int columns);
void transposeMatrixInt(int * matrix, int rows, int columns, int * transpose);
void swapInt(int * num1, int * num2);
void sortArray(int array [] , int size);
void normalizeText(char * text);
char * myStrCpy(char * destination, const char * source);
void pressAnyKey();

// Exercises
void optionSimpleArithmetic();
void optionFactorialUsingLoop();
void optionFibonacci();
void optionRecursiveFactorial();
void optionPrimeNumber();
void optionArrayReversal();
void optionPalindrome();
void optionTransposeMatrixInt();
void optionArraySort();
void optionNormalizeText();
void optionCreateTextFile();
void optionReadTextFile();
void optionMyStrCpy();

// Menu
void showMenu();
void showExercise();

#endif // FUNCTIONS_H_INCLUDED
