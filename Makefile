CC=gcc
CFLAGS=-g -Wall
SRC=$(wildcard *.c)
TARGET=out

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
