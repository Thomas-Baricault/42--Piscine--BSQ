NAME = bsq

CFILES = main.c \
	ft_find_square.c \
	ft_map_draw_square.c \
	ft_map_parse.c \
	ft_map_print.c \
	ft_read_fd.c \
	ft_run_file.c \
	ft_run_files.c \
	ft_run_map.c \
	ft_str_dup.c \
	ft_str_len.c \
	ft_str_print.c \
	ft_str_push.c \
	ft_str_tab_free.c \
	ft_str_tab_push.c
SRCS = $(addprefix src/, $(CFILES))
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	cc -Wall -Wextra -Werror -Iinclude $(OBJS) -o $(NAME)

%.o: %.c
	cc -Wall -Wextra -Werror -Iinclude -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
