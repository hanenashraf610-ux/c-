#include<iostream>
#ifndef PERSON_H
#define PERSON_H
using namespace std;
class Person
{
    private:
    string name;
    int age;
    public:
    Person()
    {
        name="no name";
        age=-1;
    }
    Person(string name,int age)
    {
this->name=name;
this->age=age;

    }
    void setName(string name)
    {
        this->name=name;
    }
    void srtAge(int age)
    {
        this->age=age;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    void informations()
    {
        cout<<"please enter your name:"<<endl;
        cin>>name;
        cout<<"please enter your age:"<<endl;
        cin>>age;
    }
    void print()
    {
        cout<<"the name is:"<<name<<endl;
        cout<<"the age is:"<<age<<endl;
    }
};
#endif
