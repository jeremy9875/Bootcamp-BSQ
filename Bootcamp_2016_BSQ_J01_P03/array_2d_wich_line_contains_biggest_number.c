/*
** array_2d_wich_line_contains_biggest_number.c for array_2d_wich_line_contains_biggest_number in /home/jeremy.elkaim/Bootcamp_2016_BSQ_J01_P03
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Dec 19 15:58:49 2016 jeremy elkaim
** Last update Mon Dec 19 16:25:31 2016 jeremy elkaim
*/

int	array_2d_wich_line_contains_biggest_number(int **arr, int size_d1, int size_d2)
{
  int	i;
  int	o;
  int	highnb;

  i = 0;
  o = 1;
  while (i != size_d1)
    {
      while (o != size_d2)
	{
	  highnb = arr[0][0];
	  if (arr[i][o] > i)
	    {
	      highnb = arr[i][o];
	      o = o + 1;
	    }
	}
      i = i + 1;
    }
  return (arr[i]);
}
/*
int	main()
{
  int	arr[2][2];
  int	size_d1;
  int	size_d2;

  size_d1 = 2;
  size_d2 = 2;
  arr[0][0] = 3;
  arr[0][1] = 4;
  arr[1][0] = 4;
  arr[1][1] = 1;
  arr[1][2] = 8;
  arr[2][0] = 3;
  arr[2][1] = 1;
  arr[2][2] = 2;
}
*/
