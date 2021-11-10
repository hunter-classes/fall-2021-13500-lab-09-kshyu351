main: main.o funcs.o 
	g++ -o main main.o funcs.o -std=c++11 

tests: tests.o funcs.o coord3d.h
	g++ -o tests tests.o funcs.o -std=c++11

funcs.o: funcs.cpp funcs.h coord3d.h
	g++ -c funcs.cpp -std=c++11

main.o: main.cpp funcs.h 

tests.o: tests.cpp doctest.h funcs.h coord3d.h
	g++ -c tests.cpp -std=c++11

clean:
	rm -f *.o 
