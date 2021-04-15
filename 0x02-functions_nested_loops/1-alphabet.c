/*
 * File: 0
 * Author: Bruno Mendes
 */
#include <stdio.h>
#include "holberton.h"
/**
 * main - prints Holberton
 * Return: it  returns 0
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}
	putchar('\n');       
	return (0);
}
