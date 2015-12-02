/*
** my_strcat.c for  in /home/vanhem_n/C/Jour_04/my_strcat
** 
** Made by VAN HEMELRYCK Nathan
** Login   <vanhem_n@etna-alternance.net>
** 
** Started on  Thu Oct  1 20:06:12 2015 VAN HEMELRYCK Nathan
** Last update Thu Oct  1 20:08:35 2015 VAN HEMELRYCK Nathan
*/

char	*my_strcat(char *str1, char *str2)
{
  int	i;
  int	i2;

  i2 = 0;
  i = 0;
  while (str1[i] != '\0')
    {
      ++i;
    }
  while (str2[i2] != '\0')
    {
      str1[i] = str2[i2];
      ++i;
      ++i2;
    }
  return (str1);
}
