#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <utility> 

using namespace std;

class Student
{
  public:
    //constructor
    Student(string name, string ID) : studentName(name),id(ID) {};

    //Destructo
    ~Student();

    //Accessor function
    pair<string, string> getStudentInfo();

  private:
    string studentName;
    string id;
};
#endif 