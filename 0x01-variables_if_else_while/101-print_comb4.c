#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits.
 * Return: Always 0 (Succcess)
 */
int main(void)
{
        int n, m, l;

        for (n = 48; n <= 58; n++)
        {
                for (m = 49; m <= 58; m++)
		{
			for (l = 50; l < 58; l++)
                        {
                             if (m > n)
                             {
                                putchar(n);
                                putchar(m);
                                if (n != 56 || m !=57)
                                {
                                        putchar(',');
                                        putchar(' ');
                                 }
                        }
                }
        }
}
        putchar('\n');
        return (0);
}
