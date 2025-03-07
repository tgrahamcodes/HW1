# Programming Assignment #1 — Calendar Generator in C

## Overview
This assignment involves creating a **calendar generator** in C that outputs a formatted calendar for a given year. The program will determine leap years, calculate the number of days in a month, and find the day of the week for any given date.

## Features
- Determines if a given year is a **leap year**.
- Calculates the **number of days in a month**.
- Computes the **day of the week** for a given date.
- Accepts input via **command-line arguments** or user input.
- Outputs a **formatted calendar**.

## Prerequisites
- A C compiler (e.g., `gcc`)
- Standard C libraries
- Linux or macOS (or Windows with WSL)

## Installation
1. Clone the repository:
   ```sh
   git clone https://github.com/your-repository/HW1.git
   cd HW1
   ```
2. Compile the program:
   ```sh
   gcc -o HW1 src/*.c -lm -Wall -Wextra
   ```

## Usage
Run the program with:
```sh
./HW1 [year]
```
- If a **year** is provided as a command-line argument, the program will use it.
- If no year is provided, the program will prompt the user for input.

### Example
```sh
./HW1 2025
```
This generates and displays the calendar for **2025**.

## Implementation Details
### `is_leap_year(int year)`
- Determines whether a year is a **leap year**.
- Returns `1` for leap years, `0` for non-leap years, and `-1` for years before **1752**.

### `calculate_days_in_month(int year, int month)`
- Returns the number of days in a given **month and year**.
- Accounts for **leap years**.

### `calculate_day_of_week(int day, int month, int year)`
- Uses **Zeller’s Congruence** to determine the day of the week for a given date.
- Returns `0` for **Sunday**, `1` for **Monday**, etc.

## Testing
- The project includes **unit tests** in `test.c`.
- Run tests with:
  ```sh
  gcc -o test test.c production.c -lm -Wall -Wextra
  ./test
  ```
- The program also provides an **Autograder** (`Autograder.py`) for validation.

## Example Output
```
      January 2025      
  Su Mo Tu We Th Fr Sa  
      1  2  3  4  5  6  
   7  8  9 10 11 12 13  
  14 15 16 17 18 19 20  
  21 22 23 24 25 26 27  
  28 29 30 31           
```

## Additional Notes
- The program follows **test-driven development** (TDD).
- Input validation is enforced to handle **invalid years and months**.
- The program includes modular functions for **reuse and clarity**.
