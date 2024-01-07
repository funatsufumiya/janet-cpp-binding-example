# Call Janet Function From C

## Usage

```bash
$ jpm install
```

```clojure
(import callback-example-c)
(callback-example-c/set-callback (fn [a b] (print "hello " a " with " b "!")))
(callback-example-c/call-from-c "janet" "C") # => "hello janet with C!"
```