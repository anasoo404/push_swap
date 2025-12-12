CC      := cc
CFLAGS  := -Wall -Wextra -Werror
NAME    := push_swap

SRC_DIR := srcs
OBJ_DIR := objs
INC_DIR := includes

SRC     := $(wildcard $(SRC_DIR)/*.c)
OBJ     := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))
DEPS    := $(OBJ:.o=.d)

all: $(NAME)

$(NAME): $(OBJ)
    $(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
    $(CC) $(CFLAGS) -MMD -MP -I$(INC_DIR) -c $< -o $@

$(OBJ_DIR):
    mkdir -p $@

clean:
    rm -rf $(OBJ_DIR)

fclean: clean
    rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re
