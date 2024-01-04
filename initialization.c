#include "monty.h"
void initialization()
{
	arguments = malloc(sizeof(arg_t));
	if (arguments == NULL)
		malloc_failed();

	arguments->stream = NULL;
	arguments->line = NULL;
}
