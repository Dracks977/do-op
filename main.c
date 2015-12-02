/*
** main.c for  in /home/vanhem_n/C/Jour_08/do-op
** 
** Made by VAN HEMELRYCK Nathan
** Login   <vanhem_n@etna-alternance.net>
** 
** Started on  Tue Oct  6 15:13:43 2015 VAN HEMELRYCK Nathan
** Last update Tue Oct  6 21:00:08 2015 VAN HEMELRYCK Nathan
*/

#include <stdlib.h>

typedef struct s_op
{
  char  op;
  int   (*pf)(int, int);
}	a_op;

void	my_putstr(char *str);

int     my_getnbr(char *str);

void    my_put_nbr(int n);

int	add(int, int);

int	sou(int, int);

int	mult(int, int);

int	mdiv(int, int);

int	isnumber(char *str)
{
  int  i;

  i = 0;
  while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
    i++;
  if (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9')
	{
	  return (-1);
	}
      else
	return (0);
    }
  return (-1);
}

void	do_op(char *opr1, char op, char *opr2)
{
  int	i;
  a_op  *do_op;

  do_op = malloc(sizeof(a_op) * 5);
  i = 0;
  do_op[0].op = '+';
  do_op[0].pf = &add;
  do_op[1].op = '-';
  do_op[1].pf = &sou;
  do_op[2].op = '*';
  do_op[2].pf = &mult;
  do_op[3].op = '/';
  do_op[3].pf = &mdiv;
  do_op[4].op = '\0';
  do_op[4].pf = NULL;
  do_op[5].op = '%';
  do_op[5].pf = &mdiv;
  while (do_op[i].op != '\0')
    {
      if (do_op[i].op == op)
	{
	  if (my_getnbr(opr2) == 0 && op == '/')
	    {
	      my_putstr("Va t'acheter des doigts\n");
	    }
	  else
	    {
	  my_put_nbr(do_op[i].pf(my_getnbr(opr1), my_getnbr(opr2)));
	  my_putstr("\n");
	    }
	}
      ++i;
    }
}
int	main(int ac, char **ag)
{
  if (ac != 4)
    return 0;
  if (isnumber(ag[1]) != 0 || isnumber(ag[3]) != 0)
    {
      my_putstr("Syntax Error\n");
      return (0);
    }
  else
    do_op(ag[1], ag[2][0], ag[3]);
  return (0);
}
