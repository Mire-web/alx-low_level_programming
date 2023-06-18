#include <stdio.h>
#include <stdlib.h>

/**
 * rev_string - return string reversed
 * @s: pointer
 */

void rev_string(char *s)
{
char rev = s[0];
int counter = 0;
int i;

while (s[counter] != '\0')
counter++;
for (i = 0; i < counter; i++)
{
counter--;
rev = s[i];
s[i] = s[counter];
s[counter] = rev;
}
}

/**
 * my_itoa - convert integer to string
 *
 * @num: Number to convert
 * @str: array to store converted int
 * @radix: Base of conversion
 */

void my_itoa(int num, char *str, int radix)
{
	int i = 0;

	if (num == 0)
	{
		str[i] = '0';
		i++;
		str[i] = '\0';
	}
	while (num != 0)
	{
		int remainder = num % radix;

		str[i] = (remainder > 9) ? (remainder - 10) + 'a' : remainder + '0';
		i++;
		num /= radix;
	}
	str[i] = '\0';
	rev_string(str);
}

int main()
{
	int i, j, fwd = 0, bwd = 0, pal = 0;
	char str[4];

	for (i = 100; i < 1000; i++)
	{
		for (j = 100; j < 1000; j++)
		{
			fwd = j * i;
			my_itoa(j * i, str, 10);
			rev_string(str);
			bwd = atoi(str);
			if (fwd == bwd && fwd > pal)
			pal = fwd;
		}
	}
	printf("%d\n", pal);
	return (0);
}