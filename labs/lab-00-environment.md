# Lab 00 — Environment Check

## Goal

Confirm that your computer is ready for the course.

## Steps

Open a terminal and run:

```sh
pwd
ls
git --version
cc --version
```

If `cc --version` does not work, try:

```sh
clang --version
gcc --version
```

## Create a workspace

```sh
mkdir -p ~/latticra-cs-foundations
cd ~/latticra-cs-foundations
mkdir notes labs assignments
```

## Create your first note

```sh
cat > notes/module-00.txt <<'EOF'
Latticra — Foundations of Computer Science
Module 0 notes

What I want to understand:
EOF
```

## Completion checklist

- [ ] Terminal commands run successfully
- [ ] Git version confirmed
- [ ] C compiler checked
- [ ] Workspace folder created
- [ ] First note created
