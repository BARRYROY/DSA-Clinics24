CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -pedantic

SOURCES = main.c encapsulation.c

OBJECTS = $(SOURCES:.c=.o)

TARGET = encapsulation

all: $(TARGET)

$(TARGET) : $(SOURCES)
	$(CC) $(CFLAGS) -o $(TARGET)	$(SOURCES)

%.o: %.c
	$(CC) $(CFLAGS) -c	$< -o $@


.PHONY: test clean
test:
	main $(LIBS)
	./encapsulation

clean:
	rm -f $(OBJECTS) $(TARGET)

run: encapsulation
	./encapsulation
	