# Misc Notes

Using cc to compile a single file program

```shell
cc charsv1.c -o charsv1
./main
```

Using cc to compile a multi file program

```shell
cd headers

# compile object files
gcc -c greeting.c
gcc -c say_hello.c

# final binary
gcc -o bin/say_hello greeting.o say_hello.o

# execute
./bin/say_hello
Hello, World!

# clean up
rm *.o
```