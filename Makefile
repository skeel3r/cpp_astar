CC=g++
CFLAGS=-std=c++11 -g -Wall
LDFLAGS=
SOURCES=main.cpp Domain2d.cpp PGM_parser.cpp
OBJECTS=$(SOURCES:.cpp=.o)
	EXECUTABLE=main

all: $(SOURCES) $(EXECUTABLE)
	  
$(EXECUTABLE): $(OBJECTS) 
	  $(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	  $(CC) $(CFLAGS) $< -o $@

