#include <iostream>
#include <string>
#include <map>

using namespace std;

class Enviroment {
public:
    Enviroment();
    void set(const string &symbol, int value);
    int get(const string &symbol) const;
    void insert (const string &symbol, int value);

private:
    map<string, int> variables;
};

Enviroment::Enviroment() {}

void Enviroment::set(const string &symbol, int value) {
    variables[symbol] = value;
}

int Enviroment::get(const string &symbol) const {
    return variables.at(symbol);
}

void Enviroment::insert(const string &symbol, int value) {
    if (variables.find(symbol) == variables.end()) {
        variables[symbol] = value;
    }
    else {
        throw invalid_argument("La variable ya existe");
    }
}