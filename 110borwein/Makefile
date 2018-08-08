##
## Makefile for Makefile in /home/VSridhar78/110borwein
## 
## Made by Sridhar Vengadesan
## Login   <VSridhar78@epitech.net>
## 
## Started on  Tue Apr  4 09:52:04 2017 Sridhar Vengadesan
## Last update Wed Apr 12 09:23:14 2017 jeremy elkaim
##

NAME	=	110borwein

SRC	=	main.c		\
		borwein.c	\

OBJ	=	$(SRC:.c=.o)

CC	=	cc

RM	=	rm -vf

TMP	=	$(SRC:.c=.c~)

CFLAGS	+=	-Wextra -Wall

CFLAGS	+=	-I . -I includes/

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) -lm

clean:
		$(RM) $(OBJ) $(TMP)

fclean:		clean
		$(RM) $(NAME)

re: 		fclean all
