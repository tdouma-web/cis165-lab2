# CIS-165 Lab 2
**Name:** Theo Douma
**Section:** CIS-165-W099

## Initial Plans
**sum.cpp:** I will store 50 and 100 in integer variables, add them together into a `total` variable, and print the result.
**mpg.cpp:** I will store 312 miles and 16 gallons in double variables, divide miles by gallons, store the result, and print it with units.

## Run Instructions
1. Go to onlinegdb.com (C++).
2. Paste the code from either file into the editor.
3. Click "Run" at the top to see the output.

## Test Table
| Program | Values used | Expected result | Actual output | Match |
| :--- | :--- | :--- | :--- | :--- |
| sum.cpp (assigned) | 50 and 100 | 150 | The sum of the numbers is: 150 | Yes |
| sum.cpp (changed) | 10 and 20 | 30 | The sum of the numbers is: 30 | Yes |
| mpg.cpp (assigned) | 312 miles; 16 gallons | 19.5 | The car gets 19.5 miles per gallon. | Yes |
| mpg.cpp (changed) | 400 miles; 12 gallons | 33.33 | The car gets 33.3333 miles per gallon. | Yes |

## Explanations
**sum.cpp:** I stored the calculation in a variable before printing because it makes the code easier to read and allows the total to be reused later.
**mpg.cpp:** I used `double` data types, so C++ calculates the exact decimal. If I used integer variables, C++ would drop the decimal completely, making the MPG inaccurate.


