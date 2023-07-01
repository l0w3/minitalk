# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alrodri2 <alrodri2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/01 16:16:32 by alrodri2          #+#    #+#              #
#    Updated: 2023/07/01 16:17:10 by alrodri2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 	get_next_line.a

OBJ_DIR	= ./obj/

SRC 	= 	get_next_line.c get_next_line_utils.c

OBJS 	= 	$(addprefix $(OBJ_DIR), $(SRC:.c=.o))

DEPS	= $(addsuffix .d, $(basename $(OBJS)))
RM 		=	rm -f

MK = mkdir -p

CFLAGS 	= 	-Wall -Wextra -Werror


INCLUDE 	= -I ./

$(OBJ_DIR)%.o: %.c Makefile
	@echo "Compilando $<"
	@$(MK) $(dir $@)
	@$(CC) $(CFLAGS) -MMD $(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Montando $@"
	@ar rcs $(NAME) $(OBJS)
		

-include $(DEPS)

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
