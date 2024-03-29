NAME		=	exec

SRCS		=	main.c	\

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

OBJ_DIR		=	obj/

OBJS		=	$(addprefix $(OBJ_DIR), $(SRCS:.c=.o))

LDFLAGS		=	-L./../. -lft

RM			=	rm -rf

MKDIR		=	mkdir -p



all			:	makelib $(NAME)

makelib		:
	make -C ..

$(OBJ_DIR)%.o	:	%.c
	$(MKDIR) $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME)		:	$(OBJS)
	$(CC) $(CFLAGS) $^ $(LDFLAGS) -o $@

bonus		:	makebonus $(NAME)
	
makebonus	:
	make bonus -C ..

clean		:
	make clean -C ..
	$(RM) $(OBJ_DIR)

fclean		:	clean
	make fclean -C ..
	$(RM) $(NAME)

re			: fclean all

.PHONY		:	all clean fclean re