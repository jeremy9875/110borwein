/*
** main.c for main in /home/VSridhar78/110borwein
** 
** Made by Sridhar Vengadesan
** Login   <VSridhar78@epitech.net>
** 
** Started on  Tue Apr  4 09:40:49 2017 Sridhar Vengadesan
** Last update Wed Apr 12 09:53:16 2017 Sridhar Vengadesan
*/

#include "my.h"

double	check_positive_number(double n)
{
  if (n >= 0)
    return (n);
  else
    {
      printf("argument should be a positive number\n");
      exit(84);
    }
}

void	check_arg(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    if (str[i] >= '0' && str[i] <= '9')
      i++;
    else
      {
	printf("Error argument\n");
	exit(84);
      }
}

int	main(int ac, char **av)
{
  if (ac == 2)
    {
      check_arg(av[1]);
      borwein(check_positive_number(atof(av[1])), BORNESUP, SUBDIV);
    }
  else
    {
      printf("USAGE\n\t./110borwein n\n\n");
      printf("DESCRIPTION\n\tn\tconstant defining the integralto be computed\n");
      return (84);
    }
  return (0);
}
