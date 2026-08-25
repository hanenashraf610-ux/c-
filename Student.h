#include<iostream>
#ifndef STUDENT_H
#define STUDENT_H
#include"Person.h"
using namespace std;
class Student:public Person
{
    private:
    string university;
    public:
    Student()
    {
university="no university";
    }
    Student(string name ,int age ,string university):Person(name,age)
    {
this->university=university;
    }
    void setUniversity(string university)
    {
        this->university=university;
    }
    string getUniversity()
    {
        return university;
    }
    void informations()
    { 
        Person::informations();
        cout<<"enter your university"<<endl;
        cin>>university;
    }
    void print()
    {
        Person::print();
        cout<<"you university is"<<university<<endl;

    }
};
#endif//STUDENT_H