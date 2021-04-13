FLAGS = -std=c++17 -lm -lglut -lGL -lGLU -Wall
COMP = g++
NAME = bin


main : main.o
	@$(COMP) main.o $(FLAGS) -o $(NAME) 

main.o : main.cpp
	@$(COMP) -c main.cpp