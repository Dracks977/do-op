/*
** my_str_to_wordtab.c for  in /home/vanhem_n/C/Jour_07/my_str_to_wordtab
** 
** Made by VAN HEMELRYCK Nathan
** Login   <vanhem_n@etna-alternance.net>
** 
** Started on  Mon Oct  5 13:07:51 2015 VAN HEMELRYCK Nathan
** Last update Mon Oct  5 16:36:11 2015 VAN HEMELRYCK Nathan
*/

#include <stdlib.h>

char    *my_strcpy(char *dest, char *src);

int	my_strlen(char *str);

char	*my_strdup(char *str);

int	nbm(char *str)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
	  || (str[i] >= '0' && str[i] <= '9'))
	{
	  ++j;
	  while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
		 || (str[i] >= '0' && str[i] <= '9'))
	    ++i;
	}
      ++i;
    }
  return (j);
}

int	nbl(char *str, int *i)
{
  int j;
  
  j = 0;
  while ((str[*i] >= 'a' && str[*i] <= 'z') || (str[*i] >= 'A' && str[*i] <= 'Z')
	 || (str[*i] >= '0' && str[*i] <= '9'))
    {
      ++j;
      ++*i;
    }
  return (j);
}

char	 **my_str_to_wordtab(char *str)
{
  int	i;
  int	j;
  int	m;
  char	**tab;

  i = 0;
  j = 0;
  m = nbm(my_strdup(str));
  tab = (char **)malloc(sizeof(char *) * m);
  while (str[i] != '\0' && m > 0)
    {
      if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
	{
	  tab[j] = my_strdup(str + i);
	  tab[j][nbl(str, &i)] = '\0';
	  ++j;
	  --m;
	}
      ++i;
    }
  tab[nbm(my_strdup(str))] = '\0';
  return (tab);
}
