# Latticra — Foundations of Computer Science Coursebook

This coursebook is the main learning text for **Latticra — Foundations of Computer Science**.

The course is built around one central path:

```text
logic → code → memory → machines → operating systems → languages → security → Latticra
```

The purpose is not only to teach programming. The purpose is to teach how computation becomes real systems.

---

# Module 0 — Orientation

## Learning goals

By the end of this module, you should be able to:

- Explain what computer science studies
- Explain how programming differs from computer science
- Describe the systems-minded approach of this course
- Set up a basic learning environment
- Begin a habit of technical notes and reflection

## Lesson

Computer science is the study of computation, information, algorithms, structure, and systems. Programming is one way we express computer science, but it is not the whole field.

A programmer may learn how to write code that works. A computer scientist asks deeper questions:

- What is being computed?
- How is information represented?
- What algorithm solves the problem?
- What resources does it require?
- What assumptions does the system depend on?
- What can go wrong?
- How do we know the system behaves correctly?

This course is systems-minded. That means every concept is eventually connected to how real computing systems are built. Logic connects to code. Code connects to memory. Memory connects to machines. Machines connect to operating systems. Operating systems connect to programming languages. Programming languages connect to security and design.

Latticra appears at the end of the course because a serious operating system or programming language project should be grounded in fundamentals first.

## Mental model

A computer system can be viewed as layers:

```text
human intention
programming language
program
compiler or interpreter
operating system
machine architecture
hardware
```

Each layer hides complexity from the layer above it. Computer science helps you understand both the hiding and what is being hidden.

## Practice

Create a course notebook. For every module, write:

1. Three concepts you learned
2. One thing that confused you
3. One example you can explain in your own words
4. One connection to Latticra or systems design

## Checkpoint

You are ready to continue when you can explain why computer science is broader than programming.

---

# Module 1 — Computation

## Learning goals

By the end of this module, you should be able to:

- Explain bits and bytes
- Convert small numbers between decimal and binary
- Use Boolean logic
- Describe what an algorithm is
- Explain why abstraction matters

## Lesson

A computer works with representation. A bit is a value that can be either 0 or 1. A byte is usually 8 bits. With enough bits, computers can represent numbers, characters, images, instructions, files, and entire programs.

Binary works because the physical world can reliably represent two states: on/off, high/low, true/false. Complex systems emerge from simple representations repeated at scale.

Boolean logic gives us operations over truth values:

- `AND` is true only when both inputs are true
- `OR` is true when at least one input is true
- `NOT` flips true to false or false to true

Programs use these ideas constantly. Every `if` statement depends on logic. Every permission check, loop condition, search filter, and security rule depends on some form of decision-making.

An algorithm is a finite, step-by-step method for solving a problem. A recipe is not a perfect algorithm, but it is close enough as an analogy: it has steps, order, inputs, and an expected result.

## Example

A simple algorithm for finding the largest number in a list:

```text
1. Start with the first number as the largest.
2. Look at the next number.
3. If it is larger than the current largest, replace the largest.
4. Repeat until no numbers remain.
5. Return the largest number.
```

## Why this matters for systems

Operating systems, compilers, filesystems, shells, and security mechanisms all depend on representation and logic. If you do not understand representation, systems appear magical. If you do understand representation, systems become inspectable.

## Practice

- Convert 13 to binary.
- Convert `1010` to decimal.
- Write a truth table for `A AND B`.
- Write an algorithm for checking whether a number is even.

## Checkpoint

You are ready to continue when you can explain how simple binary states can represent complex information.

---

# Module 2 — Programming

## Learning goals

By the end of this module, you should be able to:

- Explain variables, types, expressions, and functions
- Use control flow to describe program behavior
- Break problems into smaller parts
- Understand debugging as investigation
- Write clear pseudocode

## Lesson

A program is a precise description of computation. It tells a machine what to do, but it also tells humans what the machine is supposed to do.

Core programming ideas include:

- A **variable** names a value.
- A **type** describes what kind of value something is.
- An **expression** produces a value.
- A **statement** performs an action.
- A **function** groups behavior behind a name.
- **Control flow** determines what happens next.

Programming is mostly about structure. A large program cannot be understood as one huge block of instructions. It must be broken into parts that have names, responsibilities, and boundaries.

## Pseudocode example

```text
function is_even(number):
    if number divided by 2 has no remainder:
        return true
    otherwise:
        return false
```

Pseudocode is useful because it allows you to reason before choosing a specific programming language.

## Debugging

