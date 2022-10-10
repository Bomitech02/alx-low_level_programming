#include<stdio.h>
#include<string.h>
#define N 10
int main(void)

{
	 int i;
	 int j;

/* loop through numbers from 0 to 9 */

 	 for (i = '0'; i <= '9'; i++)

	{
/* loop through numbers from 0 to 9 */
			for (j = '0'; j <= '9'; j++)
			{
/* if first number is less than the second number when combined */
				if (i < j)
				{putchar(i); /* print first number */
					putchar(j); /* print second number */
/* if first number is less than 8 or second number is less than 9 */
					if (i < '8' || j < '9')
					{putchar(44); /* print comma */
						putchar(32); /* print space */
					}
					else /* above condition is false */
					{
						putchar('\n'); /* print newline */
					}
				}
			}
	}
	return (0);
}
