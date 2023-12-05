#include <iostream>
#include <string>
#include <map>

using namespace std;

class Enviroment ¨{
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
