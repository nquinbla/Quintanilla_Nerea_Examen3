#include <iostream>
#include <string>
#include <map>
#include <variant>

using namespace std;

class Enviroment {
private:
    map<string, variant <int, double, string>> variables;

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
    try {
        Enviroment env;

        env.insert("x", 10);
        env.insert("mensaje", "tarta de queso");

        auto xValue = get<int>(env.lookup("x"));
        cout << "El valor de x: " << xValue << endl;

        auto mensajeValue = get<string>(env.lookup("mensaje"));
        cout << "El valor de mensaje: " << mensajeValue << endl;

        auto yValue = get<int>(env.lookup("y"));
        env.remove("x");

        if (env.exists("x")) {
            cout << "El valor de x existe: " << get<int>(env.lookup("x")) << endl;
        } else {
            cout << "El valor de x no existe." << endl;
        }
        catch (const exception& e) {
            cerr << "Error: " << e.what() << endl;
        }
        catch (...) {
            cerr << "Error desconocido." << endl;
        }

        return 0;
}
