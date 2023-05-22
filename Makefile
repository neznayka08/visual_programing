CC = g++
CFLAGS = -std=c++11 -Wall

OBJECTS = main.o Coordinates.o Object.o UserEquipment.o

all: start

start: $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o start

main.o: main.cpp UserEquipment.h
	$(CC) $(CFLAGS) -c main.cpp

Coordinates.o: Coordinates.cpp Coordinates.h
	$(CC) $(CFLAGS) -c Coordinates.cpp

Object.o: Object.cpp Object.h Coordinates.h
	$(CC) $(CFLAGS) -c Object.cpp

UserEquipment.o: UserEquipment.cpp UserEquipment.h Object.h Coordinates.h
	$(CC) $(CFLAGS) -c UserEquipment.cpp

clean:
	rm -f *.o start
