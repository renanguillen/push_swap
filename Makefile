NAME = push_swap

PATH_INCS = ./includes/
PATH_LIBS = ./libft/
PATH_OBJS = ./objects/
PATH_SRCS = ./sources/

SRCS = $(addprefix $(PATH_SRCS),\
		ft_push_swap.c\
		ft_get_index.c\
		ft_get_stack.c\
		ft_input_check.c\
		ft_error.c)\
		$(addprefix $(PATH_SRCS)operations/,\
		ft_swap.c)

OBJS = $(patsubst $(PATH_SRCS)%.c, $(PATH_OBJS)%.o, $(SRCS))

LIBFT = $(PATH_LIBS)libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -ggdb
IFLAGS = -I $(PATH_INCS)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(IFLAGS) -o $(NAME) $(OBJS) $(LIBFT)

$(PATH_OBJS)%.o: $(PATH_SRCS)%.c
	@mkdir -p $(PATH_OBJS)
	@mkdir -p $(PATH_OBJS)operations/
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(LIBFT):
	@make -C $(PATH_LIBS)

clean:
	@rm -rf $(PATH_OBJS)

fclean: clean
	@rm $(NAME)
	@make fclean -C $(PATH_LIBS)

re: fclean all

n:
	@clear
	@norminette ./sources ./includes

git:
	@git status
	@sleep 1 && echo 5 && sleep 1 && echo 4 && sleep 1 && echo 3 && sleep 1 && echo 2 && sleep 1 && echo 1 && sleep 2
	@git add .
	@git commit -m 'Automatic commit via Makefile'
	@git push
	@clear
	@git status

vg:
	@clear
	@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./push_swap 12 135 14
	@rm vgcore.*

PHONY: all clean fclean re n git