Debugging is not guessing. Debugging is investigation.

A useful debugging loop:

```text
observe → form a hypothesis → test → record → adjust
```

When something breaks, ask:

- What did I expect?
- What happened instead?
- What changed?
- What is the smallest test that reproduces the problem?

## Why this matters for systems

Systems programming punishes unclear thinking. Operating systems, language runtimes, memory managers, and security tools require careful structure. Clear programming habits become survival tools later.

## Practice

Write pseudocode for:

1. Checking whether a password is long enough
2. Finding the smallest number in a list
3. Repeating a task until the user types `quit`

## Checkpoint

You are ready to continue when you can write pseudocode before writing code.

---

# Module 3 — C and Systems Programming

## Learning goals

By the end of this module, you should be able to:

- Explain why C matters
- Describe compilation
- Understand pointers at a basic level
- Explain stack and heap at a high level
- Recognize why C requires discipline

## Lesson

C is one of the most important languages in systems programming. Many operating systems, embedded systems, runtime libraries, and low-level tools are written in C or influenced by C.

C matters because it exposes ideas that many higher-level languages hide:

- Memory addresses
- Manual allocation
- Pointers
- Layout of data
- Compilation
- Undefined behavior

A C program is usually compiled. Compilation translates source code into machine code or another lower-level representation that the system can execute.

## Minimal C program

```c
#include <stdio.h>

int main(void) {
    printf("Hello, systems world.\n");
    return 0;
}
```

Compile it with:

```sh
cc hello.c -o hello
./hello
```

## Pointers

A pointer is a value that refers to a memory address. Pointers are powerful because they let programs work directly with memory. They are dangerous because mistakes can corrupt data, crash programs, or create security vulnerabilities.

Pointer thinking begins with this distinction:

```text
value       → the data itself
address     → where the data lives
pointer     → a variable that stores an address
```

## Defensive C posture

When writing C:

- Initialize variables
- Check bounds
- Check return values
- Avoid unchecked input
- Prefer clear ownership rules
- Keep functions small
- Compile with warnings enabled

Example:

```sh
cc -Wall -Wextra -Wpedantic program.c -o program
```

## Why this matters for systems

C is close enough to the machine to teach how systems really behave. Even if you later use a safer language, learning C helps you understand memory, ABI boundaries, operating systems, and vulnerabilities.

## Practice

Write a C program that:

1. Stores five integers in an array
2. Prints each integer
3. Computes the sum
4. Prints the sum

## Checkpoint

You are ready to continue when you can explain why C is powerful and why that power creates risk.

---

# Module 4 — Data Structures

## Learning goals

By the end of this module, you should be able to:

- Explain why data structures matter
- Compare arrays, linked lists, stacks, queues, trees, and maps
- Understand basic time-complexity tradeoffs
- Choose a structure based on access patterns

## Lesson

A data structure is a way to organize information so that programs can use it effectively.

Different structures optimize different operations. There is no universally best structure. The right choice depends on what the program needs to do.

## Common structures

### Array

An array stores items contiguously. It is good for indexed access.

Strengths:

- Fast access by index
- Simple layout
- Cache-friendly

Weaknesses:

- Insertion in the middle can be expensive
- Fixed-size arrays are inflexible

### Linked list

A linked list stores nodes that point to each other.

Strengths:

- Flexible growth
- Insertion can be cheap when position is known

Weaknesses:

- Slow indexed access
- Extra memory for pointers
- Less cache-friendly

### Stack

A stack is last-in, first-out.

Common operations:

- `push`
- `pop`
- `peek`

Stacks appear in function calls, parsing, undo systems, and depth-first search.

### Queue

A queue is first-in, first-out.

Queues appear in scheduling, buffering, networking, print jobs, and breadth-first search.

### Tree

A tree represents hierarchy. Filesystems, syntax trees, decision trees, and indexes often use tree-like structures.

### Map

A map stores key-value pairs. Hash maps are widely used when fast lookup by key matters.

## Big-O intuition

Big-O notation describes growth. It helps answer: how does work increase as input size increases?

Common categories:

- `O(1)` constant time
- `O(log n)` logarithmic time
- `O(n)` linear time
- `O(n log n)` common efficient sorting range
- `O(n^2)` quadratic time

## Why this matters for systems

Operating systems use queues for scheduling, trees for filesystems, maps for lookup, arrays for tables, and stacks for execution. Data structures are not academic decorations. They are the shapes inside real systems.

## Practice

For each structure, write one real systems example:

