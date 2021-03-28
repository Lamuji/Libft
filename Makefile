NAME=libft.a
CC =gcc -Wall -Wextra -Werror 
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_is_print.c
		ft_memccmpy.c ft_memchr.c ft_memcmp.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c
		ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_substr.c
		ft_tolower.c ft_toupper.c ft_strjoin.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o : %.C
	$(CC) -o $@ -c $<

$(NAME) : $(OBJ)
	$(CC) -o $@ $^

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all