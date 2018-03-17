CC = clang++
CFLAGS = -O2 -Wall -std=c++11
TARGETS = p1584 p1583

RM = rm -f

all: $(TARGETS)

p1584.o: p1584.cpp
	$(CC) $(CFLAGS) -c p1584.cpp

p1584:	p1584.o
	$(CC) $(CFLAGS) -o p1584 p1584.o


p1583.o: p1583.cpp
	$(CC) $(CFLAGS) -c p1583.cpp

p1583:	p1583.o
	$(CC) $(CFLAGS) -o p1583 p1583.o

clean:
	$(RM) $(TARGETS) *.o
