# Lab 02 — C Basics

## Goal

Write, compile, and run a small C program.

## Create a C file

```sh
mkdir -p ~/latticra-cs-foundations/labs/lab-02
cd ~/latticra-cs-foundations/labs/lab-02
cat > hello.c <<'EOF'
#include <stdio.h>

int main(void) {
    printf("Hello from Latticra CS Foundations.\n");
    return 0;
}
EOF
```

## Compile

Try:

```sh
cc hello.c -o hello
```

If needed, use:

```sh
clang hello.c -o hello
```

or:

```sh
gcc hello.c -o hello
```

## Run

```sh
./hello
```

## Modify

Change the program so it prints three lines:

1. Your name
2. The course name
3. One systems topic you want to learn

## Completion checklist

- [ ] Created `hello.c`
- [ ] Compiled the program
- [ ] Ran the program
- [ ] Modified the output
- [ ] Recompiled and reran
