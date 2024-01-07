(declare-project
    :name "callback-example-c"
    :description "Callback example from C code")

(declare-native
    :name "callback-example-c"
    :cflags ["-O3" "-Wall"]
    :source ["callback-example.c"])