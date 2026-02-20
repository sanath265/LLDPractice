# Snake and Ladder Game

## Problem Statement

Design a **Snake and Ladder Game** that supports multiple players on a configurable board.

## Requirements

1. The board has **100 cells** (configurable).
2. The board has a set of **snakes** (head → tail, moves player down) and **ladders** (bottom → top, moves player up).
3. The game supports **2 or more players**, who take turns.
4. On each turn, a player **rolls a dice** (standard 6-sided, or configurable).
5. Movement rules:
   - Move forward by the dice value.
   - If the player lands on a **snake head**, they slide down to the snake's tail.
   - If the player lands on a **ladder bottom**, they climb up to the ladder's top.
   - A player must roll the **exact number** to reach cell 100 (or the last cell). If the roll overshoots, the player stays in place.
6. The first player to reach the **last cell** wins.
7. The game should **display** the board state and announce the winner.

## Key Classes to Implement

- `Player` — Represents a player with name and current position.
- `Dice` — Rolls and returns a random value.
- `Snake` — Represents a snake with head and tail positions.
- `Ladder` — Represents a ladder with bottom and top positions.
- `BoardEntity` — Base class for Snake and Ladder (or use an interface).
- `Cell` — Represents a cell on the board. May contain a snake or ladder.
- `Board` — The game board containing cells, snakes, and ladders.
- `Game` — Main game controller managing turns, players, and win condition.
- `GameStatus` — Enum (IN_PROGRESS, FINISHED).

## Design Patterns to Consider

- **Template Method** — Game loop structure.
- **Strategy** — Dice strategy (normal, weighted, multiple dice).
- **Factory** — Board entity creation.

## Evaluation Criteria

- Correct use of OOP principles (Encapsulation, Inheritance, Polymorphism).
- Extensibility — easy to add new board entities (e.g., power-ups) or dice types.
- Clean game loop and turn management.
- Proper use of design patterns.
