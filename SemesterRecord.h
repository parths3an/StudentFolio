#ifndef SEMESETER_RECORD_H
#define SEMESTER_RECORD_H

#include <string>
#include <map>
#include "ClassInfo.h"

using namespace std;


class SemesterRecord 
{

  public: 
    SemesterRecord(string nOfSem): semName(nOfSem){};

    protected: 
    string semName;
    double semGPA;  
    double semCredits;
    double semEarnedCredits;

    /**
     * This will keep track of the class name, 
     * and a pair. Pair contains the classInfo object and 
     * second parameter will the gpa in that class. 
     */ 
    map< string, pair<ClassInfo,double> >classList;

    
};

#endif
