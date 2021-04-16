/*
 * File: 6
 * Author: Bruno Mendes
 */
#include <stdio.h>
#include "holberton.h"
/**
 * _abs - tests if the word is lowercase
 * Return: it  returns 0
 * @n: is integer
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1); 
	}
}
