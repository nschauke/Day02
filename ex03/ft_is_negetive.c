#include <unistd.h>

void ft_putchar(char c) 
{
	write(1, &c, 1);}


void ft_is_negetive(int c)
{



	if (c < 0)

	{ ft_putchar ('N');
	}

	                                              
	 if  (c >= 0)
	{
		ft_putchar ('P');
	}
}
	int main(void)
	{
	ft_is_negetive(-1);
		return 0;
}



