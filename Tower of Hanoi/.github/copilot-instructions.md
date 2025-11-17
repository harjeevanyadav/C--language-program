# Copilot Instructions for Tower of Hanoi

## Project Overview
This is a simple C implementation of the classic **Tower of Hanoi puzzle solver**. The program recursively computes and prints the sequence of moves required to transfer N disks from one rod to another, following the constraint that larger disks cannot be placed on smaller disks.

## Architecture & Core Logic

### Algorithm Pattern
- **Recursive divide-and-conquer approach**: The `Towerofhanoi()` function solves by:
  1. Moving (n-1) disks from source to auxiliary rod
  2. Moving the nth disk to the destination rod
  3. Moving (n-1) disks from auxiliary to destination rod
- **Base case**: When n==1, move the disk directly and return

### Function Signature
```c
void Towerofhanoi(int n, char from, char to, char aux)
```
- `n`: number of disks to move
- `from`/`to`/`aux`: rod labels ('A', 'B', 'C')

## Build & Execution
- **Build**: Use a C compiler (e.g., `gcc pro1.c -o a.exe`)
- **Run**: Execute `./a.exe` from the command line
- **Output**: Prints move instructions (disk number, source rod, destination rod)

## Code Patterns & Conventions
- **Recursive termination**: Always check the base case first (n==1) to avoid infinite recursion
- **Rod representation**: Uses single character labels ('A', 'B', 'C') for rods
- **Debug output**: The code includes `N1` and `N2` print statements to trace recursion depth (can be removed for cleaner output)

## Entry Point
- **main()**: Sets disk count to 3, calls `Towerofhanoi(3, 'A', 'C', 'B')` to move 3 disks from rod A to rod C using B as auxiliary

## Key Implementation Details
- The algorithm correctly implements the mathematical solution: minimum moves = 2^n - 1 (for n=3, that's 7 moves)
- Parameter order matters: swapping the auxiliary and destination rods in recursive calls is crucial for correctness
- Simple, straightforward implementation with no external dependencies

## Common Modifications
- Change the starting disk count in `main()` (e.g., `int n=4;` for 4 disks)
- Remove debug print statements (`N1=` and `N2=` lines) for cleaner output
- Enhance with a disk-moving visualization or validation logic
