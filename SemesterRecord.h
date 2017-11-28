#ifndef SEMESTER_RECORD_H
#define SEMESTER_RECORD_H

#include <string>
#include <map>
#include "ClassInfo.h"

using namespace std;


class SemesterRecord 
{

  public: 
    SemesterRecord(string nOfSem): semName(nOfSem){};
    
    //Accessor functions
    
    double getSemCredits();
    double getSemEarnedCredits();
    double getGPA(); 

    //Mutator functions
    void setGPA();

    //Helper function 
    double gpaCalc(double semCredits,double semEarnedCredits);

    //Destructor
    ~SemesterRecord();

    protected: 
    string semName;
    double semGPA;  
    double semCredits;
    double semEarnedCredits;
    

    /**
     * This will keep track of the class name, 
     * and a pair. Pair contains the classInfo object and 
     * second parameter will the grade in that class. 
     * HOT:: Your reason to keep the grade as string is, 
     *       so that you create the grade for both the two systems
     *       the whole point system or the +/- system. 
     */ 
    map< string, pair<ClassInfo,string> >classList;
};

#endif
