/*
 * File: 0
 * Author: Bruno Mendes
 */
#include <stdio.h>
#include "holberton.h"
/**
 * _isalpha - tests if the word is lowercase
 * Return: it  returns 0
 * @c: is integer
 */
int _isalpha(int c)
{
	if ((c > 96) && (c < 123))
	{
		return (1);
	}
	else if ((c > 64) && (c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
