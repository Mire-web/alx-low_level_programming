#ifndef VAR_H
#define VAR_H


/**
 * format_t - format parse
 *
 */

typedef struct parse_format
{
	char c;
	int i;
	float f;
	char *s;
} format_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
