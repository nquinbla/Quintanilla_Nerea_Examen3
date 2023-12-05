// BUSQUEDA DE SÍMBOLOS

#include <iostream>
#include <string>
#include <map>

using namespace std;

struct Enviroment {
    map<string, int> variables;
    int lookup(const string &name) const;
};

int Enviroment:: lookup(const string &name) const {
    auto it = variables.find(name);
    if (it == variables.end()) {
        return 0;
    }
    return it->second;
}
