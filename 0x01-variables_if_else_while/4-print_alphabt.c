/*
 * File: 4-print_alphabt.c
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
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
	while (b < 'e' && b > 'e' && b < 'q' && b > 'q')
		putchar(b);
	}
	putchar('\n');
	return (0);
}
