/*
** my_putchar.c for putchar in /home/vanhem_n/C/Jour_01/my_putchar
** 
** Made by VAN HEMELRYCK Nathan
** Login   <vanhem_n@etna-alternance.net>
** 
** Started on  Mon Sep 28 09:55:48 2015 VAN HEMELRYCK Nathan
** Last update Mon Sep 28 11:07:51 2015 VAN HEMELRYCK Nathan
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write (1, &c, 1);
}
