NAME = libft.a

CC = clang

CFLAGS += -std=c89 -pedantic -Wall -Wextra -Wvla -Wconversion -Wshadow -Wdouble-promotion
CFLAGS += -Werror -Werror=format-security -Werror=implicit-function-declaration

SRCS = ft_strlen.c\
	   ft_tolower.c\
	   ft_toupper.c\
	   ft_atoi.c\
	   ft_bzero.c\
	   ft_memset.c\
	   ft_calloc.c\
	   ft_isalnum.c\
	   ft_isalpha.c\
	   ft_isascii.c\


OBJS = $(SRCS:.c=.o)

all: $(NAME)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

$(NAME):
	@$(CC) $(CFLAGS) -c $(SRCS)
	@ar rcs $@ $(OBJS)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)


re: fclean all

test:
	@$(CC) -lm $(CFLAGS) main.c $(NAME) && ./a.out

#  DEBUG:
#  clang -g3 -fsanitize=address -std=c89 -Wall -Wextra -Wvla -Wconversion
# 	-pedantic
# 	-Werror -Werror=format-security -Werror=implicit-function-declaration 