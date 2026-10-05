*This project has been created as part of the 42 curriculum by vpoka.*

# CPP04 — Subtype Polymorphism, Abstract Classes, and Interfaces

A C++98 project from the 42 curriculum focused on subtype polymorphism, deep copies of objects that own memory, abstract classes, and interfaces implemented as pure abstract classes.

## Table of contents

- [Description](#description)
- [Instructions](#instructions)
- [Resources](#resources)
- [What this project demonstrates](#what-this-project-demonstrates)
- [Technical constraints](#technical-constraints)
- [Repository structure](#repository-structure)
- [Focus areas by exercise](#focus-areas-by-exercise)
- [Status](#status)

## Description

CPP04 is the fifth module of the 42 C++ sequence. It introduces subtype polymorphism — invoking derived-class behaviour through base-class pointers — and then moves on to abstract classes and interfaces, all in C++98 and without external libraries.

This module is split into four exercises:

* **ex00 — Polymorphism**
  Build a small `Animal` hierarchy (`Dog`, `Cat`) whose `makeSound()` is virtual, then repeat the experiment with a non-virtual `WrongAnimal`/`WrongCat` pair to see what breaks when dispatch is not dynamic.
* **ex01 — I don't want to set the world on fire**
  Give `Dog` and `Cat` a dynamically allocated `Brain` (an array of 100 ideas), make sure copies are deep, and delete an array of animals through base pointers without leaks.
* **ex02 — Abstract class**
  Make `Animal` impossible to instantiate by turning it into an abstract class, while everything else keeps working.
* **ex03 — Interface & recap**
  Implement a small materia system (`AMateria`, `Ice`, `Cure`, `Character`, `MateriaSource`) behind the pure-abstract interfaces `ICharacter` and `IMateriaSource`, with strict inventory and lifetime rules.

| Exercise | Executable | Key classes |
| --- | --- | --- |
| [ex00](ex00/) — Polymorphism | `ex00` | `Animal`, `Dog`, `Cat`, `WrongAnimal`, `WrongCat` |
| [ex01](ex01/) — I don't want to set the world on fire | `ex01` | + `Brain` |
| [ex02](ex02/) — Abstract class | `ex02` | abstract `Animal` (pure virtual `makeSound()`) |
| [ex03](ex03/) — Interface & recap | `ex03` | `AMateria`, `Ice`, `Cure`, `Character`, `MateriaSource` |

The subject notes that the module can be passed without exercise 03.

## Instructions

### Prerequisites

- A C++ compiler available as `c++`, supporting `-std=c++98`.
- GNU Make and standard Unix shell utilities. The Makefiles use `-Wall -Wextra -Werror -std=c++98`; no external libraries are required.

The repository does not specify minimum compiler or Make versions.

### Build

Run these commands from the repository root. Each exercise has its own Makefile; there is no root Makefile.

```bash
make -C ex00
make -C ex01
make -C ex02
make -C ex03
```

Object files go to each exercise's `build/` directory, and the executable is named after the exercise (`ex00/ex00`, `ex01/ex01`, and so on). Each Makefile provides `all`, `clean` (remove build files), `fclean` (also remove the executable), and `re` (rebuild):

```bash
make -C ex00 clean
make -C ex01 fclean
make -C ex02 re
```

All four also provide `run` (rebuild and execute the exercise's test program). `ex03` additionally provides `debug`, which rebuilds with `-DDEBUG` to enable the `DEBUG_MSG` traces defined in `ex03/include/debug.hpp`.

### Running the exercises

None of the executables take arguments; there is no configuration or environment variables. Each `main.cpp` is a self-contained test program for its exercise, so running an exercise means running its tests. The test output is colorised with ANSI escape codes. In ex00–ex02 every class prints a distinct message from each constructor and destructor, as the subject requires; in ex03 those messages appear only in the debug build.

### ex00 — Polymorphism

From the repository root:

```bash
make -C ex00 run
# or, equivalently:
make -C ex00 && ./ex00/ex00
```

The test prints the type and sound of each class (`Animal`, `Dog`, `Cat`, then `WrongAnimal` and `WrongCat`). The two hierarchies differ in one key way: `Animal::makeSound()` is virtual, so calls through an `Animal*` reach the derived sound, while `WrongAnimal::makeSound()` is not — a `WrongCat` accessed through a `WrongAnimal*` keeps printing the `WrongAnimal` sound, which is the effect the subject asks to observe.

### ex01 — I don't want to set the world on fire

From the repository root:

```bash
make -C ex01 run
# or, equivalently:
make -C ex01 && ./ex01/ex01
```

The test creates an array of four animals (two `Dog`, two `Cat`), plays their sounds, and deletes them through `Animal*` pointers. It then copies a `Dog` whose `Brain` holds the idea `Chase ball`, deletes the original, and reads the idea back from the copy to show the copy is deep.

### ex02 — Abstract class

From the repository root:

```bash
make -C ex02 run
# or, equivalently:
make -C ex02 && ./ex02/ex02
```

The tests are the same as in ex01, but `Animal` now declares `makeSound()` as pure virtual and keeps its constructors protected, so `Animal a;` (commented out in `ex02/src/main.cpp`) no longer compiles. The `WrongAnimal`/`WrongCat` classes are carried over from the previous exercises.

### ex03 — Interface & recap

From the repository root:

```bash
make -C ex03 run
# or, equivalently:
make -C ex03 && ./ex03/ex03
```

The test runs four scenarios: the subject's standard sample (printing `* shoots an ice bolt at bob *` and `* heals bob's wounds *`), a deep-copy test of `Character`, a full-inventory test (a fifth `equip()` changes nothing), and an `unequip()` test where the dropped materia is deleted manually by the caller. For constructor/destructor traces of the materia classes, use the debug build:

```bash
make -C ex03 debug
```

## Resources

- **Subject, *C++ — Module 04: Subtype Polymorphism, Abstract Classes, and Interfaces* (version 12.0)** — supplied alongside the module repositories in the parent directory of this checkout (`42_subject_cpp04.pdf`). It is authoritative for the requirements and expected output.
- **cppreference:** [virtual functions](https://en.cppreference.com/w/cpp/language/virtual), [abstract classes](https://en.cppreference.com/w/cpp/language/abstract_class), and [destructors](https://en.cppreference.com/w/cpp/language/destructor) (virtual destructor rules). Consult the C++98 behavior when reading modern documentation.
- **GNU Make manual** — targets, variables, and automatic dependency generation: <https://www.gnu.org/software/make/manual/make.html>
- **ISO/IEC 14882:1998 (C++98)** — the language standard this module is written against.

### AI usage

AI was used to help write and improve this README and project documentation, prepare commits, and, where output or data visualisation is more complex, tweak that output.

## What this project demonstrates

* Subtype polymorphism: derived-class behaviour invoked through base-class pointers and references
* How a missing `virtual` changes dispatch (the `WrongAnimal`/`WrongCat` pair)
* Deep copies of objects that own dynamically allocated members (`Brain`)
* Abstract classes with pure virtual functions that cannot be instantiated
* C++98 "interfaces" built as pure abstract classes (`ICharacter`, `IMateriaSource`)
* Manual memory discipline across inventories, clones, and dropped materias
* Orthodox Canonical Form on every class, with distinct constructor/destructor messages

## Technical constraints

This project is developed under the 42 C++ module rules:

* Standard: **C++98** — code compiles with `c++` and `-Wall -Wextra -Werror`, and still compiles with `-std=c++98`
* No external libraries: C++11 (and later) features and Boost are forbidden, as are `*printf()`, `*alloc()`, and `free()`
* `using namespace` and `friend` are forbidden unless an exercise explicitly allows them
* The STL (containers and algorithms) is not allowed before Modules 08 and 09 — this module uses none
* Classes follow the **Orthodox Canonical Form**, and allocated memory must not leak
* No function implementations in headers (templates aside); every header is self-contained with include guards
* Output messages end with a newline and go to standard output

## Repository structure

```text
cpp04/
├── README.md
├── ex00/   # Polymorphism: Animal, Dog, Cat, WrongAnimal, WrongCat
│   ├── include/   # one header per class + main.hpp
│   ├── src/       # class implementations + main.cpp test driver
│   └── Makefile
├── ex01/   # ex00 + Brain, owned by Dog and Cat (deep copies)
├── ex02/   # ex01 with Animal turned into an abstract class
└── ex03/   # Materia system: AMateria, Ice, Cure, Character, MateriaSource
    ├── include/   # + ICharacter.hpp, IMateriaSource.hpp, debug.hpp
    ├── src/       # + main.cpp with four test scenarios
    └── Makefile   # also provides the `debug` target
```

## Focus areas by exercise

### ex00 — Polymorphism

* virtual member functions and dynamic dispatch
* protected attributes with getters/setters
* contrasting static binding in `WrongAnimal`
* distinct constructor/destructor messages

### ex01 — I don't want to set the world on fire

* heap-allocated `Brain` owned by `Dog` and `Cat`
* deep copy constructors and assignment operators
* deleting derived objects through base pointers (virtual destructor)
* array lifetime management without leaks

### ex02 — Abstract class

* pure virtual member functions
* protected constructors to block direct instantiation
* keeping the derived classes working unchanged

### ex03 — Interface & recap

* pure abstract interfaces (`ICharacter`, `IMateriaSource`)
* `clone()`-based copying of materias
* 4-slot character inventories and 4-materia sources, failing silently on overflow
* `unequip()` without deletion, with caller-owned dropped materias
* deep copy of a `Character`'s inventory

## Status

* **Status:** Completed
* **Final grade:** **97/100 points**
