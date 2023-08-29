#include <iostream>
using namespace std;

class Student {
private:
    string firstName;
    string lastName;
    string studentID;
    int birthYear;
    string course;
    string obtainedMark;
    static int totalStudents;

public:
    Student(string first_Name = "Hamid", string last_Name = "Hasan", string student_ID = "1234", int b_Year = 2000) {
        firstName = first_Name;
        lastName = last_Name;
        studentID = student_ID;
        birthYear = b_Year;
        totalStudents++;
    }

    ~Student() {
        totalStudents--;
    }

    int calculateAge() {
        int currentYear = 2023; 
        return currentYear - birthYear;
    }

    void enrollInCourse(string courseName) {
        course = courseName;
        obtainedMark = "0.0";
    }

    string generateEmail() {
        return firstName + "." + lastName + "@university.com";
    }

    void obtainedMarks(string courseName, float marks) {
        if (course == courseName) {
            obtainedMark = to_string(marks);
        }
    }

    void setGPAForEachCourse() {
        
    }

    float calculateCGPA() {
        
        return 0.0; 
    }

    void willGraduate() {
        float cgpa = calculateCGPA();
        if (cgpa >= 2.0) {
            cout << "The student will graduate." << endl;
        } else {
            cout << "The student will not graduate." << endl;
        }
    }

    void applyForScholarship() {
        float cgpa = calculateCGPA();
        if (cgpa > 3.8) {
            cout << "The student can apply for a scholarship." << endl;
        } else {
            cout << "The student cannot apply for a scholarship." << endl;
        }
    }

    void participateInInternship(string company) {
        float cgpa = calculateCGPA();
        if (cgpa > 3.0 && course == "specificCourse") {
            cout << "The student can participate in an internship at " << company << "." << endl;
        } else {
            cout << "The student cannot participate in an internship." << endl;
        }
    }

    void printAcademicRecord() {
        cout << "Full Name: " << firstName << " " << lastName << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Email: " << generateEmail() << endl;
        cout << "Enrolled Course: " << course << endl;
        cout << "Graduation Status: ";
        willGraduate();
        cout << "Scholarship Status: ";
        applyForScholarship();
        cout << "Internship Status: ";
        participateInInternship("XYZ Company");
    }
};

int Student::totalStudents = 0;

int main() {
    Student student("Hasan", "Mahmud", "5678", 2002);
    student.enrollInCourse("Computer Science");
    student.obtainedMarks("Computer Science", 85.0);

    student.printAcademicRecord();

    return 0;
}
