# Quintanilla_Nerea_Examen3
Examen de Nerea Quintanilla Blanco, Tema 3.

https://github.com/nquinbla/Quintanilla_Nerea_Examen3.git

La resolución de la "PARTE 1" está señalada en el mismo read.me, sin embargo la "PARTE 2" se encuentra en las diferentes carpetas. Cada parte del ejercicio esta explicado en el mismo read.me

Hola profe, me he liado con los ejercicios, empecé a hacerlos por separados pero al final decidi juntarlos todos en uno. Se que mientras lees esto (si lo lees) estas pensando en el pedazo de 0 que me vas a poner, como una calabaza redondita. Vivan las tartas de queso y muerte a los Luis, ten piedad corrigiendo porque al principio sabía lo que hacía, ahora no.

#### [PROGRAMAS USADOS EXTERNOS]
- GitHub Copilot (comentarios)
- UAX Campus, Programación (teoría)
- ChatGPT (corrección de errores)

## [PARTE 1] PREGUNTAS DE ELECCIÓN MÚLTIPLE (20%)
 1. ¿Cuál es el propósito principal de la clase Variant en el lenguaje Tiny Lisp?
    
      b). Representar cualquier tipo de dato Lisp. Ya que permite una mayor flexibilidad en la manipulación de datos en el programa.

    
 2. ¿Qué representación se obtiene al utilizar el método to_string() en un objeto Variant?

      a). Una cadena de texto que representa una instancia de Variant, incluida la representación de los datos contenidos en el objeto.

    
 3. ¿Qué función cumple el método to_json_string() en la clase Variant?
  
      b). Convierte un objeto Variant a una cadena JSON, recorriendo antes los datos contenidos en el objeto Variant.

    
 4. ¿Qué función cumple el método from_json_string() en la clase Variant?
  
      a). Convierte una cadena JSON en un objeto Variant.



## [PARTE 2] PREGUNTAS DE DESARROLLO DE CÓDIGO (80%): Sistema de Scripting para motor de Videojuegos Indie
### Estructura Básica:
Comienza definiendo la estructura básica de la clase Environment, asegurando que integra un std::map para la tabla de símbolos.

### Insertar Símbolos:
Implementa y prueba el método insert, asegurándote de que se puedan añadir nuevos símbolos al entorno sin conflictos.

### Búsqueda de Símbolos:
Implementa y prueba el método lookup, considerando casos en los que el símbolo pueda no existir en el entorno.

### Gestión de Errores:
Introduce mecanismos de manejo de excepciones para gestionar casos en los que se intenta acceder a un símbolo no existente o se intenta insertar un símbolo ya existente con un valor diferente.

### Integración con Variant:
Explica cómo la clase Environment trabaja en conjunto con Variant y demuestra su interacción mediante ejemplos prácticos.

### Expandiendo Funcionalidades:
Diseña y añade al menos dos funciones adicionales que consideres relevantes para la clase Environment, como eliminar un símbolo, verificar si existe, entre otros.

### Casos de Uso:
Proporciona ejemplos de cómo un diseñador o desarrollador de videojuegos podría usar la clase Environment en conjunto con Variant para personalizar el comportamiento de un juego.

### Reflexión y Mejoras:
Basándote en tu implementación, discute posibles mejoras o extensiones que podrían beneficiar al sistema de scripting en el futuro. Considera aspectos como la optimización, expansión de la tabla de símbolos, o la introducción de funciones más avanzadas.

