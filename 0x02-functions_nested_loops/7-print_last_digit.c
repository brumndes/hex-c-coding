/*
 * File: 6
 * Author: Bruno Mendes
 */
#include <stdio.h>
#include "holberton.h"
/**
 * 7-print_last_digit.c - tests if the word is lowercase
 * Return: it  returns 0
 * @a, @c, @b: is integer
 */
int print_last_digit(int n)
{
	int a, c;
	char b;

	if (n < 0)
	{
		a = ((n + 1) * -1);
		b = ((a % 10) + 1);
	}
	else
	{
		a = n;
		b = (a % 10);
	}

	c = ('0' + b);
	_putchar(c);
	return (b);
}
