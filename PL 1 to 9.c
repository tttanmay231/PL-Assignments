// ============================================================
// C Programming Lab - Experiments 1 to 9 (combined file)
// Each experiment's code is unchanged, except its main() is renamed
// to experimentN() so that all 9 can live in one file.
// Run the program and choose an experiment number from the menu.
// ============================================================
#include <stdio.h>


// ------------------------------------------------------------
// #Experiment 1: Basic I/O functions using different data types
// ------------------------------------------------------------
int experiment1() {
 int a;
 float b;
 double c;
 char ch;
 char name[50];
 // Input section
 printf("Enter an integer: ");
 scanf("%d", &a);
 printf("Enter a float value: ");
 scanf("%f", &b);
 printf("Enter a double value: ");
 scanf("%lf", &c);
 printf("Enter a single character: ");
 scanf(" %c", &ch); // space before %c to skip leftover newline/whitespace
 printf("Enter a string (name): ");
 scanf("%s", name); // no & needed since name is an array (decays to pointer)
 // Output section
 printf("\n--- Output ---\n");
 printf("Integer entered : %d\n", a);
 printf("Float entered : %.2f\n", b);
 printf("Double entered : %.2lf\n", c);
 printf("Character entered : %c\n", ch);
 printf("String entered : %s\n", name);
 return 0;
}


// ------------------------------------------------------------
// #Experiment 2: Calculate the area of a circle
// ------------------------------------------------------------
#define PI 3.14159
int experiment2() {
 float radius, area;
 printf("Enter the radius of the circle: ");
 scanf("%f", &radius);
 area = PI * radius * radius;
 printf("Area of the circle = %.2f\n", area);
 return 0;
}


// ------------------------------------------------------------
// #Experiment 3: Calculate the average of three numbers
// ------------------------------------------------------------
int experiment3() {
 float a, b, c, average;
 printf("Enter three numbers: ");
 scanf("%f %f %f", &a, &b, &c);
 average = (a + b + c) / 3;
 printf("Average of the three numbers = %.2f\n", average);
 return 0;
}


// ------------------------------------------------------------
// #Experiment 4: Swap two numbers using a temporary variable
// ------------------------------------------------------------
int experiment4() {
 int a, b, temp;
 printf("Enter two numbers: ");
 scanf("%d %d", &a, &b);
 printf("Before swapping: a = %d, b = %d\n", a, b);
 temp = a;
 a = b;
 b = temp;
 printf("After swapping: a = %d, b = %d\n", a, b);
 return 0;
}


// ------------------------------------------------------------
// #Experiment 5: Single-line and multi-line comments
// ------------------------------------------------------------
int experiment5() {
 // This is a single-line comment
 // It explains that the program prints a welcome message
 /* This is a multi-line comment.
 It can span across several lines.
 Here, we declare a variable and print its value. */
 int num = 10; // single-line comment: declaring and initializing a variable
 printf("The value of num is: %d\n", num);
 /* End of program.
 Comments do not affect program execution;
 they are purely for documentation purposes. */
 return 0;
}


// ------------------------------------------------------------
// #Experiment 6: Order of execution (precedence and associativity) of operators
// ------------------------------------------------------------
int experiment6() {
 int a = 5, b = 10, c = 2, result1, result2;
 // Without parentheses: * has higher precedence than +
 result1 = a + b * c; // evaluated as a + (b * c)
 // With parentheses: forces addition to happen first
 result2 = (a + b) * c;
 printf("a + b * c = %d\n", result1);
 printf("(a + b) * c = %d\n", result2);
 // Relational and logical operator precedence
 int x = 5, y = 10, z = 15;
 int logicResult = x < y && y < z; // relational evaluated before logical AND
 printf("x < y && y < z = %d\n", logicResult);
 return 0;
}


// ------------------------------------------------------------
// #Experiment 7: Check whether a number is even or odd
// ------------------------------------------------------------
int experiment7() {
 int number;
 printf("Enter a number: ");
 scanf("%d", &number);
 if (number % 2 == 0) {
 printf("%d is Even\n", number);
 } else {
 printf("%d is Odd\n", number);
 }
 return 0;
}


// ------------------------------------------------------------
// #Experiment 8: Determine whether a number is positive, negative, or zero
// ------------------------------------------------------------
int experiment8() {
 int number;
 printf("Enter a number: ");
 scanf("%d", &number);
 if (number > 0) {
 printf("%d is Positive\n", number);
 } else if (number < 0) {
 printf("%d is Negative\n", number);
 } else {
 printf("The number is Zero\n");
 }
 return 0;
}


// ------------------------------------------------------------
// #Experiment 9: Menu-driven calculator using switch-case
// ------------------------------------------------------------
int experiment9() {
 int choice;
 float num1, num2, result;
 do {
 printf("\n----- Menu-Driven Calculator -----\n");
 printf("1. Addition\n");
 printf("2. Subtraction\n");
 printf("3. Multiplication\n");
 printf("4. Division\n");
 printf("5. Exit\n");
 printf("Enter your choice (1-5): ");
 scanf("%d", &choice);
 if (choice == 5) {
 printf("Exiting the calculator. Goodbye!\n");
 break;
 }
 if (choice >= 1 && choice <= 4) {
 printf("Enter two numbers: ");
 scanf("%f %f", &num1, &num2);
 } else {
 printf("Invalid choice! Please try again.\n");
 continue;
 }
 switch (choice) {
 case 1:
 result = num1 + num2;
 printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
 break;
 case 2:
 result = num1 - num2;
 printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
 break;
 case 3:
 result = num1 * num2;
 printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
 break;
 case 4:
 if (num2 != 0) {
 result = num1 / num2;
 printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
 } else {
 printf("Error: Division by zero is not allowed.\n");
 }
 break;
 }
 } while (choice != 5);
 return 0;
}

