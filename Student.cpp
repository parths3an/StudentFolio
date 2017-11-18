#include "Student.h"


pair<string, string> Student::getStudentInfo()
{
auto newPair = make_pair(studentName,id);
return newPair;
}