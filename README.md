# arrayWithInput
Problem Description:
Write a program that gets up to one hundred and twenty grades from the user, calculates and displays the average of the grades followed by a list of the grades that are below the average.

Use a sentinel of -999 to signal the end of input.

Use the following prompt to ask the user for the first grade. Note there is one space after the colon. You will read the input on the same line as the prompt.
```
Enter the first score or -999 to end input:
```
Store the grades entered in an int array that can store one-hundred and twenty grades. It is your responsibility to ensure that your program does not overfill the array.

When the user enters at least one grade, display the average rounded to exactly one-digit to the right of the decimal point after the label The average of the scores is:. Note there is one space after the colon. Follow this message with a newline character. Should the user enter the sentinel before they enter any grades, display the message No scores were entered. Follow this message with a newline character.

When the user enters at least two grades, display the list of grades entered that were below the average on a single line following the label The scores below the average were:. Note there is one space after the colon. Separate each grade with one space character. Follow the list of grades with a newline character.

Sample report #1 (entered scores were 123, 89, 95, 52, -999):
```
The average of the scores is: 89.8.
The scores below the average were: 89 52
```
Sample report #2 (entered scores were 77, -999):
```
The average of the scores is: 77.0.
```
Do not forget the newline at the end of the program.
