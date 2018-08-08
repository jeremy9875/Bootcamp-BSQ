/*
** array_1d_sum.c for array_1d_sum in /home/jeremy.elkaim/Bootcamp_2016_BSQ_J01_P01
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Dec 19 18:52:46 2016 jeremy elkaim
** Last update Mon Dec 19 18:52:52 2016 jeremy elkaim
*/

#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int	array_1d_sum(int *arr, int size)
{
  int	result;
  int	i;
  int	o;

  i = 1;
  while (i < size)
    {
      arr[0] = arr[0] + arr[i];
      i = i + 1;
    }
  result = arr[0];
  return (result);
}
