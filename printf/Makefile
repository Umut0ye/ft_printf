NAME = libftprintf.a
FLAG = -Wall -Wextra -Werror
SRC  = $(shell find . -name "ft_*.c")
CYAN = \033[0;96m
BLUE = \033[0;94m

all: $(NAME)

$(NAME):
	@gcc $(FLAG) -c $(SRC)
	@ar rc $(NAME) *.o
	@echo "$(BLUE)printf$(CYAN) fonksiyonları $(BLUE)$(NAME)$(CYAN) olarak derlendi"
clean:
	@rm -f  *.o
	@echo "$(BLUE)output dosyası$(CYAN) silindi"

fclean: clean
	@rm -f $(NAME)
	@echo "$(BLUE)library dosyası$(CYAN) silindi"

re: fclean all
