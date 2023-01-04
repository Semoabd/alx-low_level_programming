/*
 * File: 6-is_prime_number.c
 * Auth: semo
 */

#include "main.h"

int id_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - Checks if a number is divisible.
 * @num: The number to be checked,
 * @div: The divisor.
 *
 * Return: If the number divisible -  0.
 *         If thre number is not dicisible - 1.
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
}
