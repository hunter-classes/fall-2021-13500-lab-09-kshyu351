main: main.o funcs.o
	g++ -o main main.o funcs.o coord3d.o -std=c++11 

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o



funcs.o: funcs.cpp funcs.h coord3d.h
	g++ -c funcs.cpp 

main.o: main.cpp funcs.h 

tests.o: tests.cpp doctest.h funcs.h 

clean:
	rm -f main.o funcs.o tests.o 
