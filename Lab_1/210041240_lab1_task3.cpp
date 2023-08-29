#include<iostream>
using namespace std;

class Student
{
private:
    string first_name;
    string last_name;
    int student_id;
    int birth_year;
    string course;
    double obtained_marks;
    int age;

public:
    void initDetails(){
        cout<<"Enter student first name"<<endl;
        
        getline(cin, first_name);
        cout<<"Enter student's last name"<<endl;
        getline(cin,last_name);
        cout<<"Enter student id"<<endl;
        cin>>student_id;
        cout<<"birth year"<<endl;
        cin>>birth_year;
        cout<<"Enter course name"<<endl;
        cin>>course;
        cout<<"Enter obtained marks"<<endl;
        cin>>obtained_marks;

    }
    int displayDetails(){
        cout<<"Firt name:"<<first_name<<endl;
        cout<<"Last name:"<<last_name<<endl;
        cout<<"Student ID:"<<student_id<<endl;
        cout<<"Birth year:"<<birth_year<<endl;
        cout<<"Course:"<<course<<endl;
        cout<<"Obtained marks:"<<obtained_marks<<endl;
    
    };

    int displayAge(){
         age= 2023-birth_year;
        cout<<"Age:"<<age<<endl;

    }
    float displayGPA(){
        if(obtained_marks>=80)
        {
            cout<<"cgpa is 4.00"<<endl;
        }
        else if(obtained_marks<80 && obtained_marks>=70)
        {
            cout<<"cgpa is 3.75"<<endl;
        }
        else if(obtained_marks<70 && obtained_marks>=60)
        {
            cout<<"cgpa is 3.50"<<endl;
        }
        else if(obtained_marks<60 && obtained_marks>=50)
        {
            cout<<"cgpa is 3.25"<<endl;
        }
          else if(obtained_marks<50 && obtained_marks>=40)
        {
            cout<<"cgpa is 3.00"<<endl;
        }
        else if(obtained_marks<40)
        {
            cout<<"No cgpa available"<<endl;
        }

        


    }
    void willGraduate(){
        if(obtained_marks<40)
        {
            cout<<"will not graduate"<<endl;
        }

        else{
            cout<<"will graduate"<<endl;
        }


    }

    float updatedGPA(){
        double upmarks= obtained_marks+ 0.1*obtained_marks;

        if(upmarks>=80)
        {
            cout<<"updated cgpa is 4.00"<<endl;
        }
        else if(upmarks<80 && upmarks>=70)
        {
            cout<<"updated cgpa is 3.75"<<endl;
        }
        else if(upmarks<70 && upmarks>=60)
        {
            cout<<"updated cgpa is 3.50"<<endl;
        }
        else if(upmarks<60 && upmarks>=50)
        {
            cout<<"updated cgpa is 3.25"<<endl;
        }
          else if(upmarks<50 && upmarks>=40)
        {
            cout<<"updated cgpa is 3.00"<<endl;
        }
        else if(upmarks<40)
        {
            cout<<"No updated cgpa available"<<endl;
        }


    }
    void printTranscript(){
        cout<<"Transcript"<<endl;
        cout<<"Full Name"<<first_name<<" "<<last_name<<endl;
        cout<<"student Id"<<student_id<<endl;
        cout<<"current age"<<age<<endl;
        cout<<"updatedGPA"<<endl;
    }
    
};

int main()
{
    Student student;
    student.initDetails();
    student.displayDetails();
    student.displayAge();
    student.displayGPA();
    student.willGraduate();
    student.updatedGPA();
    student.printTranscript();
    
    
    return 0;
}
