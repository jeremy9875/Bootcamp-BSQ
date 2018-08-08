/*
** array_1d_get_value_at.c for array_1d_get_value_at in /home/jeremy.elkaim/Bootcamp_2016_BSQ_J01_P01
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Dec 19 18:52:08 2016 jeremy elkaim
** Last update Mon Dec 19 18:52:19 2016 jeremy elkaim
*/

/*#include <stdio.h>

int	main()
{
  int	arr[] = {1, 2, 3, 4, 5};
  int	size;
  int	index;
  int	result;

  size = 5;
  index = 6;
  result = array_1d_get_value_at(arr, size, index);
  return (0);
  }*/

int	array_1d_get_value_at(int *arr, int size, int index)
{
  int	i;

  i = 0;
  while (arr[i] < size)
    {
      if (index > 0 && index <= size)
	{
	  printf("W");
	  return (arr[index]);
	}
      else if (i == size)
	{
	  printf("L");
	  return (-1);
	}
      i = i + 1;
    }
}
