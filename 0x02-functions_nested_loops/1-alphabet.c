/*
 * File: 0
 * Author: Bruno Mendes
 */
#include <stdio.h>
#include "holberton.h"
/**
 * main - print alphabet
 * Return: it  returns 0
 *
 */
void print_alphabet(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
}
