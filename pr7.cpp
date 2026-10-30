
#include <iostream>
using namespace std;

// Base class
class Student
{
protected:
    int roll_no;
    string name;

public:
    void getStudent()
    {
        cout << "Enter Roll Number: ";
        cin >> roll_no;

        cout << "Enter Student Name: ";
        cin >> name;
    }

    void displayStudent()
    {
        cout << "\nRoll Number: " << roll_no;
        cout << "\nStudent Name: " << name;
    }
};

// Derived class
class StudentExam : public Student
{
protected:
    int marks1, marks2, marks3;

public:
    void getMarks()
    {
        cout << "Enter marks of 3 subjects: ";
        cin >> marks1 >> marks2 >> marks3;
    }

    void displayMarks()
    {
        cout << "\nMarks 1: " << marks1;
        cout << "\nMarks 2: " << marks2;
        cout << "\nMarks 3: " << marks3;
    }
};

// Derived class from StudentExam
class StudentResult : public StudentExam
{
    int total;
    float percentage;

public:
    void calculate()
    {
        total = marks1 + marks2 + marks3;
        percentage = total / 3.0;
    }

    void displayResult()
    {
        displayStudent();
        displayMarks();

        cout << "\nTotal Marks: " << total;
        cout << "\nPercentage: " << percentage << "%";
    }
};

// Main function
int main()
{
    StudentResult s;

    s.getStudent();
    s.getMarks();
    s.calculate();

    cout << "\n\n----- STUDENT RESULT -----";
    s.displayResult();

    return 0;
}
