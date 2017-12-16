TARGET = juice
OBJS = juice.o blender.o juice-php.o juice-nodejs.o juice-angularjs.o main.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

$(TARGET): $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $(TARGET)

main.o: *.h *.cpp
	 $(CFLAGS) main.cpp

juice.o: juice.*
	$(CC) $(CFLAGS) juice.cpp

blender.o: blender.*
	$(CC) $(CFLAGS) blender.cpp

juice-php.o: juice-php.*
	$(CC) $(CFLAGS) juice-php.cpp

juice-nodejs.o: juice-nodejs.*
	$(CC) $(CFLAGS) juice-nodejs.cpp

juice-angularjs.o: juice-angularjs.*
	$(CC) $(CFLAGS) juice-angularjs.cpp

clean:
	rm -f *.o juice

tar:
	tar -cvz ../src/* ../docs/*  -f ../juice-recipe-book.tar.gz
