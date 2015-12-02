/*
** my_put_nbr.c for  in /home/vanhem_n/C/Jour_05/my_put_nbr
** 
** Made by VAN HEMELRYCK Nathan
** Login   <vanhem_n@etna-alternance.net>
** 
** Started on  Fri Oct  2 17:06:53 2015 VAN HEMELRYCK Nathan
** Last update Sat Oct  3 16:59:12 2015 VAN HEMELRYCK Nathan
*/
#include <unistd.h>

void	my_putchar(char c);

void	my_putstr(char *str);

void    my_put_nbr(int n)
{
  if (n == -2147483648)
    {
      my_putstr("-2147483648");
    }
  else
    {
      if (n < 0)
	{
	  my_putchar('-');
	  n = -n;
	}
      if (n > 9)
	{
	my_put_nbr(n / 10);
	}
      my_putchar((n % 10) + '0');
    }
}
