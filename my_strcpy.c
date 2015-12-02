/*
** my_strcpy.c for  in /home/vanhem_n/C/Jour_04/my_strcpy
** 
** Made by VAN HEMELRYCK Nathan
** Login   <vanhem_n@etna-alternance.net>
** 
** Started on  Thu Oct  1 10:24:09 2015 VAN HEMELRYCK Nathan
** Last update Sat Oct  3 16:55:09 2015 VAN HEMELRYCK Nathan
*/

char    *my_strcpy(char *dest, char *src)
{
  int   c1;
  
  c1 = 0;
  while (src[c1] != '\0')
    {
      dest[c1] = src[c1];
      ++c1;
    }
  return (dest);
}
