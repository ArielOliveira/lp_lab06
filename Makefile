programa_1 = ./bin/programa_1
programa_2 = ./bin/programa_2
programa_3 = ./bin/programa_3

BIN_DIR = ./bin
OBJ_DIR = ./build
LIB_DIR = ./lib
INC_DIR = ./include
SRC_DIR = ./src
DOC_DIR = ./doc
TEST_DIR = ./test

CC = g++

CPPFLAGS = -Wall -pedantic -ansi -std=c++11 -I.

OBJS_PROG_1 = $(OBJ_DIR)/programa_1/main.o $(OBJ_DIR)/programa_1/stack.o

RM = rm -rf

.PHONY: dir doxy clean programa_1

programa_1: $(programa_1)

$(programa_1): CPPFLAGS+= -I$(INC_DIR)/programa_1/
$(programa_1): $(OBJS_PROG_1)
	$(CC) $^ $(CPPFLAGS) -o $@

$(OBJ_DIR)/programa_1/main.o: $(SRC_DIR)/programa_1/main.cpp
	$(CC) -c $(CPPFLAGS) -o $@ $<

$(OBJ_DIR)/programa_1/stack.o: $(SRC_DIR)/programa_1/stack.cpp $(INC_DIR)/programa_1/stack.h
	$(CC) -c $(CPPFLAGS) -o $@ $<

dir:
	mkdir -p bin
	mkdir -p build/programa_1
	mkdir -p build/programa_2
	mkdir -p build/programa_3
	mkdir -p include/programa_1
	mkdir -p include/programa_2
	mkdir -p include/programa_3
	mkdir -p src/programa_1
	mkdir -p src/programa_2
	mkdir -p src/programa_3
	mkdir -p doc
	mkdir -p lib
	mkdir -p test

doxy:
	$(RM) $(DOC_DIR)/*
	doxygen Doxyfile

clean:
	$(RM) $(DOC_DIR)/*
	$(RM) $(OBJ_DIR)/*
	$(RM) $(BIN_DIR)/*
