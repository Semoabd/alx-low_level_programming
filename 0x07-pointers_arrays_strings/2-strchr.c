#include "main.h"
char *_strcht(char *s, char c)
{

	while (*s != '\0') 
	{
		if (*s == c) 
		{ 
			return (s);
		}
		
		++s;
	}

	if (*s == c)
	{ 
		return (s);

	}


	return (0);
}
