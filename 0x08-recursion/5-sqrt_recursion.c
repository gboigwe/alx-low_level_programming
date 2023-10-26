#include "main.h"
/**
 * _sqrt_recursion - This function finds the square root
 * @n: The character to be written
 *
 * Return: Returning the found square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_recursion_2(n, 1));
}
/**
 * sqrt_recursion_2 - This function calculates the root
 * @x: The character to be written
 * @y: The character to be written
 *
 * Return: Squared root returned
 */
int sqrt_recursion_2(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (sqrt_recursion_2(x, y + 1));
}
