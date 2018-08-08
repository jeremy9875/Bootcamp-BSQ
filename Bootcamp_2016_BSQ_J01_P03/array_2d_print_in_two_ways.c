/*
** array_2d_print_in_two_ways.c for array_2d_print_in_two_ways in /home/jeremy.elkaim/Bootcamp_2016_BSQ_J01_P03
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Dec 19 16:26:42 2016 jeremy elkaim
** Last update Mon Dec 19 18:06:55 2016 jeremy elkaim
*/
#include <stdlib.h>
#include <unistd.h>

void	my_putchar(char c)
{
  write (1, &c, 1);
}

int	array_2d_print_in_two_ways(char **arr, int size_d1,int size_d2)
{
  int	i;
  int	o;

  i = 0;
  o = 0;
  while (arr[i] != '\0')
    {
      while (arr[i][o] != '\0')
	{
	  size_d2 = o;
	  my_putchar(arr[i][o]);
	  o = o + 1;
	}
      my_putchar('\n');
      size_d1 = i;
      i = i + 1;
    }
  while (i != 0)
    {
      while (arr[i] != '\n' || i != 0)
	{
          my_putchar(arr[o][i]);
          o = o + 1;
	}
      my_putchar('\n');
      i = i + 1;
    }
  return (0);
}
