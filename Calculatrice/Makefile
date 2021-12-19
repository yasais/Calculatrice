
CC = gcc

CFLAGS = -Wall -Wextra -Werror

DEPS = ./Includes/include.h

OBJFILES = Sources/main.o Sources/calcule.o\
	   

TARGET = my_bc
all: $(TARGET)

$(TARGET): $(OBJFILES) $(DEPS)
		$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES)

.PHONY: clean
clean:
		rm -f Sources/*.o $(TARGET)
