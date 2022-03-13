
all:
	g++ -fPIC -c -o mylib_i.o mylib_i.cpp
	g++ -fPIC -c -o mylib.o mylib.cpp
	g++ -shared -o libmylib.so mylib.o mylib_i.o
	g++ -c -o main.o main.cpp
	g++ -o main main.o -L. -lmylib
	
clean:
	rm *.o *.so main -rf
