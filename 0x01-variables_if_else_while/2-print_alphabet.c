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
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
