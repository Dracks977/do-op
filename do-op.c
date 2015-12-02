/*
** do-op.c for  in /home/vanhem_n/C/Jour_08/do-op
** 
** Made by VAN HEMELRYCK Nathan
** Login   <vanhem_n@etna-alternance.net>
** 
** Started on  Tue Oct  6 15:05:04 2015 VAN HEMELRYCK Nathan
** Last update Tue Oct  6 20:59:28 2015 VAN HEMELRYCK Nathan
*/

void	my_putstr(char *str);

int	add(int a, int b)
{
  return (a + b);
}

int	sou(int c, int d)
{
  return (c - d);
}

int	mult(int e, int f)
{
  return (e * f);
}

int	mdiv(int g, int h)
{
  if (h == 0)
  {
    return(-1);
  }
  return (g / h);
}
