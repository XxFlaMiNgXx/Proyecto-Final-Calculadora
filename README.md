# TF-Compiladores
## Integrantes:
- Díaz Aguirre, Milagros Gabriela (u202110587)
- Aragón Flores, María Laura (u202013882)
- Favio Enrique Arroyo Gamarra (u20222083)
  
# Problema
En los ámbitos de la educación, a menudo se requiere una solución ágil, confiable y fácil de entender para trabajar con operaciones matemáticas. Los lenguajes de programación convencionales como Python, Java o C++ pueden resultar demasiado complicados para tareas elementales como:
- Calcular el resultado de fórmulas matemáticas.
- Experimentar con diferentes valores numéricos.
- Operar con expresiones que incluyen números y letras.
Además, muchas calculadoras gráficas o científicas carecen de la capacidad de automatizar cálculos o guardar resultados para usarlos posteriormente, lo cual reduce su eficacia en situaciones que demandan la creación de pequeños programas matemáticos.

#  Motivación
El proyecto busca facilitar el procesamiento de expresiones matemáticas mediante un lenguaje diseñado exclusivamente para esta finalidad. Esta solución permitirá:
- Definir variables.
- Realizar operaciones aritméticas básicas.
- Visualizar resultados con una sintaxis simple y clara.
Esto reduce la curva de aprendizaje respecto a otros lenguajes de programación.
El lenguaje será interpretado utilizando **ANTLR4**, lo que permitirá validar su sintaxis y estructura desde las primeras fases de desarrollo. Este enfoque también servirá como base para introducir a los estudiantes en conceptos fundamentales de compilación e interpretación de lenguajes.

#  Objetivos
Diseñar e implementar un **lenguaje interpretado** para la evaluación de expresiones matemáticas básicas, utilizando **ANTLR4** como herramienta para la definición y análisis sintáctico del mismo.
## Objetivos Específicos

- ✅ Definir la gramática formal del lenguaje, permitiendo operaciones aritméticas, uso de variables, asignaciones y comandos de salida (`print`).
- ✅ Implementar los archivos fuente en ANTLR4 necesarios para generar el analizador léxico y sintáctico del lenguaje.
- ✅ Desarrollar un programa *driver* que lea instrucciones escritas en **CalcScript** y las procese mediante la gramática generada.
- ✅ Crear un *visitor* personalizado que permita evaluar las expresiones aritméticas y mantener un entorno de ejecución con almacenamiento de variables.

# Gramatica en ANTLR4
![image](https://github.com/user-attachments/assets/251fb29b-fad8-4c68-bdd9-a6b25f51185c)

# Arquitectura del Compilador CalcScript
El compilador sigue una arquitectura clásica de dos fases: **Frontend** y **Backend**.

---

##  Fase 1: Frontend (Análisis del Código Fuente)
Implementado con **ANTLR4**, transforma el código fuente `input.calc` en una estructura intermedia:
### 1. Lexer (`CalcScriptLexer`)
- Generado a partir de `CalcScript.g4`.
- Convierte caracteres en **tokens** significativos como `NUMBER`, `ID`, `+`, `print`, `;`.
- Ejemplo: `print 5 + x;` → `PRINT`, `NUMBER(5)`, `PLUS`, `ID(x)`, `SEMICOLON`.
### 2. Parser (`CalcScriptParser`)
- Verifica que los tokens sigan la gramática definida.
- Construye el **Parse Tree** (árbol de análisis sintáctico) que representa el programa.
---
## ⚙️ Fase 2: Backend (Generación de Código)

Transforma el Parse Tree en **código LLVM IR**.

### 3. Visitor (`CodeGeneratorVisitor`) – *Faltante*
- Clase que debe heredar de `CalcScriptBaseVisitor`.
- Implementa métodos como `visitPrint`, `visitAssignment`, `visitAdd`, etc.
- Recorre el Parse Tree para generar el código correspondiente.

### 4. Generación de LLVM IR
- Dentro de cada método `visit...`, se generan instrucciones como:
  - `add` para sumas.
  - `alloca` y `store` para asignaciones.
  - Llamadas a `@printf` para imprimir.
- **Estado actual**: El archivo `main.cpp` solo escribe un bloque fijo de LLVM, sin procesar el Parse Tree.

## Diagrama de flujo
<img width="739" height="402" alt="image" src="https://github.com/user-attachments/assets/ced30d66-1827-4501-971e-0598dcf06250" />

# Resultados de la validacion
<img width="1280" height="247" alt="image" src="https://github.com/user-attachments/assets/99fe1eaf-1eee-4ae7-981d-8c40b687abec" />
---
# Conclusiones
El compilador CalcScript ha logrado establecer una base sólida en cuanto a su **frontend**, utilizando ANTLR4 para analizar correctamente el código fuente, validar su sintaxis y construir un árbol de análisis sintáctico (Parse Tree). Esta parte demuestra un avance importante y una correcta implementación de la primera etapa del proceso de compilación.
Sin embargo, el proyecto presenta una **limitación crítica en su backend**: la **generación de código aún no está implementada**. Actualmente, el compilador ignora el Parse Tree y genera un archivo `output.ll` con un bloque de código LLVM estático, sin relación con el contenido real de `input.calc`. Esto impide que el compilador cumpla con su propósito fundamental: traducir código fuente en CalcScript a código LLVM IR personalizado y funcional.
En resumen, el compilador tiene la capacidad de **entender el lenguaje**, pero aún **no sabe traducirlo**. El siguiente paso esencial es implementar la clase visitante que recorra el árbol sintáctico y genere dinámicamente instrucciones LLVM equivalentes, permitiendo así que el compilador produzca resultados reales y útiles a partir del código fuente proporcionado por el usuario.


