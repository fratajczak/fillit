SOURCES= src/read.c src/parser.c src/utils.c src/solver.c
OBJECTS= $(addsuffix .o, $(notdir $(basename $(SOURCES))))
NAME= fillit

all: $(NAME) 

$(NAME): $(OBJECTS)
	cd lib && make
	gcc $(OBJECTS) lib/libft.a -o fillit

$(OBJECTS): $(SOURCES)
	gcc -Wall -Wextra -Werror -g -c $(SOURCES) -I include/

clean:
	rm -f *.o
	rm -f lib/libft.a lib/*.o

fclean: clean
	rm -f fillit

re: fclean all
