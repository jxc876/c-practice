# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# Output
TARGET = say_hello
BINDIR = bin
OUTFILE = $(BINDIR)/$(TARGET)

# Source and object files
SRCS = say_hello.c greeting.c
OBJS = $(SRCS:.c=.o)

# Default rule
all: $(OUTFILE)

# Link object files into binary
$(OUTFILE): $(OBJS) | $(BINDIR)
	$(CC) $(CFLAGS) -o $@ $^

# Ensure bin/ directory exists
$(BINDIR):
	mkdir -p $@

# Compile .c to .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJS) $(OUTFILE)
