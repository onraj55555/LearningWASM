CC=em++
FLAGS=-Wall -Wextra -Wpedantic -s NO_EXIT_RUNTIME=1 -s "EXPORTED_RUNTIME_METHODS=['ccall']"
TEMPLATE=template.html
OUTPUT=index.html
SRC=main.cpp

all:
	$(CC) -o $(OUTPUT) $(SRC) --shell-file $(TEMPLATE) $(FLAGS)

clean:
	rm $(OUTPUT) index.js index.wasm