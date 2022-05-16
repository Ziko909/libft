
define Intro
				#      # #####  ###### ##### 
 				#      # #    # #        #   
 				#      # #####  #####    #   
 				#      # #    # #        #   
 				#      # #    # #        #   
 				###### # #####  #        #


endef
export
SRC = Mandatory/ft_isalpha.c Mandatory/ft_memchr.c Mandatory/ft_strchr.c Mandatory/ft_strlen.c Mandatory/ft_tolower.c Mandatory/ft_atoi.c Mandatory/ft_isascii.c Mandatory/ft_memcmp.c Mandatory/ft_strdup.c  Mandatory/ft_strncmp.c  Mandatory/ft_toupper.c Mandatory/ft_bzero.c Mandatory/ft_isdigit.c Mandatory/ft_memcpy.c \
	  Mandatory/ft_strlcat.c Mandatory/ft_strnstr.c Mandatory/ft_isalnum.c Mandatory/ft_isprint.c Mandatory/ft_memset.c Mandatory/ft_strlcpy.c Mandatory/ft_strrchr.c Mandatory/ft_memmove.c Mandatory/ft_calloc.c Mandatory/ft_substr.c Mandatory/ft_strjoin.c Mandatory/ft_putchar_fd.c Mandatory/ft_putstr_fd.c \
	  Mandatory/ft_putnbr_fd.c Mandatory/ft_strtrim.c Mandatory/ft_putendl_fd.c Mandatory/ft_striteri.c Mandatory/ft_strmapi.c Mandatory/ft_split.c Mandatory/ft_itoa.c

OBJ = $(SRC:.c=.o)

SRCB = Bonus/ft_lstnew.c  Bonus/ft_lstsize.c Bonus/ft_lstadd_back.c Bonus/ft_lstlast.c Bonus/ft_lstadd_front.c Bonus/ft_lstdelone.c Bonus/ft_lstclear.c Bonus/ft_lstiter.c Bonus/ft_lstmap.c

OBJB = $(SRCB:.c=.o)

CC = gcc

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

HEADER = Include/libft.h

all :  Intro $(NAME)

%.o : %.c
	@$(CC) $(CFLAGS) -o $@ -c $<
	@echo "\x1b[35m   The Object File Of $< Is Created \x1b[0m"

$(NAME) : $(OBJ) $(HEADER)
	@ar -rc $(NAME) $(OBJ)

clean :
	@rm -f $(OBJ) $(OBJB)

fclean : clean
	@rm -f $(NAME) 

re : fclean all

bonus : $(OBJB)
	@ar -rc $(NAME) $(OBJB)

Intro :
	@echo "\x1b[32m $$Intro \x1b[0m"
