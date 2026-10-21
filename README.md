# Hello Project

A minimal C++ project demonstrating clean separation of concerns, CMake, GoogleTest, and GitHub Actions CI.

## Build

```bash
cmake -S . -B build
cmake --build build
./build/hello_app
```

## Test
```bash
ctest --test-dir build --output-on-failure
```
