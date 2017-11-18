#ifndef SEMESETER_RECORD_H
#define SEMESTER_RECORD_H

#include <string>
#include "ClassInfo.h" 

using namespace std;

class SemesterRecord : public ClassInfo
{

  public: 
    SemesterRecord(string nOfSem): semName(nOfSem){};
//    double calcSemGPA(c1.getTUnits, c1.getTotalEarned);

    protected: 
    string semName;
    vector< pair<ClassInfo, double >> semClassVec;
    double semGPA;  
};

#endif
