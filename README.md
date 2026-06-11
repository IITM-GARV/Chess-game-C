# Chess Game in C

A console-based Chess Game developed in C as part of a programming course project. The game allows two players to play chess in the terminal using coordinate-based piece movement.

## Features

- 8×8 chess board implementation using 2D arrays
- Turn-based gameplay for two players
- Chess piece representation using characters
- Board display in the terminal
- King-capture win condition
- Modular implementation using functions

## Concepts Used

- C Programming
- 2D Arrays
- Functions
- Loops
- Conditional Statements
- Matrix Traversal

## Project Structure

```
chess_game.c
README.md
LICENSE
```

## How to Run

### Compile

```bash
gcc chess_game.c -o chess
```

### Run

```bash
./chess
```

## Game Rules

- White pieces are represented using uppercase letters.
- Black pieces are represented using lowercase letters.
- Players take turns entering moves using board coordinates.
- The game ends when one player's king is captured.

### Example Move

```
1 4 3 4
```

This moves a piece from row 1, column 4 to row 3, column 4.

## Future Improvements

- Move validation
- Check and checkmate detection
- Castling
- Pawn promotion
- En passant
- AI opponent
- Graphical User Interface (GUI)

## Author

Garv

Course Project- ED1021:Introduction to Computation and Visualization – IIT Madras
