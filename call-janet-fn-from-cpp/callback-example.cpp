#include <janet.h>

static JanetFunction *callback = NULL;

static Janet set_callback(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    JanetFunction *fn = janet_getfunction(argv, 0);
    callback = fn;
    return janet_wrap_nil();
}

static Janet call_callback(int32_t argc, Janet *argv) {
    JanetFunction *fn = callback;
    if (fn == NULL) {
        janet_panic("callback function has not set");
    }
    Janet ret = janet_call(fn, argc, argv);
    return ret;
}

static const JanetReg cfuns[] = {
    {"set-callback", set_callback, "set callback function"},
    {"call-from-cpp", call_callback, "call callback function"},
    {NULL, NULL, NULL}
};

JANET_MODULE_ENTRY(JanetTable *env) {
    janet_cfuns(env, "callback-example-cpp", cfuns);
}