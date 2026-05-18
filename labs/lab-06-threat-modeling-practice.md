# Lab 06 — Threat Modeling Practice

## Goal

Practice turning a small system description into a security model.

## System description

A command-line tool stores user notes in a local folder.

The tool supports:

- `new` to create a note
- `list` to show note names
- `read` to print a note
- `delete` to remove a note

## Step 1 — Assets

List what should be protected.

Examples:

- Note contents
- Note names
- Configuration
- User trust

## Step 2 — Inputs

List every place where the tool receives input.

Examples:

- Command names
- Note names
- Note text
- File paths
- Environment settings

## Step 3 — Failure cases

Write at least five ways the tool might behave incorrectly.

Examples:

- Reading outside the notes folder
- Deleting the wrong file
- Mishandling unusual characters
- Revealing private content
- Crashing on empty input

## Step 4 — Mitigations

For each failure case, write one mitigation.

## Step 5 — Honest claims

Write three claims that are specific and testable.

Example:

```text
The tool rejects note names containing path separators in the tested cases.
```

## Completion checklist

- [ ] Assets listed
- [ ] Inputs listed
- [ ] Failure cases listed
- [ ] Mitigations written
- [ ] Honest claims written
