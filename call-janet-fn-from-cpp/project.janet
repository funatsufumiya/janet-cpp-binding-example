(declare-project
    :name "callback-example-cpp"
    :description "Callback example from C++ code")

(declare-native
    :name "callback-example-cpp"
    :cflags ["--std=c++11"  "-O3" "-Wall"]
    :source ["callback-example.cpp"])