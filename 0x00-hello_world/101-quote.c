#include <stdio.h>
 #include <unistd.h>
/**
 * main -print a new line with function printf and puts
 * Return: always 1
*/
int main(void)
{
	write(1, "and that price of art is useful\"- Dora Korpar,2015-10-19\n", 59);
	return (1);
}
