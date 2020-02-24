NAME=libft.a

SRCS=ft_atoi.c ft_bzero.c ft_calloc.c ft_itoa.c ft_memccpy.c ft_memmove.c ft_memset.c \
ft_putchar_fd.c ft_split.c ft_strcat.c ft_strcpy.c ft_strdup.c ft_strjoin.c ft_strlcat.c \
ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncat.c ft_strncpy.c ft_strstr.c ft_strtrim.c \
ft_substr.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c \
ft_memcmp.c ft_memchr.c ft_strchr.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c \
ft_toupper.c ft_strncpy.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
\

OBJECTS=$(SRCS:%.c=%.o)

BONUS=bonus/ft_lstnew.c bonus/ft_lstadd_back.c bonus/ft_lstadd_front.c bonus/ft_lstclear.c bonus/ft_lstdelone.c \
bonus/ft_lstiter.c bonus/ft_lstlast.c bonus/ft_lstmap.c bonus/ft_lstsize.c



BONUS_OBJ=$(BONUS:%.c=%.o)

INCLUDES=./

all: $(NAME)

$(NAME): $(OBJECTS) libft.h
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)



bonus: $(BONUS_OBJ) $(OBJECTS)
	ar rc $(NAME) $(OBJECTS) $(BONUS_OBJ)
	ranlib $(NAME)

%.o: %.c
	gcc -Wall -Wextra -Werror -c -o $@ $<
	
clean:
	/bin/rm -f $(OBJECTS) $(BONUS_OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re bonus