- Array
- Stack
- Queue
- Tree
- Map

## Checkpoint

You are ready to continue when you can explain that data structure choice is a tradeoff.

---

# Module 5 — Computer Architecture

## Learning goals

By the end of this module, you should be able to:

- Describe the basic role of the CPU
- Explain registers, memory, and instructions at a high level
- Understand the fetch-decode-execute cycle
- Explain why architecture affects software

## Lesson

Computer architecture describes the structure of the machine that executes programs.

A simplified machine includes:

- CPU
- Registers
- Memory
- Storage
- Devices
- Buses or interconnects

The CPU executes instructions. Registers are small, fast storage locations inside the CPU. Memory holds program data and instructions while programs run. Storage keeps data when power is off.

## Fetch-decode-execute

A simplified execution cycle:

```text
fetch instruction
interpret instruction
do the operation
move to the next instruction
```

This cycle is abstract, but it gives a useful starting point.

## Memory hierarchy

Memory is layered by speed, size, and cost:

```text
registers → cache → RAM → storage
```

Fast memory is usually smaller. Large memory is usually slower. Software performance often depends on how it moves through this hierarchy.

## Assembly intuition

Assembly language is a human-readable view of machine instructions. You do not need to master assembly immediately, but you should understand that high-level code eventually becomes lower-level operations.

Example high-level operation:

```c
x = a + b;
```

Conceptual machine behavior:

```text
load a
load b
add
store result in x
```

## Why this matters for systems

Operating systems manage machine resources. Compilers target machine behavior. Security issues often depend on architecture details. Systems builders need at least a working mental model of the machine.

## Practice

Explain how this line of code might become machine behavior:

```c
total = total + value;
```

## Checkpoint

You are ready to continue when you can explain why software is shaped by hardware.

---

# Module 6 — Operating Systems

## Learning goals

By the end of this module, you should be able to:

- Explain what an operating system does
- Describe processes, files, memory, and system calls
- Explain the kernel/user boundary
- Understand the role of terminals and shells

## Lesson

An operating system manages resources and provides abstractions.

It helps answer:

- Which programs are running?
- How is memory divided?
- Who can access which files?
- How do programs talk to devices?
- How are errors handled?
- How does the user interact with the system?

## Kernel and user space

A common model separates privileged kernel code from ordinary user programs.

```text
user programs
shells and applications
system call boundary
kernel
hardware
```

The boundary matters because direct hardware access by every program would be dangerous and chaotic.

## Processes

A process is a running program with its own execution state. The operating system schedules processes so multiple tasks can share the machine.

## Filesystems

A filesystem organizes stored data into files and directories. It provides names, paths, permissions, and metadata.

## System calls

A system call is a controlled request from a user program to the operating system.

Examples include:

- Open a file
- Read data
- Write data
- Start a process
- Allocate memory

## Terminals and shells

A terminal provides text-based interaction. A shell interprets commands and launches programs. Systems learners should become comfortable in the terminal because it exposes structure directly.

## Why this matters for Latticra

Latticra is an operating-system-oriented project. To design it responsibly, you need OS fundamentals: process boundaries, filesystem semantics, command environments, permissions, and careful claims about what has actually been implemented.

## Practice

Draw this path:

```text
user → shell → command → system call → kernel → hardware
```

Then explain each step.

## Checkpoint

You are ready to continue when you can explain what an operating system provides to programs.

---

# Module 7 — Programming Languages

## Learning goals

By the end of this module, you should be able to:

- Explain syntax and semantics
- Describe tokens, parsing, and interpretation
- Compare interpreters and compilers
- Understand why language design shapes thought and systems

## Lesson

A programming language is a designed system for expressing computation.

A language includes:

- Syntax: what valid programs look like
- Semantics: what valid programs mean
- Tooling: how programs are checked, run, formatted, and debugged
- Runtime behavior: what happens while programs execute
- Standard library: common capabilities provided to users

## From text to execution

A common pipeline:

```text
source text → tokens → syntax tree → analysis → execution or code generation
```

### Lexing

Lexing turns raw text into tokens.

Example:

```text
1 + 2
```

Tokens:

```text
NUMBER(1), PLUS, NUMBER(2)
```

### Parsing

Parsing organizes tokens into structure.

Example:

```text
(+ 1 2)
```

This structure tells the interpreter or compiler what the expression means.

### Interpreting

An interpreter directly executes a representation of the program.

### Compiling

A compiler translates a program into another form, often machine code, bytecode, or an intermediate representation.

