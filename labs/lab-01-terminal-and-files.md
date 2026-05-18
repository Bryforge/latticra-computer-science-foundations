# Lab 01 — Terminal and Files

## Goal

Learn how to navigate a filesystem and create simple text files from the terminal.

## Commands

Practice these commands:

```sh
pwd
ls
cd
mkdir
touch
cat
cp
mv
rm
```

## Tasks

Create a lab folder:

```sh
mkdir -p ~/latticra-cs-foundations/labs/lab-01
cd ~/latticra-cs-foundations/labs/lab-01
```

Create a file:

```sh
echo "Computer science studies computation, structure, and systems." > note.txt
cat note.txt
```

Copy and rename it:

```sh
cp note.txt note-copy.txt
mv note-copy.txt systems-note.txt
ls
```

## Reflection

Answer:

> Why are files and directories foundational to operating systems?

## Completion checklist

- [ ] Created a lab folder
- [ ] Created a text file
- [ ] Read file contents
- [ ] Copied a file
- [ ] Renamed a file
- [ ] Wrote reflection
