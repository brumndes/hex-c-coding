/*
 * File: 3-print_alphabets.c
 * Author: Bruno Mendes
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the alphabet in lowecase and highercase
 * Return: it  returns 0
 */
int main(void)
{
	char b,B;

	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}
	for (B = 'A'; B <= 'Z'; B++)
        {
                putchar(B);
        }
	putchar('\n');
	return (0);
}
