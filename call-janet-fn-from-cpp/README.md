# Call Janet Function From C++

## Usage

```bash
$ jpm install
```

```clojure
(import callback-example-cpp)
(callback-example-cpp/set-callback (fn [a b] (print "hello " a " with " b "!")))
(callback-example-cpp/call-from-cpp "janet" "C++") # => "hello janet with C++!"
```