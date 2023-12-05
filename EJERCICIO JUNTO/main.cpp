#include <iostream>
#include <string>
#include <map>
#include <variant>

using namespace std;

class Enviroment {
private:
    map<string, variant<int, double, string>> variables;

    public:
    void insert(const string& name, const variant<int, string>& value) {
        auto it = variables.find(name);
        if (it == variables.end()) {
            variables[name] = value;
            cout << "Simbolo '" << name << "' insertado exitosamente." << endl;
        } else {
            cerr << "Error: Simbolo '" << name << "' ya existe en el entorno." << endl;
        }
    }

    variant<int, string> lookup(const string& name) const
    {
        auto it = variables.find(name);
        if (it != variables.end()) {
            return it->second;
        } else {
            cerr << "Error: Simbolo '" << name << "' no existe en el entorno." << endl;
            return {};
        }
    }
    void remove(const string& name) {
        variables.ersase(name);
        cout << "Simbolo '" << name << "' eliminado exitosamente." << endl;
    }

    bool exists (const string& name) const {
        return variables.find(name) != variables.end();
    }
};

int main() {
    
}
