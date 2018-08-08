/*
** array_1d_increment_subset.c for array_1d_increment_subset in /home/jeremy.elkaim/Bootcamp_2016_BSQ_J01_P03
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Dec 19 15:14:24 2016 jeremy elkaim
** Last update Mon Dec 19 17:35:50 2016 jeremy elkaim
*/
#include <stdio.h>

int	array_1d_increment_subset(int *arr, int size, int from, int to)
{
  int	i;

  i = 0;
  while (i != size)
    {
      if (to < from)
	{
	  return (-1);
        }
      else if (i >= from)
	{
	  while (i != to)
	    {
	      arr[i] = arr[i] + 1;
	      i = i + 1;
	      printf("%d\n",arr[i]);
	    }
	  if (i == to)
	    {
	      return (0);
	    }
	}
      i = i + 1;
    }
}

/*
int	main()
{
  int	size;
  int	from;
  int	arr[size];
  int	to;

  size = 5;
  arr[0] = 5;
  arr[1] = 3;
  arr[2] = 4;
  arr[3] = 6;
  arr[4] = 6;
  from = 3;
  to = 4;
  size = 5;
  array_1d_increment_subset(arr, size, from, to);
  return (0);
}
*/
