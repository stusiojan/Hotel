CC = g++
CFLAGS = -Wall -Wextra -std=c++17
SRC_DIR = src
INCLUDE_DIR = includes
BIN_DIR = bin
TEST_DIR = tests
INPUT_DIR = input

SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.cpp, $(BIN_DIR)/%.o, $(SRC_FILES))
INC_FLAGS = -I$(INCLUDE_DIR)

EXECUTABLE = $(BIN_DIR)/hotel

.PHONY: all clean run test

all: $(EXECUTABLE)

$(BIN_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) $(CFLAGS) $(INC_FLAGS) -c $< -o $@

$(EXECUTABLE): $(OBJ_FILES)
	$(CC) $(CFLAGS) $(INC_FLAGS) $^ -o $@

clean:
	rm -rf $(BIN_DIR)/*

run: $(EXECUTABLE)
	./$(EXECUTABLE)

test: $(EXECUTABLE)
	./$(EXECUTABLE) < $(INPUT_DIR)/test_input.txt
