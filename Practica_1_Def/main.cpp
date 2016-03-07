#include <iostream>
#include <vector>
#include <string>
#include <iostream>
#include "persona.h"
#include "estudiante.h"
#include "profesor.h"
#include <stdlib.h>
#include <time.h>
#include <sstream>

//*Clases propias*//
#include "datos.h"
#include "persona.h"
#include "estudiante.h"
#include "profesor.h"

using namespace std;

//Declaramos el metodo antes de usarlo
void calificando();

int main(void){
    calificando();
    return 0;
}
void calificando(){
    Datos *d = new Datos(); //Objeto de tipo datos para rellenar la lista alumnos y profesores;
    vector<Estudiante> estudiantes(30); //Vector de Estudiantes
    int numNotas;
    //Se rellena el vector de estudiantes con un numero aleatorio de estudiantes [5,15]
    for(int i=0; i<(d->notaAleatoria()+5);i++){
        numNotas = (rand()%3)+1;
        if(numNotas==1){
            estudiantes.push_back( * new Estudiante(
                                      d->nombreAleatorio(),
                                      d->apellidoAleatorio(),
                                      d->apellidoAleatorio(),
                                      d->dniAleatorio(),
                                      d->notaAleatoria()
                                      ));
        }else if(numNotas==2){
            estudiantes.push_back( * new Estudiante(
                                      d->nombreAleatorio(),
                                      d->apellidoAleatorio(),
                                      d->apellidoAleatorio(),
                                      d->dniAleatorio(),
                                      d->notaAleatoria(),
                                      d->notaAleatoria()
                                      ));
        }else if(numNotas==3){
            estudiantes.push_back( * new Estudiante(
                                      d->nombreAleatorio(),
                                      d->apellidoAleatorio(),
                                      d->apellidoAleatorio(),
                                      d->dniAleatorio(),
                                      d->notaAleatoria(),
                                      d->notaAleatoria(),
                                      d->notaAleatoria()
                                      ));
        }else{
            cout << "Error de numero aletorio que decide el numero de notas;" << endl;
        }
    }

    //Intanciamos el profesor con su lista de estudiantes
    Profesor *f = new Profesor(
                d->nombreAleatorio(),
                d->apellidoAleatorio(),
                d->apellidoAleatorio(),
                d->dniAleatorio(),
                estudiantes
                );
    //Añadimos un par de alumnos mas...

    f->agnadirAlumno( * new Estudiante(d->nombreAleatorio(),
                                    d->apellidoAleatorio(),
                                    d->apellidoAleatorio(),
                                    d->dniAleatorio(),
                                    d->notaAleatoria(),
                                    d->notaAleatoria()
                        ));
    f->agnadirAlumno( * new Estudiante(d->nombreAleatorio(),
                                    d->apellidoAleatorio(),
                                    d->apellidoAleatorio(),
                                    d->dniAleatorio(),
                                    d->notaAleatoria(),
                                    d->notaAleatoria(),
                                    d->notaAleatoria()
                        ));


    f->imprimirAlumnos();
    f->imprimirMejorAlumno();
}
