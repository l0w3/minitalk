# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alrodri2 <alrodri2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 14:53:27 by alrodri2          #+#    #+#              #
#    Updated: 2023/07/01 16:17:49 by alrodri2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 	libft.a

OBJ_DIR	= ./obj/

SRC 	= 	ft_isalnum.c ft_bzero.c  ft_isalpha.c  ft_isascii.c  ft_isdigit.c  ft_isdigit.c \
			ft_isprint.c  ft_memcpy.c  ft_strchr.c  ft_strlen.c  ft_strncmp.c  ft_strrchr.c \
			ft_tolower.c ft_toupper.c ft_memset.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
			ft_calloc.c ft_strdup.c ft_strlcpy.c ft_strlcat.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c \
			ft_putchar_fd.c ft_substr.c ft_strjoin.c ft_itoa.c ft_split.c ft_strtrim.c ft_strmapi.c ft_striteri.c \
			ft_memmove.c

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

