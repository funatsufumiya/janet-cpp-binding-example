(declare-project
    :name "just-example-c"
    :description "Just an example of C binding")

(declare-native
    :name "just-example-c"
    :cflags ["-O3" "-Wall"]
    :source ["just-example.c"])