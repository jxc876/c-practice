# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# Output binary name
TARGET = greeting-demo

# Source and object files
SRCS = greeting-demo.c greeting.c
OBJS = $(SRCS:.c=.o)

# Default rule
all: $(TARGET)

# Link object files into binary
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compile .c to .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJS) $(TARGET)
