EJECUTABLE = $(DIR_BIN)/programa
DIR_INC  = ../headers
DIR_OBJ = ../objs
DIR_BIN = ../bin
DIR_MAIN = .
OBJETOS = $(DIR_OBJ)/main.o $(DIR_OBJ)/graficos.o $(DIR_OBJ)/render.o $(DIR_OBJ)/textoso.o 


CPPFLAGS = -std=c++17 -lm -lglut -lGL -lGLU -I$(DIR_INC)
CC = g++


$(EJECUTABLE) : $(OBJETOS)
	@mkdir -p $(DIR_BIN)
	@$(CC) $(OBJETOS)  $(CPPFLAGS) -o $(EJECUTABLE)


$(DIR_OBJ)/%.o : %.cpp
	@mkdir -p $(DIR_OBJ)
	@$(CC) -c -MD $(CPPFLAGS) $< -o $@
-include $(DIR_OBJ)/*.d


.PHONY: clean
clean:
	@rm -r $(DIR_BIN) $(DIR_OBJ)