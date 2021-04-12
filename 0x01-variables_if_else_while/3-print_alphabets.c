/*
 * File: 3-print_alphabets.c
 * Author: Bruno Mendes
 */
#include <stdio.h>
/**
 * main - prints the alphabet in lowecase and highercase
 * Return: it  returns 0
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
