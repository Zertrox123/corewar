# Corewar

Virtual machine, process scheduler, and bytecode assembler in C.

## Overview

Simulates a circular memory arena (6 KB) where multiple champion programs execute compiled assembly bytecode instructions concurrently.

## Getting Started

### Prerequisites
- GCC / Clang
- Make

### Build & Run

```bash
# Build the virtual machine and assembler
make

# Compile an assembly champion
./asm/asm champion.s

# Run the arena battle
./corewar/corewar champion1.cor champion2.cor
```
