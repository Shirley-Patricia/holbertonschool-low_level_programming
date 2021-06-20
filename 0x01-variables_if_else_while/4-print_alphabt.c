#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int m;
for (m = 'a'; m <= 'z'; m++)
{
if (m != 'e' && m != 'q')
putchar(m);
}
putchar('\n');
return (0);
}
