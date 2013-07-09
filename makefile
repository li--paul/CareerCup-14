main.exe: main.o
	g++ -o main.exe main.o 
main.o: main.cpp *.h
	g++ -c main.cpp

clean:
	del *.exe *.o
