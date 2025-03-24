# Simple Union Find Algorithm Implementation in C++

Union Find is a basic algorithm built on using array, combining two operations 1) union and 2) find.

## Introduction

This is a simple implementation using sit-indexed array `id[]`. This is implemented as a practice for to further my understanding on graph's depth first search as their ideas are somewhat related.

## Quick Union Find

TODO: what is quick union / find

## To run the code

```bash
cmake -S . --preset=debug -B build
```

or

```bash
cmake -S . --preset=release -B build
```

then run

```bash
cmake --build build
```

or

```bash
cd build && ninja clean && ninja
```

and executable will exist in the `build/` directory.

to generate compile_commands.json file for clangd LSP, use

```bash
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 .. --preset=${PRESET_NAME}

cd ${ROOT_DIRECTORY}

ln -s build/compile_commands.json
```
