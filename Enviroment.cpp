// Comenzamos definiendo la estructura básica de la clase Environment, asegurandonos que esta integra un std::map para la tabla de símbolos.

#include "Enviroment.h"

int Enviroment::get(const string &symbol) const {
    auto it = symbols.find(symbol);
    if (it == symbols.end()) {
        return 0;
    }
    return it->second;
}

void Enviroment::set(const string &symbol, const string &value) {
    symbols[symbol] = stoi(value);
}

Enviroment::Enviroment() {
    symbols["pi"] = 3;
    symbols["e"] = 2;
    symbols["phi"] = 1;
}






