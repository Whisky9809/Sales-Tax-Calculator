# Sales-Tax-Calculator
This command-line program calculates the amount of sales tax that needs to be applied to a given price. It can calculate the sales tax for two percentages (6.25%, 8.25%) as well as a custom percentage provided as an additional argument. The program then prints out the tax percentage, the total cost, and the tax surcharge for each of the tax percentages.

The two percentages, 6.25% and 8.25%, were chosen because the minimum sales tax in Texas is 6.25%, while cities and counties are able to add an additional two percent, resulting in the maximum possible sales tax of 8.25%.
 
This program does not test for edge cases and does not check for data that falls outside of the typical input. If unexpected data is given, the code may not handle it correctly, and errors may occur.

## How to Compile this Program (on Unix-like Environments)
Before beginning, you must have GCC (GNU Compiler Collection) installed properly on your computer.
1. Open your terminal.
2. Navigate to the directory where the file is saved at.
3. Type: `gcc tax.c -o tax`
4. It should create a unix executable file, named *tax*, in the same directory as the source code file.

## How to Use this Program (on Unix-like Environments)
1. Open your terminal
2. Navigate to the directory containing the tax program.
3. Type: `./tax [price] [optional percentage]`
4. Replace `[price]` with the price of the good or service you are considering.
5. Replace `[optional percentage]` with a custom percentage if you want to see another percentage calculated. *This is not required to run properly.*
6. The program will calculate the tax and display the result.

## Example
Type: `./tax 59.99` in the terminal.

Output should be:
```
TAX PERCENTAGE	│ TOTAL 	│ TAX SURCHARGE
────────────────┼───────────────┼──────────────
  8.25%		│ $64.94 	│ $4.95
  6.25%		│ $63.74 	│ $3.75
```
