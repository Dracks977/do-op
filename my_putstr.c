/*
** my_putstr.c for  in /home/vanhem_n/C/Jour_03/my_putstr
** 
** Made by VAN HEMELRYCK Nathan
** Login   <vanhem_n@etna-alternance.net>
** 
** Started on  Wed Sep 30 09:21:05 2015 VAN HEMELRYCK Nathan
** Last update Wed Sep 30 09:21:08 2015 VAN HEMELRYCK Nathan
*/

void	my_putchar(char c);

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (*(str + i) != '\0')
    {
      my_putchar(*(str + i));
      ++i;
    }
}
