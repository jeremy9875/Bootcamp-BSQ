/*
** array_1d_swap_two_values.c for array_1d_swap_two_values in /home/jeremy.elkaim/Bootcamp_2016_BSQ_J01_P02
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Dec 19 14:27:58 2016 jeremy elkaim
** Last update Mon Dec 19 14:39:11 2016 jeremy elkaim
*/

int	array_1d_swap_two_value(int *arr, int size, int index_a, int index_b)
{
  int	i;
  int	index_c;

  i = 0;
  while (arr[i] <= size)
    {
      arr[index_c] = arr[index_a];
      arr[index_a] = arr[index_b];
      arr[index_b] = arr[index_c];
      i = i + 1;
    }
  return (0);
}
/*
int	main(int index_a, int index_b)
{
  int	arr[5] = {1, 2, 3, 4, 5};
  int	size;

  size = 5;
  array_1d_swap_two_value(arr, size, index_a, index_b);
  return (0);
}
*/
