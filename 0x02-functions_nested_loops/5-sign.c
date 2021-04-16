/*
 * File: 5
 * Author: Bruno Mendes
 */
#include <stdio.h>
#include "holberton.h"
/**
 * print_sign - tests some numbers
 * Return: it  returns 0
 * @c: is integer
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
