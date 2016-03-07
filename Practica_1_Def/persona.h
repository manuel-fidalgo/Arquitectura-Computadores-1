#ifndef PERSONA_H
#define PERSONA_H
#include <string.h>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

class Persona
{

public:
    Persona(string s, string s2, string s3, string s4);
    Persona();
    string getID();
protected:
    string name;
    string s_name;
    string s2_name;
    string dni;
};

#endif // PERSONA_H
