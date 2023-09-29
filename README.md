# LearningWASM

Compiling:
emcc -s EXTRA_EXPORTED_RUNTIME_METHODS='["cwrap", "allocate", "intArrayFromString", "stringToNewUTF8"]' -std=c++11 main.cpp
Alle, ongeveer ;)