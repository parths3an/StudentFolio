#ifndef CLASS_INFO_H 
#define CLASS_INFO_H 

#include <string>
#include <list>

using namespace std;

class ClassInfo
{
public: 
    //Constructor
    ClassInfo();
    //Overloaded constructor
    ClassInfo(string className, double classUnit):
    cName(className), cUnit(classUnit){};

private: string cName;
    double cUnit;
    list<string> preReqs;
};


#endif
