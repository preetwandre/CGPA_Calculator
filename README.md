# CGPA_Calculator
 calcualting cgpa of student with help og courses and their grades
# CGPA Calculator in C++

## Description
This is a simple C++ program that calculates the CGPA (Cumulative Grade Point Average) based on user-inputted course names, credits, and grades. The program allows a maximum of 10 courses and ensures that CGPA is calculated accurately.

## Features
- Allows the user to enter up to 10 courses.
- Stores course details including name, credits, and grade.
- Calculates CGPA using the formula:
  \[ CGPA = \frac{\sum (grade \times credits)}{\sum credits} \]
- Displays the list of entered courses and their details.

## How to Use
1. Compile the program using a C++ compiler:
   ```
   g++ -o cgpa_calculator cgpa_calculator.cpp
   ```
2. Run the executable:
   ```
   ./cgpa_calculator
   ```
3. Enter the number of courses (maximum 10).
4. Input the course details (name, credits, and grade) for each course.
5. The program will display the entered courses and the final CGPA.

## Example Usage
```
Enter the number of courses:
3
Enter course name:credits:grades
Math 3 9.0
Physics 4 8.5
CS 3 9.2
Courses and grades:
Course: Math || Credits: 3 || Grades: 9.0
Course: Physics || Credits: 4 || Grades: 8.5
Course: CS || Credits: 3 || Grades: 9.2
Final CGPA: 8.85
```

## Limitations
- The program supports a maximum of 10 courses.
- No input validation for non-numeric values.

## License
This project is open-source and free to use.

## Author
Your Name

