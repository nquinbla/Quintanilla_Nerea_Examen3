// Comenzamos definiendo la estructura básica de la clase Environment, asegurandonos que esta integra un std::map para la tabla de símbolos.


#include <iostream>
#include <string>
#include <map>

using namespace std;

class Environment { // clase Environment
    private:
        map<string, int> symbols; // tabla de símbolos
        map<string, string> types; // tabla de tipos
    public:
    void addVariable(string name, int value, string type) { // función para añadir variables
        symbols[name] = value; // añadimos el valor a la tabla de símbolos
        types[name] = type; // añadimos el tipo a la tabla de tipos
    }
    int getVariable(string name) { // función para obtener variables
        return symbols[name]; // devolvemos el valor de la variable
    }
};
