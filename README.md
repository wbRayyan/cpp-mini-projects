# C++ Mini Projects Suite

A curated repository of modular, production-ready C++ reference implementations and foundational utilities. Designed as an open-source architecture showcase demonstrating modern C++ standards, functional separation, memory safety, and robust software design principles.

---

## Projects Index

| # | Project Name | Architecture & Key Concepts | Directory |
|---|---|---|---|
| 01 | **Modular Calculator** | Pure Functions, Deterministic I/O, Pass-by-Value Semantics, Scope Isolation | [`01-modular-calculator`](./01-modular-calculator/) |

---

## 01. Modular Calculator

A console-based arithmetic engine designed to showcase clean software engineering practices and zero global state.

### Key Highlights
- **Deterministic Worker Functions:** Arithmetic logic decoupled from I/O operations for predictable execution.
- **Defensive Engineering:** Explicit handling for edge cases, including runtime division-by-zero protection.
- **Memory Safety:** Strict local scoping and pass-by-value data isolation avoiding side effects.

### Compilation & Execution
```bash
cd 01-modular-calculator
g++ -std=c++17 main.cpp -o calc
./calc
