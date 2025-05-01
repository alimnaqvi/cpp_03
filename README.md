# C++ Module 03: Inheritance

[![C++ Programming](https://img.shields.io/badge/Language-C++-blue.svg)](https://en.wikipedia.org/wiki/C%2B%2B)
[![Makefile](https://img.shields.io/badge/Build-Make-brightgreen.svg)](https://www.gnu.org/software/make/)

This project is part of the C++ modules at 42 School. The focus of this module is to explore and implement various aspects of class inheritance in C++, including polymorphism, virtual functions, and the challenges of multiple inheritance like the diamond problem.

## Project Overview

The primary goal of this module is to gain a deep understanding of how inheritance works in C++ and how it enables code reuse and polymorphism. Starting with a simple base class `ClapTrap`, the exercises progressively build upon it by creating derived classes (`ScavTrap`, `FragTrap`) with specialized functionalities. The final exercise tackles the complexities of multiple inheritance and the "diamond problem" by implementing a `DiamondTrap` class.

## Exercises

### Exercise 00: Aaaaand... OPEN! (`ClapTrap`)

*   **Task:** Implement the base `ClapTrap` class.
*   **Description:** This exercise focuses on creating a fundamental class representing a robot character. It involves defining its core attributes (Hit Points, Energy Points, Attack Damage) and actions (`attack`, `takeDamage`, `beRepaired`). Emphasis is placed on understanding class construction (default, parameterized, copy), destruction, the copy assignment operator (Orthodox Canonical Form), and basic member function implementation.
*   **Files:** `ClapTrap.h`, `ClapTrap.cpp`, `main.cpp`, `Makefile` (for `claptrap`)

### Exercise 01: Serena, my love! (`ScavTrap`)

*   **Task:** Implement `ScavTrap` inheriting from `ClapTrap`.
*   **Description:** This exercise introduces single, public inheritance. `ScavTrap` derives from `ClapTrap`, inheriting its members but also defining its own characteristics (different default stats) and functionalities (`guardGate`). Key concepts explored include:
    *   The `is-a` relationship modeled by public inheritance.
    *   How derived class constructors initialize the base class part.
    *   The order of constructor and destructor calls in an inheritance chain.
    *   Polymorphism: Demonstrating that a `ClapTrap*` can point to a `ScavTrap` object.
    *   The importance of a `virtual` destructor in the base class (`ClapTrap`) to ensure correct cleanup when deleting derived objects through base pointers.
    *   Using the `override` keyword for virtual functions (like the destructor).
*   **Files:** `ClapTrap.h/cpp`, `ScavTrap.h`, `ScavTrap.cpp`, `main.cpp`, `Makefile` (for `scavtrap`)

### Exercise 02: Repetitive work (`FragTrap`)

*   **Task:** Implement `FragTrap` inheriting from `ClapTrap`.
*   **Description:** Similar to Exercise 01, this involves creating another class, `FragTrap`, that inherits from `ClapTrap`. It further reinforces the concepts of inheritance and polymorphism by adding another distinct robot type with its unique action (`highFivesGuys`) and stats. This exercise encourages applying the DRY (Don't Repeat Yourself) principle by leveraging the common `ClapTrap` base. It also prepares for the next exercise by potentially introducing `virtual` inheritance early (as seen in the provided `FragTrap.h`).
*   **Files:** `ClapTrap.h/cpp`, `ScavTrap.h/cpp` (often included for completeness), `FragTrap.h`, `FragTrap.cpp`, `main.cpp`, `Makefile` (for `fragtrap`)

### Exercise 03: Now it’s weird! (`DiamondTrap`)

*   **Task:** Implement `DiamondTrap` inheriting from both `ScavTrap` and `FragTrap`.
*   **Description:** This exercise dives into the complexities of multiple inheritance and the classic "Diamond Problem". `DiamondTrap` inherits from `ScavTrap` and `FragTrap`, both of which inherit from `ClapTrap`. This creates ambiguity regarding the `ClapTrap` base subobject. Key concepts include:
    *   Understanding how multiple inheritance works syntactically.
    *   Identifying the Diamond Problem: Multiple paths to a common base class (`ClapTrap`) lead to potential ambiguity and redundant members.
    *   Solving the Diamond Problem: Using `virtual` inheritance (`virtual public ClapTrap`) in the intermediate base classes (`ScavTrap`, `FragTrap`) ensures that `DiamondTrap` contains only one instance of the `ClapTrap` base subobject.
    *   Managing constructor initialization order and explicit calls in complex hierarchies.
    *   Handling member name clashes: `DiamondTrap` needs its own `name` attribute and explicitly uses the `ClapTrap` name attribute (via `ClapTrap::getName()`) often initialized with a suffix (`_clap_name`).
    *   Resolving function ambiguity: Deciding which inherited function to use (e.g., `DiamondTrap::attack` calls `ScavTrap::attack`).
    *   Implementing unique functionality (`whoAmI`) that showcases the relationship between the different names within the object.
*   **Files:** All previous `.h/.cpp` files, `DiamondTrap.h`, `DiamondTrap.cpp`, `main.cpp`, `Makefile` (for `diamondtrap`)

## Key Concepts Learned

Throughout these exercises, the following C++ concepts are explored and applied:

*   **Class Definition:** Creating classes with attributes (member variables) and behaviors (member functions).
*   **Object Instantiation:** Creating objects from class blueprints.
*   **Constructors & Destructors:** Understanding their roles, different types (default, parameterized, copy), and execution order, especially in inheritance.
*   **Copy Semantics:** Implementing the copy constructor and copy assignment operator (Rule of Three/Five/Zero).
*   **Encapsulation:** Controlling access to members using `public`, `protected`, and `private`.
*   **Inheritance:**
    *   **Single & Multiple Inheritance:** Deriving classes from one or more base classes.
    *   **Public Inheritance:** Modeling the `is-a` relationship.
    *   **Constructor Initialization Lists:** Properly initializing base class subobjects and member variables.
*   **Polymorphism:**
    *   **Base Class Pointers/References:** Referring to derived class objects through base class interfaces.
    *   **Virtual Functions:** Enabling dynamic dispatch (runtime polymorphism) to call the appropriate derived class method.
    *   **`override` Keyword:** Ensuring a function is indeed overriding a base class virtual function.
    *   **Virtual Destructors:** Crucial for preventing resource leaks when dealing with polymorphism and dynamic allocation.
*   **The Diamond Problem:** Understanding the ambiguity arising from multiple inheritance paths to a common base class.
*   **Virtual Inheritance:** Using the `virtual` keyword during inheritance (`class Derived : virtual public Base`) to resolve the Diamond Problem.
*   **Scope Resolution Operator (`::`):** Accessing members from specific base classes or namespaces.

## Implementation Details

*   The project uses **C++17**.
*   **Orthodox Canonical Form (OCF)** is implemented for each class (Default Constructor, Copy Constructor, Destructor, Copy Assignment Operator).
*   `ClapTrap` features a **`virtual` destructor**, essential for correct polymorphic behavior when using heap-allocated objects.
*   `ScavTrap` and `FragTrap` use **`virtual public` inheritance** from `ClapTrap` to prepare for and correctly implement the `DiamondTrap` in Exercise 03, solving the Diamond Problem.
*   `DiamondTrap` demonstrates explicit management of **member initialization** (calling the `ClapTrap` constructor directly) and **name ambiguity** (having its own `mName` while also accessing the `ClapTrap` name). It also explicitly chooses which `attack` function to inherit/use (`ScavTrap::attack`).
*   Each exercise includes a `main.cpp` demonstrating the functionality and interactions of the implemented classes.
*   Makefiles are provided for easy compilation of each exercise.

## Build Instructions

Each exercise should be compiled separately.

1.  **Navigate** to the directory containing the files for a specific exercise (e.g., `ex00/`, `ex01/`, etc.).
2.  **Compile** the project using the `make` command:
    ```bash
    make
    ```
3.  This will generate an executable file named according to the `NAME` variable in the Makefile (`claptrap`, `scavtrap`, `fragtrap`, or `diamondtrap`).

**Other useful make commands:**

*   `make clean`: Removes intermediate object files (`.o`).
*   `make fclean`: Removes object files and the final executable.
*   `make re`: Performs `fclean` followed by `make`.

## Usage

After successfully building an exercise, run the generated executable from your terminal:

```bash
./claptrap      # For Exercise 00
./scavtrap      # For Exercise 01
./fragtrap      # For Exercise 02
./diamondtrap   # For Exercise 03
```

The program will output messages to the console demonstrating the creation, actions (attacking, repairing, taking damage, special abilities), and destruction of the robot objects, as defined in the respective `main.cpp` file. Observe the constructor/destructor messages and action outputs to understand the flow and interactions.
