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
	int x;
	int a = (',');
	int b = (' ');
	for (x = 0; x <= 9; x++)
	{			
		putchar((x % 10) + '0');
		if (x != 9)
	{	
		putchar(a);
		putchar(b);
		}	
		else
		{
		putchar('\n');
		}			
		return (0);
}
