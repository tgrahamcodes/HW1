#### CS 2303
#### Systems Programming Concepts
#### Spring 2019
## Assignment 1

**Note**

Except for sharing code, you are encouraged to communicate in any form with other classmates

on this assignment. The code is to be your individual work.

**Goals**

1. Become familiar with programming in C
2. Become familiar with test-driven development
3. Learn how to read input from the command line and from the console and to format
    output for the console.
4. Review basic variables, control structures, loops
5. Practice programming logic

**Task**

In this assignment you will create a program to generate a Calendar for a given year. This
program will take the year number as a program argument. If no program arguments are
specified, the program will ask the user to enter a year number instead. A Calendar will be
generated and output based on the year number (See Figure 1). The Calendar output should look
exactly like the one in the figure, including all formatting and spacing.

This program will be broken up into several sub-tasks, which will be done using functions. The
specifications for each function are listed below. Your main program should use these functions
when generating the calendar.

You will be provided an Autograder, to help you check your work, prior to submission.


**Function List**

is_leap_year

```
Description:
```
```
This function determines if a given year is a leap year. The modern rule for leap years
came into effect with the Gregorian Calendar, which was not adopted in the colonies
which later formed the United States until 1752. Therefore if the year entered is less than
1752, the function should return -1. A year is considered a leap year if it is divisible by
four. If the year is divisible by 100 it is not considered a leap year unless it is also
divisible by 400.
```
```
Parameters:
```
```
int year_number: The year number.
```
```
Return Value:
```
```
An integer representing if the given year is a leap year. Returns 0 is the year is
not a leap year, 1 if the year is a leap year, and -1 if the year was less than 1752.
```
calculate_days_in_month

```
Description:
```
```
This function calculates the number of days for a given month (in a given year). You
may lookup how many days each month has.
```
```
Parameters:
```
```
int year_number: The year number.
```
```
int month_number: The month number. January is 0.
```
```
Return Value:
```
```
Return an integer for the number of days in the month. Return -1 for any invalid
input (including if the year was < 1752).
```

calculate_day_of_week

```
Description:
```
```
See Wikipedia, https://en.wikipedia.org/wiki/Determination_of_the_day_of_the_week
```
```
This webpage has a worked example; you might benefit from checking it.
```
```
The description is reproduced here for your convenience:
```
**Disparate variation** [edit]

Takes in an integer year, an integer day, and an integer month.

```
Parameters:
```
```
int day_of_month: The day of the month
```
```
int month_number: The month number. January is 0.
```
```
int year_number: The year number.
```
Return Value:

```
Return an integer to represent the day of the week. Sunday is 0. Return -1 for all
invalid input (including if the year was < 1752).
```
```
w = (d + floor(2.6*m -0.2) + y + floor(y/4) + floor (c/4) -2c ) mod 7
```
```
where
```
- _Y_ is the year minus 1 for January or February, and the year for any other month
- _y_ is the last 2 digits of Y
- _c_ is the first 2 digits of Y
- _d_ is the day of the month (1 to 31)
- _m_ is the shifted month (March=1,...,February=12)
- _w_ is the day of week (0=Sunday,...,6=Saturday). If w is negative you have to add 7 to it.


```
Files
```
You should have a .c source file containing the main function for your program. It must be
named “HW1.c”. In addition to this file you must have the following files named exactly as
shown. These additional files will be used for testing the individual functionality of each
function. Excepting HW1.c, you should have a .h file for each .c file. Use the starter files archive
given to you on Canvas for HW1, import it into Eclipse, and extend the code. Remember to
submit a project that compiles and runs. Partial credit can be earned for partially completed
work, so long as it compiles and runs (which the starter files do). Don’t forget to include the
library m, so that there is code for the floor function.

test.c, test.h

Retain these files. You might not have needed to change it at all.

production.c, production.h

```
Update the “is_leap_year” function. Include any constants above the function if they are
needed inside the function. Also include all necessary #include statements.
```
```
Update the “calculate_days_in_month” function. Include any constants above the
function if they are needed inside the function. Also include all necessary #include
statements.
```
```
Update the “calculate_day_of_week” function. Include any constants above the function
if they are needed inside the function. Also include all necessary #include statements.
```

