/*
 * File: 7
 * Author: Bruno Mendes
 */
#include <stdio.h>
#include "holberton.h"
/**
 * 7-print_last_digit.c - prints last digit of a number
 * Return: it  returns 0
 * @a, @c, @b, @n: is integer
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
