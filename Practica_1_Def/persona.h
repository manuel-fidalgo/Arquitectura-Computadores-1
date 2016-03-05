#ifndef PERSONA_H
#define PERSONA_H

class Persona
{

public:
    Persona();
    Persona(char* name, char* subname_1,  char* subname_2, char* DNI);
private:
    char**datos;
};

#endif // PERSONA_H
