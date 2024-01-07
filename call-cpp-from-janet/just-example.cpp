#include <janet.h>
#include <iostream>

static Janet hello(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    std::cout << "Hello world!" << std::endl;
    return janet_wrap_nil();
}

static const JanetReg cfuns[] = {
    {"hello", hello, "Print hello world"},
    {NULL, NULL, NULL}
};

JANET_MODULE_ENTRY(JanetTable *env) {
    janet_cfuns(env, "just-example-cpp", cfuns);
}