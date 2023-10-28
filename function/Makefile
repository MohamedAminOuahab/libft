# un makefile sert a quoi : il va servir a la compilation, il choisi quelle fichier doit recomplier si besoin

# cible : dependance
# 	commande 
# declartion des variable 
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS = -o
PROG = a.exe
LIB = libft.a
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all: $(LIB) $(PROG)

# generation des ficher point 
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# mise au point de l'archive lbtf.a
$(LIB): $(OBJ)
	ar rcs $(LIB) $^

# creation du programme principal
$(PROG): $(OBJ)
	$(CC) $(LDFLAGS) $@ $^ 

# supression des fichier objet
clean:
	rm -rf $(OBJ)

# supprime tout
fclean: clean
	rm -rf $(PROG)
	rm -rf $(LIB)

# recommence la compilation total du projet 
re: fclean all
