# Guess the Number Game (C & Python)

An interactive, **stateful console-based Guess the Number game** implemented in C and later ported to Python.  
This project demonstrates strong programming fundamentals, control-flow design, and language-independent problem solving.

---

## Features

• Difficulty modes with attempt limits  
  - Easy (8 attempts)  
  - Medium (5 attempts)  
  - Hard (3 attempts)

• Endless Mode  
  - Unlimited rounds  
  - Tracks attempts per round  
  - Tracks total attempts across the session  
  - Displays a detailed session summary on exit  

• Case-insensitive input handling  
• Clean control flow with reusable logic  

---

## What I Learned

Through this project, I designed and implemented:

• Session-level vs round-level state management  
• Nested loop control flow for structured game progression  
• Runtime history tracking using arrays / lists  
• Function abstraction to eliminate duplicated logic  
• Proper random number generation practices  
• Translation of the same system from C to Python while preserving core logic  

The Python version was developed after the C implementation, following the same logical structure to demonstrate language-agnostic problem solving.

This project strengthened my ability to think in terms of **systems and control flow rather than language-specific syntax**.

---

## How to Run

### C Version
Compile the program using:
gcc guess.c -o guess

### Python Version
Run the main.py file 