#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int d;
int i;
	for (d = '0'; d < '9'; d++)
	{
		for (i='0'; i <= '9';)
		{	
		       i++;	
			if(i==10)
			{	
				putchar(d + '1');
				putchar('0');
				putchar(',');
			}
			else
			{
				putchar(d);
				putchar(i);
				putchar(',');		
			}		
		}

		
	}
	putchar('\n');
return (0);
}
