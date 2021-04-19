/*
 * File: 8
 * Author: Bruno Mendes
 */
#include <stdio.h>
#include "holberton.h"
/**
 * jack_bauer - a function prints every minute of the day from 00:00 to 23_59.
 * Return: it  returns 0
 * @n: is integer
 */
void hr_01(void);
void hr_02(void);

void jack_bauer(void)
{
	hr_01();
	hr_02();
}
/**
 * hr_01 - returns each minute for the first 20hrs
 *
 * @hr_01 -  digit
 */
void hr_01(void)
{
	int hh, h, m, s;

	for (hh = 48; hh < 50; hh++)
	{
		h = 48;
		for (h = 48; h < 58; h++)
		{
			m = 48;
			for (m = 48; m < 54; m++)
			{
				s = 48;
				for (s = 48; s < 58; s++)
				{
					_putchar(hh);
					_putchar(h);
					_putchar(58);
					_putchar(m);
					_putchar(s);
					_putchar('\n');
				}
			}
		}
	}
}
/**
 * hr_2 - returns each minute from 20 to 24hrs
 *
 * @hr_2 -  digit
 */
void hr_2(void)
{
	int h, m, s;

	for (h = 48; h < 52; h++)
	{
		m = 48;
		for (; m < 54; m++)
		{
			s = 48;
			for (; s < 58; s++)
			{
				_putchar(50);
				_putchar(h);
				_putchar(58);
				_putchar(m);
				_putchar(s);
				_putchar('\n');
			}
		}
	}
}
