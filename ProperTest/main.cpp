#define EXTERN extern "C"
#include <emscripten/emscripten.h>
#include <string>

std::string user;

int main() {
    return 0;
}

EXTERN EMSCRIPTEN_KEEPALIVE const char * login(int argc, char ** argv) {
    user.append("User logged in: ").append(argv[0]).append(" ").append(argv[1]);
    return user.c_str();
}