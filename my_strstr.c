/*
** my_strstr.c for  in /home/vanhem_n/C/Jour_04/my_strstr
** 
** Made by VAN HEMELRYCK Nathan
** Login   <vanhem_n@etna-alternance.net>
** 
** Started on  Fri Oct  2 14:26:36 2015 VAN HEMELRYCK Nathan
** Last update Sat Oct  3 21:39:50 2015 VAN HEMELRYCK Nathan
*/

#include <unistd.h>

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	bre;

  i = 0;
  bre = 0;
  while (str[i] != '\0')
    {
      while (to_find[bre] != '\0')
	{
	  if (str[i] == to_find[bre])
	    {
	      return(str + i);
	    }
	  else
	    ++bre;
	}
      ++i;
      bre = 0;
    }
  return ("null");
}
