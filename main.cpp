#include<iostream>
using namespace std;
#include"Person.h"
#include"Student.h"

int main()
{
Student s;
s.informations();
s.print();
cout<<"enter student data"<<endl;
cout<<"print student data"<<endl;
}
/*What are the adventages of using static members in oop?
Memory efficiency : static variables are created only once and shared across all objects of the class ,saving memory.
Direct access :static functions can be called directly using the class name without needing to create an object.*/
