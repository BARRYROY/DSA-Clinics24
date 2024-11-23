CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -pedantic
SOURCE = tree.c
TARGET = tree 
OBJECTS = $(SOURCE:.c=.o)


$(TARGET): $(SOURCE)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCE)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

run: $(TARGET)
	./tree

clean:
	rm -f ./tree $(TARGET)