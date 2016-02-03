all : executable

executable : launcher.o DLA.o
	g++ -g launcher.o DLA.o -o executable -std=c++11

launcher.o: launcher.cpp DLA.h
	g++ -g -c launcher.cpp -o launcher.o -std=c++11

DLA.o: DLA.cpp DLA.h
	g++ -g -c DLA.cpp -o DLA.o -std=c++11

clean :
	rm *.o
