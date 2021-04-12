/*
 * File: 2-print_alphabet.c
 * Author: Bruno Mendes
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - It gets the last number of a random number and outputs some infos
 * Return: it  returns 0
 */
int main(void)
{
	int b;

	for (b = '0'; b <= '9'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
