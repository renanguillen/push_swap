NAME = push_swap

PATH_INCS = ./includes/
PATH_LIBS = ./libft/
PATH_OBJS = ./objects/
PATH_SRCS = ./sources/

SRCS = $(addprefix $(PATH_SRCS),\
		ft_error.c\
		ft_first_send.c\
		ft_check_lower_cost.c\
		ft_execute_swap.c\
		ft_get_costs.c\
		ft_get_index.c\
		ft_get_position.c\
		ft_get_stack.c\
		ft_get_target.c\
		ft_free_memory.c\
		ft_input_check.c\
		ft_is_sorted.c\
		ft_print_stack.c\
		ft_stacklen.c\
		ft_push_swap.c)\
		$(addprefix $(PATH_SRCS)operations/,\
		ft_push.c\
		ft_rotate.c\
		ft_rrotate.c\
		ft_swap.c)\
		$(addprefix $(PATH_SRCS)algorithms/,\
		ft_define_swap.c\
		ft_swap_more.c\
		ft_swap_three.c\
		ft_swap_two.c)

OBJS = $(patsubst $(PATH_SRCS)%.c, $(PATH_OBJS)%.o, $(SRCS))

LIBFT = $(PATH_LIBS)libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -ggdb
IFLAGS = -I $(PATH_INCS)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(IFLAGS) -o $(NAME) $(OBJS) $(LIBFT)

$(PATH_OBJS)%.o: $(PATH_SRCS)%.c
	@mkdir -p $(PATH_OBJS)
	@mkdir -p $(PATH_OBJS)operations/
	@mkdir -p $(PATH_OBJS)algorithms/
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
	@clear
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