all: start

start: input_output.o Solution_of_the_equation.o main.o
	g++ input_output.o Solution_of_the_equation.o main.o -o result.exe

input_output.o: input_output.cpp
g++ -c input_output.cpp

Solution_of_the_equation.o: Solution_of_the_equation.cpp
g++ -c soSolution_of_the_equationlve.cpp

main.o: main.cpp
g++ -c main.cpp

