// BUSQUEDA DE SÍMBOLOS

#include <iostream>
#include <string>
#include <map>

using namespace std;

class Environment {
        private: // Atributos privados
        map<string, int> symbolTable;

        public: // Atributos públicos
        void insert(const string& name, int value) {
            auto it = symbolTable.find(name);
            if (it == symbolTable.end()) { // El símbolo no existe en el entorno
                symbolTable[name] = value;
                cout << "Simbolo '" << name << "' insertado exitosamente." << endl;
            } else {
                cerr << "Error: Simbolo '" << name << "' ya existe en el entorno." << endl;
            }
        }

        // Método para obtener el valor de una variable
        int getVariable(const string& name) const {
            auto it = symbolTable.find(name);
            if (it != symbolTable.end()) {
                return it->second;
            } else {
                // Manejar el caso en el que la variable no está en el entorno
                cerr << "Error: Variable '" << name << "' no encontrada." << endl;
                return 0; // Valor predeterminado en caso de error
            }
        }

        // Método para buscar un símbolo en el entorno
        bool lookup(const string& name, int& value) const {
            auto it = symbolTable.find(name);
            if (it != symbolTable.end()) {
                value = it->second;
                return true; // El símbolo existe en el entorno
            } else {
                // El símbolo no existe, se devuelve un valor predeterminado
                cerr << "Advertencia: Símbolo '" << name << "' no encontrado en el entorno." << endl;
                return false;
            }
        }

        // Método para agregar información adicional al entorno
        void addMetadata(const string& key, int value) {
            symbolTable[key] = value;
        }

        // Método para obtener información adicional del entorno
        int getMetadata(const string& key) const {
            auto it = symbolTable.find(key);
            if (it != symbolTable.end()) {
                return it->second;
            } else {
                // Manejar el caso en el que la información no está en el entorno
                cerr << "Error: Información '" << key << "' no encontrada." << endl;
                return 0; // Valor predeterminado en caso de error
            }
        }
};

int main() {
    Environment env;

    env.insert("x", 10);

    int x = env.getVariable("x");
    if (env.lookup("x", x)) {
        cout << "El valor de x: " << x << endl;
    }
    else {
        cout << "No se encontró el valor de x" << endl;
    }

    env.addMetadata("y", 20);

    int y = env.getMetadata("y");
    if (env.lookup("y", y)) {
        cout << "El valor de y: " << y << endl;
    }
    else {
        cout << "No se encontró el valor de y" << endl;
    }
}