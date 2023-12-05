// Comenzamos definiendo la estructura básica de la clase Environment, asegurandonos que esta integra un std::map para la tabla de símbolos.



#ifndef QUINTANILLA_NEREA_EXAMEN3_ENVIROMENT_H
#define QUINTANILLA_NEREA_EXAMEN3_ENVIROMENT_H

#include <iostream>
#include <string>
#include <map>

using namespace std;

class Enviroment {
public:
    Enviroment();
    void set(const string &symbol, const string &value);
    int get(const string &symbol) const;

private:
    map<string, int> symbols;
};


#endif //QUINTANILLA_NEREA_EXAMEN3_ENVIROMENT_H
