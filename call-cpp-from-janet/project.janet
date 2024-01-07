(declare-project
    :name "just-example-cpp"
    :description "Just an example of C++ binding")

(declare-native
    :name "just-example-cpp"
    :cflags ["-std=c++11" "-O3" "-Wall"]
    :source ["just-example.cpp"])