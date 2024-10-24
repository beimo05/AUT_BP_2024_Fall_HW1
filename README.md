<h1 align="center">
<strong>AUT_BP_2024_Fall Homework 1</strong>
</h1>

<p align="center">
<strong> Deadline: 11th of Aban - Friday - 23:59 o'clock</strong>
</p>

---

## Instructions

-   **Submission Method**: Submit your `.c` source files via your account at [courses.aut.ac.ir](courses.aut.ac.ir).
-   **File Naming Convention**: Zip everything and for naming, use this template. `StudentNumber_HW1.zip`
-   **Plagiarism Notice**: All submissions must be your own work. Plagiarism will result in disciplinary action.

---

## Table of Contents

1. [Sign of a Number](#1-sign-of-a-number)
2. [Simple Calculator](#2-simple-calculator)
3. [Triangle Type Checker](#3-triangle-type-checker)
4. [Quadrant Finder](#4-quadrant-finder)
5. [Currency Denomination Calculator](#5-currency-denomination-calculator)
6. [Distance Between Two Points](#6-distance-between-two-points)

---

## 1. Sign of a Number

### Description

Write a C program that determines whether a given number is **positive**, **negative**, or **zero**. The program should prompt the user to enter a number and then display a message indicating the sign of the number.

### Example Input/Output

**Example 1**

```

Enter a number: 25
The number is positive.

```

**Example 2**

```

Enter a number: -7.5
The number is negative.

```

**Example 3**

```

Enter a number: 0
The number is zero.

```

### Edge Cases and Pitfalls

-   **Zero**: Ensure your program correctly identifies zero as neither positive nor negative.
-   **Floating-Point Numbers**: The program should handle both integers and floating-point numbers.
-   **Invalid Input**: You may assume that the user enters a valid number. Handling invalid inputs is not required for this assignment.

---

## 2. Simple Calculator

### Description

Create a C program that functions as a simple calculator. The program should:

-   Prompt the user to enter two numbers.
-   Ask the user to choose an arithmetic operation: **addition (+)**, **subtraction (-)**, **multiplication (\*)**, or **division (/)**.
-   Perform the chosen operation and display the result.

### Example Input/Output

**Example 1**

```

Enter first number: 10
Enter second number: 5
Enter an operator (+, -, _, /): _
Result: 10 - 5 = 5

```

**Example 2**

```

Enter first number: 7
Enter second number: 0
Enter an operator (+, -, *, /): /
Error: Division by zero.

```

### Edge Cases and Pitfalls

-   **Division by Zero**: The program should check for division by zero and display an appropriate error message.
-   **Invalid Operator**: If the user enters an invalid operator, the program should inform the user.
-   **Input Validation**: You can assume that the user enters valid numbers and a valid character for the operator.

---

## 3. Triangle Type Checker

### Description

Write a C program that determines the type of a triangle based on the lengths of its three sides. The program should:

-   Prompt the user to enter the lengths of three sides.
-   Determine if the sides form a valid triangle.
-   If valid, identify the triangle as:
    -   **Equilateral**: All sides are equal.
    -   **Isosceles**: Two sides are equal.
    -   **Scalene**: All sides are different.

### Example Input/Output

**Example 1**

```

Enter the lengths of the three sides: 5 5 5
The triangle is equilateral.

```

**Example 2**

```

Enter the lengths of the three sides: 7 7 5
The triangle is isosceles.

```

**Example 3**

```

Enter the lengths of the three sides: 3 4 5
The triangle is scalene.

```

**Example 4**

```

Enter the lengths of the three sides: 1 2 3
The lengths do not form a valid triangle.

```

### Edge Cases and Pitfalls

-   **Triangle Inequality Theorem**: Ensure that the sum of any two sides is greater than the third side.
-   **Invalid Triangles**: If the sides do not form a valid triangle, the program should inform the user.
-   **Equal Sides**: Be careful when checking for equality due to floating-point precision.

---

## 4. Quadrant Finder

### Description

Develop a C program that determines the quadrant of a point in a 2D coordinate system based on its **x** and **y** coordinates. The program should:

-   Prompt the user to enter the **x** and **y** coordinates.
-   Determine and display the quadrant in which the point lies:
    -   **Quadrant I**: x > 0 and y > 0
    -   **Quadrant II**: x < 0 and y > 0
    -   **Quadrant III**: x < 0 and y < 0
    -   **Quadrant IV**: x > 0 and y < 0
-   If the point lies on an axis or at the origin, indicate that as well.

### Example Input/Output

**Example 1**

```

Enter the x-coordinate: 4
Enter the y-coordinate: -5
The point is in Quadrant IV.

```

**Example 2**

```

Enter the x-coordinate: 0
Enter the y-coordinate: 0
The point is at the origin.

```

**Example 3**

```

Enter the x-coordinate: -3
Enter the y-coordinate: 0
The point lies on the X-axis.

```

**Example 4**

```

Enter the x-coordinate: 0
Enter the y-coordinate: 6
The point lies on the Y-axis.

```

### Edge Cases and Pitfalls

-   **Axis Handling**: Correctly identify points that lie exactly on the X-axis or Y-axis.
-   **Origin**: Ensure that the point (0, 0) is identified as the origin.

---

## 5. Currency Denomination Calculator

### Description

Create a C program that calculates the minimum number of banknotes required to represent a given amount of money in dollars. The denominations available are:

-   **$20 bills**
-   **$10 bills**
-   **$5 bills**
-   **$1 bills**

The program should:

-   Prompt the user to enter an amount in dollars (integer value).
-   Calculate and display the minimum number of each type of bill needed.

### Example Input/Output

**Example 1**

```

Enter an amount in dollars: 93
Minimum number of banknotes:
$20 bills: 4
$10 bills: 1
$5 bills: 0
$1 bills: 3

```

**Example 2**

```

Enter an amount in dollars: -5
Invalid amount. Please enter a non-negative integer.

```

### Edge Cases and Pitfalls

-   **Negative Amounts**: The program should handle negative inputs by displaying an error message.
-   **Zero Amount**: If the amount is zero, the program should indicate that no bills are needed.
-   **Non-integer Values**: You can assume the user will enter an integer amount.

---

## 6. Distance Between Two Points

### Description

Write a C program that calculates the distance between two points in a 2D plane. The program should:

-   Prompt the user to enter the coordinates of the first point (**x₁**, **y₁**).
-   Prompt the user to enter the coordinates of the second point (**x₂**, **y₂**).
-   Calculate and display the distance between the two points using the distance formula:

\[
\text{Distance} = \sqrt{(x₂ - x₁)^2 + (y₂ - y₁)^2}
\]

### Example Input/Output

**Example 1**

```

Enter the coordinates of the first point (x1 y1): 3 4
Enter the coordinates of the second point (x2 y2): 7 1
The distance between the two points is: 5.000

```

**Example 2**

```

Enter the coordinates of the first point (x1 y1): -2.5 0
Enter the coordinates of the second point (x2 y2): 0 3.5
The distance between the two points is: 4.301

```

### Edge Cases and Pitfalls

-   **Same Points**: If both points are the same, the distance should be zero.
-   **Negative Coordinates**: The program should handle negative values correctly.
-   **Floating-Point Precision**: Consider formatting the output to three decimal places for readability.

---

## Submission Guidelines

-   **Code Style**: Your code should be well-indented and commented where necessary.
-   **Compilation**: Ensure your code compiles without errors or warnings.
-   **Testing**: Test your programs with multiple inputs to ensure correctness.
-   **Academic Integrity**: Discussing ideas is allowed, but sharing code is not. Submissions will be checked for plagiarism.

---

## Contact

If you have any questions regarding the homework, feel free to reach out:

-   **Teaching Assistant**: Seyyed Mohammad Hamidi
-   **Telegram**: [t.me/rsmhamidi](https://t.me/rsmhamidi)
-   **Telegram Group**: [t.me/AUT_BP_Fall_2024](https://t.me/AUT_BP_Fall_2024)
-   **Github**: [github.com/smhamidi](https://github.com/smhamidi)

---

<p align="center">
  <img src="./Resource/Say_Hello_To_Other_Errors.webp" alt="Say Hello To Other Errors" style="width: 40%;">
</p>

**Best Regards, [Hamidi](https://github.com/smhamidi)**

