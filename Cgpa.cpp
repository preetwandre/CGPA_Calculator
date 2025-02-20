#include <iostream>
using namespace std;

class Course
{
public:
    string name;
    int credits;
    double grade;

    Course() {}

    Course(string n, int c, double g)
    {
        name = n;
        credits = c;
        grade = g;
    }
};

class CGPA
{
    Course course[10];
    int totalcredits;
    int totalgradespoints;
    int c_count;

public:
    CGPA() : totalcredits(0), totalgradespoints(0.0), c_count(0) {}

    void addcourse(string name, int credits, double grades)
    {
        if (c_count < 10)
        {
            course[c_count] = Course(name, credits, grades);
            totalcredits += credits;
            totalgradespoints += (grades * credits);
            c_count++;
        }
        else
        {
            cout << "cannot add more than 10 course" << endl;
        }
    }

    double calulatecgpa()
    {
        return (totalcredits == 0) ? 0.0 : totalgradespoints / totalcredits;
    }

    void display_course()

    {
        cout << "Courses and grades" << endl;
        for (int i = 0; i < c_count; i++)
        {
            cout << "course: " << course[i].name << "||Credits: " << course[i].credits << "||Grades: " << course[i].grade << endl;
        }
    }
};

int main()
{
    CGPA student;
    int num_courses;
    cout << "Enter the number of courses" << endl;
    cin >> num_courses;

    if (num_courses > 10)
    {
        cout << "maximum limit is 10,limit set to 10" << endl;
        num_courses = 10;
    }

    for (int i = 0; i < num_courses; i++)
    {
        string name;
        int credits;
        double grades;

        cout << "Enter course name:credits:grades" << endl;
        cin >> name >> credits >> grades;

        student.addcourse(name, credits, grades);
    }

    student.display_course();
    cout << "Final CGPA: " << student.calulatecgpa() << endl;
    return 0;
}
