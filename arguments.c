#include "monty.h"
void arguments(int argc)
{
	if (argc == 2)
		return;

	dprintf(2, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
