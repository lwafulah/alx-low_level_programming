#include "main.h"
/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * and 0 if not
 * @s: string
 * Return: integer
 */
int is_palindrome(char *s)
{
	int length = 0;

	if (s[0] == '\0')
		return (1);

	length = _strlen_recursion(s);

	return (checkPalindrome(s, 0, length - 1));
}

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * checkPalindrome - function that checks if a string is a palindrome
 * @s: string
 * @start: integer
 * @end: integer
 * Return: integer
 */
int checkPalindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (checkPalindrome(s, start + 1, end - 1));
}
