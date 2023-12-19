

all:

run:

compila_exponencial:
	C:\MinGW\bin\g++.exe -c ./src/numero_exponencial.cpp -I ./include -o ./build/numero_exponencial.o

compila_logaritmo:
	C:\MinGW\bin\g++.exe -c ./src/numero_logaritmo.cpp -I ./include -o ./build/numero_logaritmo.o

compila_racional:
	C:\MinGW\bin\g++.exe -c ./src/numero_racional.cpp -I ./include -o ./build/numero_racional.o

compila_trigonometria:
	C:\MinGW\bin\g++.exe -c ./src/trigonometria.cpp -I ./include -o ./build/trigonometria.o

clear:
	del ./build/*

