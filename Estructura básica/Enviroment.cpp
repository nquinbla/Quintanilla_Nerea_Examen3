
#include "Enviroment.h"

int main() {

    Enviroment env;
    
    env.addVariable("x", 10);

    cout << "El valor de x: " << env.getVariable("x") << endl;

return 0;

}
