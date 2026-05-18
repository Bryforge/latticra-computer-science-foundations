# Lab 04 — Stack Model

## Goal

Understand a stack as a last-in, first-out structure.

## Concept

A stack supports three common operations:

- `push`: add an item to the top
- `pop`: remove the top item
- `peek`: inspect the top item

## Manual trace

Start with an empty stack:

```text
[]
```

Perform these operations:

```text
push A
push B
push C
peek
pop
push D
pop
pop
```

Write the stack state after each operation.

## Reflection questions

1. Why is a stack useful for nested work?
2. Where do stacks appear in programming languages?
3. Why should a program check whether a stack has items before removing one?
4. Why should a program know the capacity of a fixed-size stack?

## Systems connection

Stacks appear in function calls, expression evaluation, parsing, undo systems, and many operating system internals.

## Completion checklist

- [ ] Manual trace complete
- [ ] Stack operations explained
- [ ] Reflection questions answered
- [ ] Systems connection written