## Type systems

A type system classifies values and operations. It can prevent certain errors before a program runs.

Examples:

- Do not add a number to a file handle
- Do not call a string like a function
- Do not return the wrong shape of value

## Why this matters for Latticra

A Latticra programming language should not be treated as only syntax. It needs semantics, tooling, documentation, examples, and a clear philosophy of what kinds of programs it should make easy and safe to write.

## Practice

Design a tiny language with:

- Numbers
- Addition
- Subtraction
- Parentheses

Write:

1. Five valid programs
2. Five invalid programs
3. A list of tokens
4. A plain-English explanation of evaluation

## Checkpoint

You are ready to continue when you can explain how source text becomes executable behavior.

---

# Module 8 — Security

## Learning goals

By the end of this module, you should be able to:

- Explain security as a design discipline
- Write a simple threat model
- Describe least privilege and attack surface
- Connect memory safety to real risk
- Make evidence-bound security claims

## Lesson

Security is not a slogan. Security is a disciplined way of designing, building, testing, and documenting systems.

A secure posture begins with humility:

- What are we protecting?
- From whom?
- Under what assumptions?
- What can fail?
- What evidence do we have?

## Threat modeling

A threat model identifies:

- Assets: what needs protection
- Actors: who may interact with the system
- Threats: what could go wrong
- Attack surfaces: where attacks may enter
- Mitigations: what reduces risk
- Assumptions: what the model depends on

## Least privilege

Least privilege means a component should have only the access it needs, and no more.

This principle limits damage when something fails.

## Attack surface

Attack surface is the set of places where a system can be interacted with or attacked.

Examples:

- Network ports
- File parsers
- Command-line arguments
- Environment variables
- Plugins
- Permissions
- User input

## Memory safety

Memory bugs can become security bugs. Buffer overflows, use-after-free, double-free, and uninitialized memory can lead to crashes or exploitation.

Even when using languages with stronger safety properties, systems builders should understand why these issues matter.

## Evidence-bound claims

A responsible security claim is specific and supported.

Weak claim:

```text
This system is secure.
```

Better claim:

```text
This parser rejects malformed input in the covered test cases and has bounds checks for the documented input format.
```

## Why this matters for Latticra

If Latticra is positioned as security-conscious, its public documentation should carefully separate:

- Built features
- Tested features
- Design goals
- Future plans
- Unsupported claims

## Practice

Threat model a simple command-line notes app.

Include:

1. Assets
2. Attackers
3. Inputs
4. Failure modes
5. Mitigations
6. Honest claims

## Checkpoint

You are ready to continue when you can replace vague security language with specific, testable claims.

---

# Module 9 — Latticra Design

## Learning goals

By the end of this module, you should be able to:

- Connect course fundamentals to Latticra
- Write a systems design note
- Explain OS/language co-design
- Evaluate project claims honestly
- Prepare a capstone proposal

## Lesson

Latticra should be studied as a systems design project. That means it should be grounded in fundamentals rather than branding alone.

A serious systems project requires:

- Clear identity
- Clear scope
- Clear architecture
- Clear boundaries
- Clear documentation
- Clear tests
- Clear security posture
- Clear public claims

## OS/language co-design

An operating system and a programming language can shape each other.

An OS provides:

- Processes
- Files
- Permissions
- Devices
- System calls
- User interaction models

A language provides:

- Program structure
- Safety rules
- Runtime behavior
- Tooling
- Standard abstractions

Together, they can create a coherent computing environment.

## Documentation as engineering

Documentation is not decoration. In systems work, documentation records design intent, boundaries, usage, and evidence.

Good documentation answers:

- What exists?
- How do I use it?
- What does it not do yet?
- What has been tested?
- What are the risks?
- What is planned next?

## Latticra design note template

Use this template for future design work:

```md
# Design Note: Feature Name

## Purpose

What problem does this solve?

## User model

Who uses it and how?

## System model

What parts of the system are involved?

## Security model

What can go wrong and how is risk reduced?

## Evidence

What tests, demos, or examples support the claim?

## Current status

Built, prototype, design-only, or future work?

## Next steps

What should happen next?
```

## Practice

Write a design note for one Latticra-related feature:

- Command environment
- Programming language syntax
- Package or module system
- Filesystem model
- Security boundary
- Diagnostic tool
- Learning shell

## Final checkpoint

You complete the course when you can explain the full arc:

```text
logic → code → memory → machines → operating systems → languages → security → Latticra
```

in your own words, with examples.
