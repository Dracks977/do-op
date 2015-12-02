/*
** my_strncmp.c for  in /home/vanhem_n/C/Jour_04/my_strncmp
** 
** Made by VAN HEMELRYCK Nathan
** Login   <vanhem_n@etna-alternance.net>
** 
** Started on  Thu Oct  1 17:36:43 2015 VAN HEMELRYCK Nathan
** Last update Thu Oct  1 18:37:14 2015 VAN HEMELRYCK Nathan
*/

int	my_strncmp(char *s1, char *s2, int n)
{   
  int	i;
  
  i= 0;
  while ((s1[i] != '\0') && (s2[i] != '\0') && (i < n))
    {
      if (s1[i] < s2[i])
	return (-1);
      if (s1[i] > s2[i])
	return (1);
      i++;
    }
  /* idem que sur le precedent si chaine differente bugs sans ca */
  if (s1[i] < s2[i])
    return (-1);
  if (s1[i] > s2[i])
    return (1);
  return (0);
}
