#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar writes character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);
/**
 * void print_alphabet(void) - print alphabet
 *
 */
void print_alphabet(void);
/**
 * void print_alphabet_x10(void) - print alphabet x10
 *
 */
void print_alphabet_x10(void);
/**
 * int _islower(int c) - prints if c is lowercase
 * @c: character to use
 * Return: 1 0r 0
 */
int _islower(int c);
/**
 * int _isalpha(int c) -ptints if c is a lowercase or upper case 
 * @c: character to use
 * Return: 1 or 0
 */
int _isalpha(int c);
/**
 * int print_sign(int n) - prints + if greater than one, prints  0 if n is equals to zero and prints  - if n is less than zero
 * @n:character to use
 * return: 1 if greater than one; 0 if equals to zero; -1 if less than zero
 */
int print_sign(int n);
/**
 * int _abs(int) - computes an absolute value of integer
 * 
 * Return: 0
 */
int _abs(int);
#endif
