/*
** borwein.c for borwein in /home/VSridhar78/110borwein
** 
** Made by Sridhar Vengadesan
** Login   <VSridhar78@epitech.net>
** 
** Started on  Tue Apr  4 09:42:35 2017 Sridhar Vengadesan
** Last update Wed Apr 12 10:30:33 2017 Sridhar Vengadesan
*/

#include <math.h>
#include "my.h"

void	display(double i, double j, double n, int opt)
{
  if (opt == 1)
    printf("Rectangles:\n");
  else if (opt == 2)
    printf("Trapezoids:\n");
  else if (opt == 3)
    printf("Simpson:\n");
  else
    exit(84);
  if (opt == 3)
    printf("I%.0f = %.10f\ndiff = %.10f\n", n, i, j);
  else
    printf("I%.0f = %.10f\ndiff = %.10f\n\n", n, i, j);
}

double	calc_integrate(double n, double x)
{
  double	rslt;
  int		k;

  rslt = 1;
  k = 0;
  while (k <= n)
    {
      if (x != 0)
	rslt = rslt * (sin(x / ((2 * k) + 1)) / (x / ((2 * k) + 1)));
      k = k + 1;
    }
  return (rslt);
}

void	rectangle(double n, double bornesup, double subdiv)
{
  double	a;
  double	b;
  double	i;
  double	h;
  double	rslt;

  a = 0;
  b = bornesup;
  i = a;
  h = (b - a) / subdiv;
  rslt = 0;
  while (i < b)
    {
      rslt = rslt + calc_integrate(n, (a + i * h));
      i++;
    }
  rslt = rslt * h;
  display(rslt, rslt - (M_PI / 2), n, 1);
}

void	trapeze(double n, double bornesup, double subdiv)
{
  double	a;
  double	b;
  double	i;
  double	h;
  double	rslt;

  a = 0;
  b = bornesup;
  i = 1;
  h = (b - a) / subdiv;
  rslt = 0;
  while (i < b)
    {
      rslt = rslt + calc_integrate(n, (a + i * h));
      i++;
    }
  rslt = ((rslt * 2) + calc_integrate(n, a) + calc_integrate(n, b)) * ((b - a) / (2 * subdiv));
  display(rslt, rslt - (M_PI / 2), n, 2);
}

void	simpson(double n, double bornesup, double subdiv)
{
  double	a;
  double	b;
  double	i;
  double	h;
  double	rslt;
  double	res;
  double	final;

  a = 0;
  b = bornesup;
  i = a;
  h = (b - a) / subdiv;
  rslt = 0;
  res = 0;
  while (i < b)
    {
      rslt = rslt + calc_integrate(n, (a + i * h) + (h / 2));
      i++;
    }
  i = 1;
  while (i < b)
    {
      res = res + calc_integrate(n, (a + i * h));
      i++;
    }
  final = ((rslt * 4) + (res * 2) + calc_integrate(n, a) + calc_integrate(n, b)) * ((b - a) / (6 * subdiv));
  display(final, final - (M_PI / 2), n, 3);
}

void	borwein(double n, double bornesup, double subdiv)
{
  rectangle(n, bornesup, subdiv);
  trapeze(n, bornesup, subdiv);
  simpson(n, bornesup, subdiv);
}
