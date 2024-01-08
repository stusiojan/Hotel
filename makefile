CC = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Werror -pedantic -Iincludes
LDFLAGS = -lc++abi

SRC_DIR = src
INCLUDE_DIR = includes
BIN_DIR = bin

SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS = $(patsubst $(SRC_DIR)/%.cpp,$(BIN_DIR)/%.bin,$(SOURCES))

EXECUTABLE = $(BIN_DIR)/main.out

.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

$(BIN_DIR)/%.bin: $(SRC_DIR)/%.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(BIN_DIR)/*.bin $(EXECUTABLE)