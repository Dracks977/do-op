/*
** my_strlen.c for  in /home/vanhem_n/C/Jour_03/my_strlen
** 
** Made by VAN HEMELRYCK Nathan
** Login   <vanhem_n@etna-alternance.net>
** 
** Started on  Wed Sep 30 09:51:21 2015 VAN HEMELRYCK Nathan
** Last update Wed Sep 30 09:54:53 2015 VAN HEMELRYCK Nathan
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (*(str + i) != '\0')
    {
      ++i;
    }
  return (i);
}
