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
	int b = -1;

	while (b < 9)
	{
		b = b + 1;
		printf("%d", b);
	}
	return (0);
}
