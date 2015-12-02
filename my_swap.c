/*
** my_swap.c for  in /home/vanhem_n/C/Jour_03/my_swap
** 
** Made by VAN HEMELRYCK Nathan
** Login   <vanhem_n@etna-alternance.net>
** 
** Started on  Wed Sep 30 10:57:13 2015 VAN HEMELRYCK Nathan
** Last update Wed Sep 30 16:03:53 2015 VAN HEMELRYCK Nathan
*/

void	my_swap(int *a, int *b)
{
  int	sw;

  sw = *a;
  *a = *b;
  *b = sw;
}
