/*
*****************************************************************************
                        Assignment 1 - Milestone 3
Full Name  : Mauricio Gomes de Barros
Student ID#: 122509227
Email      : mgomes-de-barros@myseneca.ca
Section    : NII

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

// SAFE-GUARD: 
// It is good practice to apply safe-guards to header files
// Safe-guard's ensures only 1 copy of the header file is used in the project build
// The macro name should be mirroring the file name with _ for spaces, dots, etc.

// !!! DO NOT DELETE THE BELOW 2 LINES !!!
#ifndef CORE_H
#define CORE_H

// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// 
// Copy your work done from Milestone #2 (core.h) into this file
// 
// NOTE:
// - Organize your functions into the below categories
// - Make sure the core.c file also lists these functions in the same order!
// - Be sure to provide a BRIEF comment for each function prototype
// - The comment should also be copied to the core.c function definition
//
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


//////////////////////////////////////
// USER INTERFACE FUNCTIONS
//////////////////////////////////////

// Clear the standard input buffer
void clearInputBuffer(void);

// Wait for user to input the "enter" key to continue
void suspend(void);


//////////////////////////////////////
// USER INPUT FUNCTIONS
//////////////////////////////////////

// Get a valid integer from the keyboard
int inputInt(void);

// Get a valid integer from the keyboard and validate if the value entered is greater than 0
int inputIntPositive(void);

// Get a valid integer from the keyboard and validate if its between lower-bound and upper-bound
int inputIntRange(int lowerBound, int upperBound);

// Get a single character from the keyboard and validate it against an array of chars
char inputCharOption(const char stringArray[]);

// Get a string and valid if it's length is between minChar and maxChar
void inputCString(char* cString, int minChar, int maxChar);

// Display an array of 10-character digits as a formatted phone number
void displayFormattedPhone(const char* cString);


// !!! DO NOT DELETE THE BELOW LINE !!!
#endif // !CORE_H
