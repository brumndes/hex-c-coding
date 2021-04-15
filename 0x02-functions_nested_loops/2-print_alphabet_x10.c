/*
 * File: 0
 * Author: Bruno Mendes
 */
#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: it  returns 0
 */
void print_alphabet_x10(void)
{
	char b;
	int x = 0;

	for (b = 'a'; b <= 'z'; b++)
	{
		while (x < 10)
		{
			x++;
			_putchar(b);
		}	
	}
	_putchar('\n');
}
