#include "Student.h"


pair<string, string> Student::getStudentInfo()
{
pair<string,string>newPair = make_pair(studentName,id);
return newPair;
}

Student::~Student()
{}
