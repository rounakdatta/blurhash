#include <iostream>

#include <encode/encode.h>

int main(int argc, const char **argv) {
    int foo = encode::encode(14);
    std::cout << foo;

    return 0;
}