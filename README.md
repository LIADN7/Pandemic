# Pandemic – C++ Simulation (Single Player)

This project is a C++ simulation of the **Pandemic** board game, focused on a single-player experience. The implementation includes core game mechanics, player roles with unique abilities, and a fully interactive game board system.

## Features

- **Game Board System**
  - Representation of 48 interconnected cities, each with a color (Blue, Yellow, Black, Red).
  - Management of disease levels per city.
  - Support for research stations and discovered cures.
  
- **Player Mechanics**
  - Full implementation of all player actions: movement, card usage, disease treatment, cure discovery, and station building.
  - Card management system for drawing, using, and discarding city cards.
  - Proper error handling for invalid moves.

- **Player Roles**
  - Support for all special roles (e.g. Medic, Scientist, Researcher, Dispatcher, etc.), each with their own rule-altering capabilities.
  
- **Testing and Validation**
  - Compliant with provided test suite.
  - Supports the following commands:
    ```bash
    make test && ./test
    make tidy
    make valgrind
    ```

## Code Structure

- `Board` – Manages cities, diseases, cures, and stations.
- `Player` – Base class for player actions and state.
- Role-specific classes: `Medic`, `Scientist`, `Dispatcher`, etc., all inheriting from `Player`.

## Notes

- The code is written in modern C++.
- Designed for clarity, maintainability, and extensibility.
- Implemented independently for educational purposes.

## Screenshot

![Game Map](https://media.wnyc.org/i/1500/900/c/80/1/1537_Pandemic_main.jpg)

---

*Project developed as part of an academic exercise.*
