# Assignment 05 — Threat Model

## Goal

Practice security thinking by writing a simple threat model.

## System

Threat model a command-line notes program.

The program can:

- Create notes
- List notes
- Read notes
- Delete notes
- Store notes as files

## Threat model sections

Your threat model must include:

### 1. Assets

What needs protection?

Examples:

- Note contents
- File names
- User identity
- Configuration

### 2. Actors

Who interacts with the system?

Examples:

- Normal user
- Another local user
- Malicious script
- Broken plugin

### 3. Attack surfaces

Where can input or influence enter?

Examples:

- Command-line arguments
- Note text
- File paths
- Environment variables
- Configuration files

### 4. Failure modes

What could go wrong?

Examples:

- Reading the wrong file
- Overwriting important data
- Path traversal
- Leaking private notes
- Crashing on malformed input

### 5. Mitigations

How can risk be reduced?

Examples:

- Validate paths
- Confirm deletion
- Restrict note directory
- Escape output
- Check file permissions

### 6. Honest claims

Write three claims the project could honestly make after implementing mitigations.

## Completion checklist

- [ ] Assets listed
- [ ] Actors listed
- [ ] Attack surfaces listed
- [ ] Failure modes listed
- [ ] Mitigations listed
- [ ] Honest claims written
