//
// Created by erenc on 7.03.2023.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    //Question 1
    string name;
    cout<<"What's your name?"<<endl;
    cin>>name;
    cout<<"Hello "<<name<<"."<<endl;

    string student_id;
    cout<<"What's your Student ID?"<<endl;
    cin>>student_id;
    cout<<"Your ID is "<<student_id<<endl;


    //Question 2
    int var1;
    cout<<"Enter the first value"<<endl;
    cin>>var1;

    int var2;
    cout<<"Enter the second value"<<endl;
    cin>>var2;

    int sum = var1 + var2;
    int diff = var1 - var2;
    int prod = var1 * var2;

    cout<<"Sum result : "<<sum<<endl;
    cout<<"Diff result : "<<diff<<endl;
    cout<<"Prod result : "<<prod<<endl;

    //Question 3
    string student;
    cout<<"What's your name?"<<endl;
    cin>>student;

    float lab_grade;
    cout<<"Enter the "<<student<<"'s lab grade"<<endl;
    cin>>lab_grade;

    float midterm_grade;
    cout<<"Enter the "<<student<<"'s midterm grade"<<endl;
    cin>>midterm_grade;

    float final_grade;
    cout<<"Enter the "<<student<<"'s final grade"<<endl;
    cin>>final_grade;

    float result = (lab_grade * 0.25) + (midterm_grade * 0.35) + (final_grade * 0.40);

    cout<<"Name : "<<student<<endl;
    cout<<"Lab : "<<lab_grade<<endl;
    cout<<"Midterm : "<<midterm_grade<<endl;
    cout<<"Final : "<<final_grade<<endl;
    cout<<"Last Score : "<<result<<endl;

    //Question 4

    cout<<"*"<<endl<<"**"<<endl<<"***"<<endl<<"**"<<endl<<"*";





    return 0;
}
