/* SPDX-License-Identifier: BSD-3-Clause */

#include <string.h>

char *strcpy(char *destination, const char *source)
{
	char *p;

	for (p = destination; *source!= '\0'; source++, p++) {
		*p = *source;
	}
	*p = *source;

	return destination;
}

char *strncpy(char *destination, const char *source, size_t len)
{
	char *p;
	size_t n = 0;
	for (p = destination; *source != '\0' && n < len; source++, p++, n++) {
		*p = *source;
	}
	*p = '\0';

	return destination;
}

char *strcat(char *destination, const char *source)
{
	char *p;

	for (p = destination; *p != '\0'; p++) {}
	for (; *source != '\0'; source++, p++) {
		*p = *source;
	}
	*p = *source;

	return destination;
}

char *strncat(char *destination, const char *source, size_t len)
{
	/* TODO: Implement strncat(). */

	return destination;
}

int strcmp(const char *str1, const char *str2)
{
	/* TODO: Implement strcmp(). */
	return -1;
}

int strncmp(const char *str1, const char *str2, size_t len)
{
	/* TODO: Implement strncmp(). */
	return -1;
}

size_t strlen(const char *str)
{
	size_t i = 0;

	for (; *str != '\0'; str++, i++)
		;

	return i;
}

char *strchr(const char *str, int c)
{
	/* TODO: Implement strchr(). */

	return NULL;
}

char *strrchr(const char *str, int c)
{
	/* TODO: Implement strrchr(). */

	return NULL;
}

char *strstr(const char *str1, const char *str2)
{
	/* TODO: Implement strstr(). */
	return NULL;
}

char *strrstr(const char *str1, const char *str2)
{
	/* TODO: Implement strrstr(). */
	return NULL;
}

void *memcpy(void *destination, const void *source, size_t num)
{
	/* TODO: Implement memcpy(). */

	return destination;
}

void *memmove(void *destination, const void *source, size_t num)
{
	/* TODO: Implement memmove(). */

	return destination;
}

int memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	/* TODO: Implement memcmp(). */
	return -1;
}

void *memset(void *source, int value, size_t num)
{
	/* TODO: Implement memset(). */

	return source;
}
