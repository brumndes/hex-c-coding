/*
 * File: 8-print_comb.c
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
	int b = 0;

	for (b = '0'; b <= '9'; b++)
	{
		putchar((b % 10) + '0');
		if (b != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
