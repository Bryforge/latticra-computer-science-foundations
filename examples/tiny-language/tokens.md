# Tiny Language Token Examples

These examples support Module 7 and Lab 05.

## Example 1

Source:

```text
1 + 2
```

Tokens:

```text
NUMBER(1)
PLUS
NUMBER(2)
```

## Example 2

Source:

```text
(12 + 3) * 4
```

Tokens:

```text
LEFT_PAREN
NUMBER(12)
PLUS
NUMBER(3)
RIGHT_PAREN
STAR
NUMBER(4)
```

## Example 3

Source:

```text
(9 / 3) + 7
```

Tokens:

```text
LEFT_PAREN
NUMBER(9)
SLASH
NUMBER(3)
RIGHT_PAREN
PLUS
NUMBER(7)
```

## Invalid examples

```text
1 +
```

Invalid because the operator has no right-hand expression.

```text
(2 * 3
```

Invalid because the opening parenthesis is not closed.

```text
hello + 4
```

Invalid in this tiny language because identifiers are not supported.
