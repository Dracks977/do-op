/*
** my_getnbr.c for  in /home/vanhem_n/C/Jour_05/my_getnbr
** 
** Made by VAN HEMELRYCK Nathan
** Login   <vanhem_n@etna-alternance.net>
** 
** Started on  Fri Oct  2 17:47:41 2015 VAN HEMELRYCK Nathan
** Last update Sat Oct  3 16:56:59 2015 VAN HEMELRYCK Nathan
*/

#include <unistd.h>

void	my_putchar(char c);

int	my_strlen(char *str);

int     my_getnbr(char *str)
{
  int cent;
  int tab;
  int fin;

  fin = my_strlen(str);
  cent = 1;
  tab = 0;
  while (fin >= 0)
    {
      if ((str[fin] >= '0') && (str[fin] <= '9'))
	{
	  tab = tab + ((str[fin] - 48)*cent);
	  cent = cent*10;
	}
      else if (str[fin] == '-')
	tab = -tab;
      else if (str[fin] == '+')
	tab = (tab * 1);
      --fin;
    }
  return (tab);
}
