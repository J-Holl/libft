NAME = libft.a
CC = clang
CFLAGS = -Wall -Wextra -Werror
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	  ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memccpy.c ft_memchr.c \
	  ft_memcmp.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
	  ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
	  ft_strrchr.c ft_tolower.c ft_toupper.c ft_itoa.c ft_split.c \
	  ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
	  ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c 
SRCB = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	   ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstmap.c \
	   ft_lstiter.c
OBJ = $(SRC:.c=.o)
OBJB = $(SRCB:.c=.o)

 %.o: %.c
	$(CC) -c $< $(CFLAGS)

 $(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

 all: $(NAME)

 bonus: $(OBJ) $(OBJB)
	ar rcs $(NAME) $(OBJ) $(OBJB)

 clean:
	rm -f $(OBJ) $(OBJB)

 fclean: clean
	rm -f $(NAME)

 re: fclean all

.PHONY: all bonus clean fclean re
