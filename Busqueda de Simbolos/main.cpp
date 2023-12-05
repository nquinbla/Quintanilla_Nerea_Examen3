// BUSQUEDA DE SÍMBOLOS

#include <iostream>
#include <string>
#include <map>

using namespace std;

class Environment {
        private:
        // Un solo map para variables y cualquier información adicional
        map<string, int> symbolTable;

        public:
        // Método para insertar un nuevo símbolo al entorno sin conflictos
        void insert(const string& name, int value) {
            auto it = symbolTable.find(name);
            if (it == symbolTable.end()) {
                // El símbolo no existe, se puede insertar
                symbolTable[name] = value;
                cout << "Símbolo '" << name << "' insertado exitosamente." << endl;
            } else {
                // El símbolo ya existe, muestra un mensaje de error
                cerr << "Error: Símbolo '" << name << "' ya existe en el entorno." << endl;
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