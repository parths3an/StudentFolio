/**
 * Main.cpp
 */
#include<iostream>
#include "Student.h"

using namespace std;

int main()
{
    Student s1("Sam", "A415631");

    pair<string, string> testPair = s1.getStudentInfo();
    cout << "Student name is: " << testPair.first << "the Student id is: " << testPair.second << endl;

return 0;
}
