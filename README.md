# Maze-Game
C language mini Project

A simple console-based maze game written in C.  
The player navigates through a hidden 5×5 maze using keyboard commands, avoids obstacles and danger zones, and tries to reach the exit with enough points.

## Features

- 5×5 maze with a starting point and exit
- Hidden maze that reveals the player's position as `P`
- Movement using `W`, `A`, `S`, and `D`
- Boundary checking to prevent moving outside the maze
- Safe paths that allow the player to continue
- Obstacles that reduce points
- Danger zones that reduce more points
- Point-based winning condition
- Win or lose outcome based on the final score

## How the Game Works

The game starts with **100 points**.

The player begins at the starting position `S` and must reach the exit `E`.

### Movement

| Key | Movement |
|-----|----------|
| `W` | Move Up |
| `A` | Move Left |
| `S` | Move Down |
| `D` | Move Right |

### Maze Elements

| Symbol | Meaning |
|--------|---------|
| `S` | Starting point |
| `E` | Exit |
| `P` | Player's current position |
| `.` | Safe path |
| `#` | Obstacle |
| `D` | Danger zone |
| `?` | Unrevealed part of the maze |

### Scoring

- Starting points: **100**
- Hitting an obstacle (`#`): **-5 points**
- Entering a danger zone (`D`): **-10 points**
- Reaching the exit with **60 or more points** → **You Win**
- Reaching the exit with less than 60 points → **You Lose**

## How to Run

### 1. Compile the program

Using GCC:

```bash
gcc maze.c -o maze