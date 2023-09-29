#define EXTERN extern "C"

#include <emscripten/emscripten.h>

#include <string>
//#include "httplib.h"

char * string = "Hello world!";

int main() {
    return 0;
}

EXTERN EMSCRIPTEN_KEEPALIVE const char * getConnection() {
    /*httplib::Client client("http://localhost:8001");

    httplib::Result result = client.Get("/getConnection");
    httplib::Response response = result.value();

    server_public_key.append(response.body);
    return server_public_key.c_str();*/

    return string;
}