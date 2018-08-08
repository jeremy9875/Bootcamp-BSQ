/*
** array_1d_contains_value.c for array_1d_contains_value.c in /home/jeremy.elkaim/Bootcamp_2016_BSQ_J01_P01
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Dec 19 18:51:30 2016 jeremy elkaim
** Last update Mon Dec 19 18:52:29 2016 jeremy elkaim
*/

//#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	array_1d_contains_value(int *arr, int size, int value)
{
  int	i;

  i = 0;
  while (arr[i] < size)
    {
      if (arr[i] == value)
	{
	  return (1);
	}
      else
	{
	  if (i == size)
	    {
	      return (0);
	    }
	}
      i = i + 1;
    }
}
