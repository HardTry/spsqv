CC = clang++
CFLAGS = -O2 -Wall -std=c++11
TARGETS = p1584 p1583 p340 p401 p1585 p1586 p1225 p455

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



p340.o: p340.cpp
	$(CC) $(CFLAGS) -c p340.cpp

p340:	p340.o
	$(CC) $(CFLAGS) -o p340 p340.o


p401.o: p401.cpp
	$(CC) $(CFLAGS) -c p401.cpp

p401:	p401.o
	$(CC) $(CFLAGS) -o p401 p401.o


p1585.o: p1585.cpp
	$(CC) $(CFLAGS) -c p1585.cpp

p1585:	p1585.o
	$(CC) $(CFLAGS) -o p1585 p1585.o



p1586.o: p1586.cpp
	$(CC) $(CFLAGS) -c p1586.cpp

p1586:	p1586.o
	$(CC) $(CFLAGS) -o p1586 p1586.o



p1225.o: p1225.cpp
	$(CC) $(CFLAGS) -c p1225.cpp

p1225:	p1225.o
	$(CC) $(CFLAGS) -o p1225 p1225.o



p455.o: p455.cpp
	$(CC) $(CFLAGS) -c p455.cpp

p455:	p455.o
	$(CC) $(CFLAGS) -o p455 p455.o


clean:
	$(RM) $(TARGETS) *.o
