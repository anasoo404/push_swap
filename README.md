*This project has been created as part of the 42 curriculum by asmaili.*

# push_swap

## Description
push_swap is an algorithmic project that sorts integers using two stacks (A and B) with a restricted set of operations (sa/sb/ss, pa/pb, ra/rb/rr, rra/rrb/rrr). The goal is to output a sequence of moves as short as possible for given inputs.

## Instructions
- Requirements: `cc` (clang/gcc), Make, a POSIX environment.
- Build:
  - `make` builds `push_swap`
  - `make clean` removes objects
  - `make fclean` removes binary and objects
  - `make re` rebuilds from scratch
- Run:
  - `./push_swap 2 1 3 6 5 8`
  - Output is the list of operations to sort stack A.
- Check with the official checker (if available) or your own validator.

## Usage
- Input: space-separated integers (duplicates and non-integers must be handled with errors).
- Output: operations, one per line (no extra spaces, no trailing newline issues).
- Complexity targets (typical expectations):
  - Small sets (<=3, <=5) use dedicated strategies.
  - Larger sets use chunk/radix or indexed approaches with optimized rotations.

## Technical Choices
- Parsing: strict validation (int range, duplicates, formatting).
- Data structures: linked lists for stacks (A/B), indexes for normalized values.
- Algorithms:
  - Base cases (3/5 elements minimal moves).
  - For big inputs: radix (LSD) or chunked greedy rotations to minimize total ops.
- Error handling: print `Error` and exit on invalid input.
- Code style: 42 Norm.

## Resources
- Documentation:
  - 42 subject PDF (push_swap)
  - man pages: `man 3 atoi`, `man 3 write`
  - Articles on stack-based sorting and radix sort
- AI usage:
  - Tasks: Makefile dependency tips, README structuring, and quick comparisons of sorting strategies.
  - Parts: Assisted with wording and Makefile patterns; all algorithm design and code are authored manually.
