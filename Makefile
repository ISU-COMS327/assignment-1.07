CC = gcc
CXX = g++
CFLAGS = -g -Wall -Werror -ggdb
OBJ = monster monster_wrapper generate_dungeon
OBJS = $(addsuffix .o,$(OBJ))

all:
	make compile

compile:
	$(CXX) -c monster.cpp -o monster.o
	$(CXX) -c monster_wrapper.cpp -o monster_wrapper.o
	$(CC) $(CFLAGS) -c priority_queue.c -o priority_queue.o
	$(CC) $(CFLAGS) -c generate_dungeon.c -o generate_dungeon.o -Ipriority_queue.o -Ilncurses
	$(CXX) generate_dungeon.o monster_wrapper.o monster.o priority_queue.o -lncurses -o generate_dungeon

.PHONY: clean
clean:
	@rm -rf $(OBJS) monsterexe generate_dungeon *.o *.dSYM
	@echo "Directory cleaned."
