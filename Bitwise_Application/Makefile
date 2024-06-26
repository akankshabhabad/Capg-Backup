CC = gcc

CFLAGS = -Wall -Wextra -Iinclude


LDFLAGS =

SRCDIR = src
OBJDIR = lib
BINDIR = bin

SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJECTS = $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SOURCES))
EXECUTABLE = $(BINDIR)/Bitwise_Exec

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $^ -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJDIR)/*.o $(BINDIR)/Bitwise_Exec
	





