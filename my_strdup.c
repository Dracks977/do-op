/*
** my_strdup.c for  in /home/vanhem_n/C/Jour_07/my_strdup
** 
** Made by VAN HEMELRYCK Nathan
** Login   <vanhem_n@etna-alternance.net>
** 
** Started on  Mon Oct  5 11:47:52 2015 VAN HEMELRYCK Nathan
** Last update Mon Oct  5 16:35:31 2015 VAN HEMELRYCK Nathan
*/

#include <stdlib.h>

char    *my_strcpy(char *dest, char *src);

int	my_strlen(char *str);

char	*my_strdup(char *str)
{
  int	o;
  char	*str2;

  o = my_strlen(str);
  str2 = malloc(o);
  my_strcpy(str2, str);
  return (str2);
}
