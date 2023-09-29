#define EXTERN extern "C"

#include <emscripten/emscripten.h>

#include <string>

char * string = "Hello world!";

EXTERN EMSCRIPTEN_KEEPALIVE const char* getAMessage() {
	return string;
};