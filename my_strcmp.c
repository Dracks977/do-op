/*
** my_strcmp.c for  in /home/vanhem_n/C/Jour_04/my_strcmp
** 
** Made by VAN HEMELRYCK Nathan
** Login   <vanhem_n@etna-alternance.net>
** 
** Started on  Thu Oct  1 16:17:56 2015 VAN HEMELRYCK Nathan
** Last update Thu Oct  1 18:33:53 2015 VAN HEMELRYCK Nathan
*/

int	my_strcmp(char *s1, char *s2)
{   
  int	i;
  
  i= 0;
  while ((s1[i] != '\0') && (s2[i] != '\0'))
    {
      if (s1[i] < s2[i])
       	  return (-1);
      if (s1[i] > s2[i])
	  return (1);
      i++;
    }
  /* double if sinon quand chaine differente alors bug */
  if (s1[i] < s2[i])
    return (-1);
  if (s1[i] > s2[i])
    return (1);
  return (0);
}
