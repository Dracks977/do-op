/*
** my_strncat.c for  in /home/vanhem_n/C/Jour_04/my_strncat
** 

** Made by VAN HEMELRYCK Nathan
** Login   <vanhem_n@etna-alternance.net>
** 
** Started on  Thu Oct  1 20:11:07 2015 VAN HEMELRYCK Nathan
** Last update Sat Oct  3 20:44:51 2015 VAN HEMELRYCK Nathan
*/

void	my_putchar(char c);

char *my_strncat(char *str1, char *str2, int n)
{
  int   i;
  int   i2;

  i2 = 0;
  i = 0;
  while (str1[i] != '\0')
    ++i;
  while ((str2[i2] != '\0') && (i2 < n))
    {
      str1[i] = str2[i2];
      ++i;
      ++i2;
    }
  return (str1);
}
