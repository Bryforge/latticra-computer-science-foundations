# Lab 03 — Arrays and Functions in C

## Goal

Practice using arrays and functions in C.

## Create the lab folder

```sh
mkdir -p ~/latticra-cs-foundations/labs/lab-03
cd ~/latticra-cs-foundations/labs/lab-03
```

## Write the program

Create `sum.c`:

```sh
cat > sum.c <<'EOF'
#include <stdio.h>

int sum_array(int values[], int count) {
    int total = 0;

    for (int i = 0; i < count; i++) {
        total = total + values[i];
    }

    return total;
}

int main(void) {
    int values[] = {2, 4, 6, 8, 10};
    int count = 5;
    int total = sum_array(values, count);

    printf("total = %d\n", total);
    return 0;
}
EOF
```

## Compile and run

```sh
cc -Wall -Wextra -Wpedantic sum.c -o sum
./sum
```

## Modify

Change the program so it also calculates the average.

## Questions

1. What does the array store?
2. Why does the function need `count`?
3. What would happen if `count` were too large?
4. Why does bounds awareness matter in C?

## Completion checklist

- [ ] Program created
- [ ] Program compiled with warnings
- [ ] Program ran successfully
- [ ] Average added
- [ ] Questions answered
