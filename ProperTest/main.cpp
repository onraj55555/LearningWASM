#define EXTERN extern "C"
#include <emscripten/emscripten.h>
#include <string>

typedef struct User User;

struct User {
    std::string username;
    std::string password;
};

User user;

int main() {
    return 0;
}

EXTERN EMSCRIPTEN_KEEPALIVE const char * login() {
    std::string msg("Login: ");

    msg += user.username;
    msg += ' ';
    msg += user.password;

    //user.append("User logged in: ").append((int)*argv[0] - '0').append(" ").append((int)*argv[1] - '0');
    return msg.c_str();
}

EXTERN EMSCRIPTEN_KEEPALIVE void add_to_username(char c) {
    user.username += c;
}

EXTERN EMSCRIPTEN_KEEPALIVE void add_to_password(char c) {
    user.password += c;
}