/* SPDX-License-Identifier: BSD-3-Clause */

#include "./syscall.h"
#include "./string.h"

static const char src[] = "warhammer40k";
static char dest[128];

int main(void)
{
	strcpy(dest, src);

	write(1, "Destination string is: ", 23);
	write(1, dest, strlen(dest));

	write(1, "\n", 1);

	strcat(dest, src);
	write(1, dest, strlen(dest));
	write(1, "\n", 1);

	exit(0);
	return 0;
}
