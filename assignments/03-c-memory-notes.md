# Assignment 03 — C Memory Notes

## Goal

Build a careful mental model of memory in C.

## Part 1 — Explain the terms

Write short explanations for:

- Variable
- Address
- Pointer
- Array
- Stack
- Heap
- Allocation
- Deallocation
- Undefined behavior

## Part 2 — Code reading

Study this program:

```c
#include <stdio.h>

int main(void) {
    int value = 42;
    int *ptr = &value;

    printf("value = %d\n", value);
    printf("address = %p\n", (void *)ptr);
    printf("through pointer = %d\n", *ptr);

    return 0;
}
```

Answer:

1. What is stored in `value`?
2. What is stored in `ptr`?
3. What does `&value` mean?
4. What does `*ptr` mean?
5. Why is `(void *)ptr` used when printing the address?

## Part 3 — Risk reflection

Write a paragraph answering:

> Why do pointer mistakes matter for reliability and security?

## Completion checklist

- [ ] Terms explained
- [ ] Code questions answered
- [ ] Risk reflection written
