RM = rm -rf
CC= g++
LIB_DIR=./lib
INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin
DOC_DIR=./doc
TEST_DIR=./test
CFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)
.PHONY: all clean distclean doxy
all: geometrica primo
debug: CFLAGS += -g -O0
debug: geometrica primo

geometrica: $(OBJ_DIR)/area.o $(OBJ_DIR)/perimetro.o $(OBJ_DIR)/volume.o $(OBJ_DIR)/calcula.o $(OBJ_DIR)/main.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executavel questao01 criado em $(BIN_DIR)] +++"
	@echo "============="

$(OBJ_DIR)/area.o: $(SRC_DIR)/area.cpp $(INC_DIR)/area.h
	$(CC) -c $(CFLAGS) -o $@ $<
$(OBJ_DIR)/perimetro.o: $(SRC_DIR)/perimetro.cpp $(INC_DIR)/perimetro.h
	$(CC) -c $(CFLAGS) -o $@ $<
$(OBJ_DIR)/volume.o: $(SRC_DIR)/volume.cpp $(INC_DIR)/volume.h
	$(CC) -c $(CFLAGS) -o $@ $<
$(OBJ_DIR)/calcula.o: $(SRC_DIR)/calcula.cpp $(INC_DIR)/calcula.h
	$(CC) -c $(CFLAGS) -o $@ $<
$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<


primo: $(OBJ_DIR)/fatorial.o $(OBJ_DIR)/primalidade.o $(OBJ_DIR)/main2.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executavel questao01 criado em $(BIN_DIR)] +++"
	@echo "============="
$(OBJ_DIR)/fatorial.o: $(SRC_DIR)/fatorial.cpp $(INC_DIR)/fatorial.h
	$(CC) -c $(CFLAGS) -o $@ $<
$(OBJ_DIR)/primalidade.o: $(SRC_DIR)/primalidade.cpp $(INC_DIR)/primalidade.h
	$(CC) -c $(CFLAGS) -o $@ $<
$(OBJ_DIR)/main2.o: $(SRC_DIR)/main2.cpp
	$(CC) -c $(CFLAGS) -o $@ $<


doxy:
	$(RM) $(DOC_DIR)/*
	doxygen Doxyfile

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*

