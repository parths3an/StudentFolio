#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <utility> 
#include "SemesterRecord.h"

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
    double gpa;
    
    /**
     * A Map containing all the semester the student 
     * has been in the college. 
     * First para: Name of the semester 
     * Second para: Semester Object, which contains all the info
     *              about that specific sememster.
     */  
    map<string,SemesterRecord> semesters; 

    /** 
     * A map containing all the classes the student have taken
     * First para: Name of the class(string)
     * Second para: A pair containing units of the class and received 
     *              grade in that class. 
     * This map will be helpful in finding data about a specific class
     * without knowing the semester in which the class was taken. 
     */ 
    
    map<string,pair<double,string> > classesMap;
    };
#endif 
