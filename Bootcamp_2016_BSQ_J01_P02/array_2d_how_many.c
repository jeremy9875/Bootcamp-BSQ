/*
** array_2d_how_many.c for array_2d_how_many in /home/jeremy.elkaim/Bootcamp_2016_BSQ_J01_P02
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Dec 19 14:07:55 2016 jeremy elkaim
** Last update Mon Dec 19 14:38:56 2016 jeremy elkaim
*/

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
//#include <stdio.h>

int	array_2d_how_many(int **arr, int size_d1, int size_d2, int number)
{
  int	i;
  int	result;

  i = 0;
  while (arr[i] != size_d1)
    {
      if (arr[i] == number)
	{
	  result = number;
	  //	  printf("%d", result);
	  return (result);
	}
      i = i + 1;
    }
}
/*
int	main(int number)
{
  int	*arr[5] = {1, 2, 3, 4, 5};
  int	size_d1;
  int	size_d2;

  size_d1 = 5;
  size_d2 = 10;
  array_2d_how_many(arr, size_d1, size_d2, number);
  return (0);
}
*/
