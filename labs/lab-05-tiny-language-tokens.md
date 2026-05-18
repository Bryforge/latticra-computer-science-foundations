# Lab 05 — Tiny Language Tokens

## Goal

Practice thinking like a programming language designer by turning source text into tokens.

## Source language

The tiny expression language supports:

- Whole numbers
- `+`
- `-`
- `*`
- `/`
- Parentheses

## Example source

```text
(12 + 3) * 4
```

## Tokenization

A tokenizer could produce:

```text
LEFT_PAREN
NUMBER(12)
PLUS
NUMBER(3)
RIGHT_PAREN
STAR
NUMBER(4)
```

## Tasks

Tokenize these expressions by hand:

```text
1 + 2
10 - 4
3 * (2 + 8)
(9 / 3) + 7
```

## Invalid examples

For each expression, explain why it should be rejected:

```text
1 +
(2 * 3
hello + 4
7 ** 2
```

## Reflection

Answer:

> Why is tokenization a separate step before parsing?

## Completion checklist

- [ ] Valid examples tokenized
- [ ] Invalid examples explained
- [ ] Reflection written
