.default: all

all: scrabble

clean:
	rm -f scrabble *.o

scrabble: Board.o GameEngine.o LinkedList.o Location.o Menu.o Node.o Player.o scrabble.o Tile.o TileBag.o
	g++ -Wall -Werror -std=c++14 -g -O -o $@ $^

%.o: %.cpp
	g++ -Wall -Werror -std=c++14 -g -O -c $^
