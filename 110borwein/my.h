/*
** my.h for my.h in /home/VSridhar78/110borwein
** 
** Made by Sridhar Vengadesan
** Login   <VSridhar78@epitech.net>
** 
** Started on  Tue Apr  4 09:53:09 2017 Sridhar Vengadesan
** Last update Wed Apr 12 10:23:11 2017 Sridhar Vengadesan
*/

#ifndef MY_H_
# define MY_H_

# include <math.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define BORNESUP 5000
# define SUBDIV 10000

void	check_arg(char *);
double	check_positive_number(double);
int	main(int, char **);
void	display(double, double, double, int);
void	borwein(double, double, double);

#endif /* !MY_H_ */
