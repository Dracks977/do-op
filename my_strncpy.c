/*
** my_strncpy.c for  in /home/vanhem_n/C/Jour_04/my_strncpy
** 
** Made by VAN HEMELRYCK Nathan
** Login   <vanhem_n@etna-alternance.net>
** 
** Started on  Thu Oct  1 16:07:06 2015 VAN HEMELRYCK Nathan
** Last update Thu Oct  1 18:03:32 2015 VAN HEMELRYCK Nathan
*/

char    *my_strncpy(char *dest, char *src, int n)
{
  int   cl;

  cl = 0;
  while (src[cl] != '\0' && cl < n)
    {
      dest[cl] = src[cl];
      ++cl;
    }
  if (!src[n - 1])
    {
      dest[cl] = '\0';
    }
  return (dest);
}
