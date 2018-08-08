/*
** array_2d_is_crossed.c for array_2d_is_crossed in /home/jeremy.elkaim/Bootcamp_2016_BSQ_J01_P03
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Dec 19 18:10:11 2016 jeremy elkaim
** Last update Mon Dec 19 18:56:11 2016 jeremy elkaim
*/

int	array_2d_is_crossed(char **ar, int size)
{
  int	i;
  int	o;

  o = 0;
  i = 0;
  while (ar[i] != '\0')
    {
      if (ar[i][o] == 'X' && ar[i + 1][o + 1] == 'X'
	  || ar[i][o] == 'X' && ar[i - 1][o + 1] == 'X')
	{
	  return (1);
	}
      else
	return (0);
      i = i + 1;
    }
  return (0);
}
