
#ifndef ESTRUCTURA_B_SICA_ENVIROMENT_H
#define ESTRUCTURA_B_SICA_ENVIROMENT_H

#include <map>
#include <string>

using namespace std;

class Enviroment {
private:
    map<string, int> variables;
public:
    void addVariable(const string &name, int value) {
        variables[name] = value;
    }

    

};


#endif //ESTRUCTURA_B_SICA_ENVIROMENT_H
