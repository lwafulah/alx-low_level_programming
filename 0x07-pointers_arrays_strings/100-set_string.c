#include "main.h"
/**
 *  set_string - sets the value of a pointer to a char
 *  @s: pointer to be set
 *  @to: string to set pointer to
 *  Return: 0 on success
 */
void set_string(char **s, char *to)
{
	*s = to;
}
