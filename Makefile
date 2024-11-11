SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c \
       ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
       ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c \
       ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
       ft_strrchr.c ft_tolower.c ft_toupper.c ft_memcmp.c \
       ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c \
		 ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		 ft_putstr_fd.c ft_putendl_fd.c ft_split.c ft_putnbr_fd.c
		 

SRCB = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c \
          ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstdelone_bonus.c \
          ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)
OBJB = $(SRCB:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror 
AR = ar cr
FRM = rm -rf
NAME = libft.a
HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

bonus: $(OBJB)
	$(AR) $(NAME) $(OBJB)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(FRM) $(OBJ) $(OBJB)

fclean: clean
	$(FRM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re

