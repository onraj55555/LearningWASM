#define EXTERN extern "C"
#include <emscripten/emscripten.h>
#include <string>

std::string user;

int main() {
    return 0;
}

EXTERN EMSCRIPTEN_KEEPALIVE const char * login(const char * username, const char * password) {
    for(int i = 0; i < 5; i++) {
        user += username[i];
    }
    user.append("Login: ").append(username).append(" ").append(password);
    //user.append("User logged in: ").append((int)*argv[0] - '0').append(" ").append((int)*argv[1] - '0');
    return user.c_str();
}