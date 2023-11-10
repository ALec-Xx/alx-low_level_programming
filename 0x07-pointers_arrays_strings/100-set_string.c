#include "main.h"


void set_string(char **s, char *to)
{
	if (!to || !*s)
		return;
	*s = to;
}
