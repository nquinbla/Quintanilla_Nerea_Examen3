
#ifndef ESTRUCTURA_B_SICA_ENVIROMENT_H
#define ESTRUCTURA_B_SICA_ENVIROMENT_H

#include <map>
#include <string>
#include <iostream>

using namespace std;

class Enviroment {
private:
    map<string, int> variables;
public:
    void addVariable(const string &name, int value) {
        variables[name] = value;
    }

    int getVariable(const string &name) const {
        auto it = variables.find(name);
        if (it == variables.end()) {
            return it -> second;
        } else {
            cerr << "La variable " << name << " no existe" << endl;
            return 0;
        }
    }
};


#endif //ESTRUCTURA_B_SICA_ENVIROMENT_H
