# TF_COMPILERS u202021294 u201922128

## Integrantes
### -Alcides Rommel Charapaqui Reluz u202021294
### -Daniel Ulises Barrionuevo Gutierrez u201922128

## 1. Introduccion 
La presente introducción forma parte del informe final para el curso de Teoría de Compiladores, donde se documenta el diseño y la implementación de una shell personalizada. Este proyecto integra conceptos fundamentales de la interpretación de comandos y scripting, proporcionando un entorno interactivo que sirve como interfaz entre el usuario y el sistema operativo. El objetivo central ha sido crear una herramienta que no solo cumpla con los requisitos técnicos de la asignatura, sino que también promueva una comprensión más profunda de la teoría subyacente en la construcción de intérpretes y su relación con la interfaz de comandos de los sistemas. A través de este trabajo, buscamos demostrar una aplicación práctica de los principios de compilación y teoría de lenguajes de programación, culminando en una shell funcional con capacidades de scripting, ejecución de comandos y una serie de características avanzadas como el modo headless y la personalización del entorno de la shell.

## 2. Objetivos:

Los objetivos para el desarrollo de la shell personalizada, utilizando ANTLR4 y C++, se detallan a continuación con terminología técnica específica:

1. **Diseño de Lenguaje de Scripting**:
   - Desarrollar un lenguaje de scripting robusto con gramática definida en ANTLR4.
   - Incorporar estructuras de control como bucles (`for`, `while`), condicionales (`if`, `else`), operaciones lógicas, etc.
   - Facilitar la declaración y manipulación de variables y colecciones de datos.

2. **Implementación de Modo Headless**:
   - Habilitar ejecución de scripts sin interacción del usuario, adecuado para la automatización de tareas y entornos de CI/CD.
   - Permitir que la shell actúe como un intérprete que puede ser invocado por aplicaciones externas o por cron jobs.

3. **Gestión de Variables de Entorno**:
   - Implementar funcionalidades para el establecimiento y recuperación de variables de entorno, así como su persistencia entre sesiones.
   - Dotar a la shell de mecanismos para la configuración dinámica del entorno de ejecución.

4. **Integración de Comandos del Sistema**:
   - Proveer un puente entre el lenguaje de scripting y el sistema operativo para ejecutar comandos nativos y scripts externos.
   - Utilizar la API de sistemas de C++ para invocar y controlar procesos subyacentes.

5. **Desarrollo de Modo Interactivo con Prompt Personalizado**:
   - Diseñar una interfaz de usuario interactiva con un prompt que pueda ser personalizado con información del contexto de ejecución.
   - Incorporar un sistema de lectura-evaluación-impresión (REPL) que soporte autocompletado y sugerencias de comandos.

6. **Innovación con Característica Adicional**:
   - Investigar y seleccionar una característica innovadora que aporte valor añadido a la experiencia del usuario, como coloración sintáctica, historial de comandos con búsqueda, o integración con herramientas de terceros.

Estos objetivos están diseñados para explorar de manera integral la aplicación de la teoría de compiladores y las prácticas de desarrollo de software en la creación de herramientas de línea de comandos avanzadas.

## 3. Metodología:

El desarrollo de la shell personalizada se ha estructurado en varias etapas estratégicas, cada una con objetivos claros y enfoques metodológicos específicos:

### Fase 1: Análisis y Diseño
- **Comparativa de Shells Existentes**: Evaluación crítica de shells como Bash, Zsh y Fish para extrapolar funcionalidades clave y paradigmas de diseño.
- **Especificación de Requisitos**: Identificación precisa de las funcionalidades y caracteristicas que debe cumplir la shell, utilizando técnicas como casos de uso y diagramas de flujo.
- **Planificación**: Elaboración de un roadmap del proyecto con milestones específicos, asignación de responsabilidades y establecimiento de deadlines.

### Fase 2: Diseño de la Gramática y Pruebas con ANTLR
- **Definición de la Gramática en ANTLR4**: Utilización del poder expresivo de ANTLR4 para formular una gramática LL(*) que defina la sintaxis de nuestro lenguaje de scripting.
- **Iteraciones de Pruebas y Depuración**: Testeo intensivo de la gramática con casos de prueba representativos y ajuste fino mediante debugging iterativo.

### Fase 3: Implementación del Core de la Shell en C++
- **Desarrollo del Intérprete**: Programación en C++ del núcleo de la shell, aprovechando las bibliotecas estándar y técnicas de programación orientada a objetos para la gestión de la lógica de interpretación.
- **Integración del Sistema de Comandos**: Implementación de la interfaz de comando para ejecutar operaciones del sistema y scripts, utilizando la API de proceso de C++ y técnicas de interacción entre procesos.

### Fase 4: Implementación del Modo Interactivo y Pruebas de Usuario
- **Construcción del REPL**: Desarrollo del Read-Eval-Print Loop para el modo interactivo, integrando características como el autocompletado y la personalización del prompt.
- **Validación de la Usabilidad**: Realización de pruebas de usabilidad para optimizar la experiencia del usuario, recopilando y analizando feedback para iterar sobre la interfaz de usuario.

### Fase 5: Documentación y Despliegue
- **Documentación Técnica**: Creación de una documentación detallada, incluyendo manuales de usuario, documentación inline en el código y comentarios de API.
- **Preparativos para la Entrega**: Configuración de los procedimientos de build y despliegue, asegurando que la shell esté lista para su distribución y evaluación.

Cada fase ha sido diseñada para garantizar que se aborden todos los aspectos técnicos y de usuario del proyecto, asegurando que el producto final sea robusto, funcional y alineado con las necesidades de los usuarios finales.

## 4. Resultados:

![code_vs](https://cdn.discordapp.com/attachments/1159637113541759146/1177983849733570560/9da9f691-35d5-445c-9e9b-56fd3a3d5784.png?ex=65747df3&is=656208f3&hm=c9d9b364c8489f0b502a66eca964a81b372852d1b8f9bce474d267ab6eb7ff23&)

### Desarrollo de la Base de Código
- **Estructura del Proyecto**: Organización del código en varios módulos y clases, facilitando la mantenibilidad y la escalabilidad.
- **Intérprete de Comandos**: Creación de un intérprete básico que puede procesar y responder a comandos sencillos como `echo`.

### Implementación de la Gramática
- **ANTLR4**: Definición de la gramática necesaria para la interpretación de los comandos, utilizando ANTLR4 para generar el lexer y el parser correspondientes.
- **Visitors**: Implementación de las clases visitor en C++ para ejecutar la lógica específica asociada con cada comando y estructura de control parseados.

### Funcionalidades de la Shell
- **Comandos básicos**: Desarrollo parcial de comandos como `echo`, preparando el terreno para la inclusión de comandos más complejos.
- **Estructuras de Control**: Iniciación de la lógica para manejar estructuras de control, como se evidencia en la funcionalidad de evaluación de expresiones para estructuras `if`.

### Interfaz de Usuario
- **Interactividad**: Preparación del código para manejar la entrada del usuario en un modo interactivo, con un prompt definido y la capacidad para recibir y procesar comandos.

### Reflexión y Aprendizaje
- **Comprensión Profunda**: A través del desarrollo, el equipo ha obtenido una comprensión profunda de los principios de teoría de compiladores, especialmente en la creación de lenguajes de scripting y la interpretación de comandos.
- **Habilidades Técnicas**: Mejora de las habilidades técnicas en programación C++, manejo de herramientas de generación de código como ANTLR4 y uso de entornos de desarrollo integrado (IDE) modernos.

Estos resultados reflejan los avances considerables del equipo en la aplicación de conceptos teóricos a desafíos prácticos de desarrollo de software, sentando las bases para futuras mejoras y la eventual finalización de la shell personalizada.

## 5. Conclusiones Finales

Al concluir la fase de desarrollo del proyecto de la shell personalizada para el curso de Teoría de Compiladores, podemos destacar varios puntos clave:

- **Aplicación Práctica de la Teoría**: El proyecto ha demostrado ser una aplicación práctica exitosa de los principios de compiladores y lenguajes de programación. A través del desarrollo de una gramática específica y su implementación en ANTLR4 y C++, hemos obtenido una comprensión más profunda de la teoría de compilación y su relevancia en la creación de herramientas de software.

- **Desarrollo de Habilidades Técnicas**: Los miembros del equipo han reforzado sus habilidades en áreas críticas como la programación en C++, el diseño de lenguajes de scripting y la utilización de herramientas de compilación. La capacidad de traducir especificaciones de gramática en código ejecutable ha sido una experiencia de aprendizaje invaluable.

- **Resolución de Problemas y Depuración**: A pesar de que la compilación final no se completó con éxito, el proceso de depuración y resolución de problemas ha sido en sí mismo una lección en la importancia de la perseverancia y la metodología sistemática en el desarrollo de software.

- **Trabajo en Equipo y Gestión de Proyectos**: El proyecto ha fomentado el desarrollo de competencias de trabajo en equipo, comunicación efectiva y gestión de proyectos dentro de un contexto técnico complejo. Estas habilidades son esenciales para la carrera de cualquier ingeniero de software.

- **Bases para Futuras Mejoras**: Si bien no se logró una shell completamente funcional, se han establecido las bases sólidas para futuras iteraciones. Con el código ya desarrollado, los próximos pasos incluyen la depuración de problemas de compilación, la ampliación de la funcionalidad y la mejora de la interfaz de usuario.

En resumen, este proyecto ha cumplido con su propósito educativo al proporcionar una plataforma para la aplicación práctica de conocimientos teóricos, y aunque quedan desafíos por superar, los logros obtenidos hasta ahora auguran un futuro prometedor para el trabajo continuo en esta shell personalizada.

# Link de la exposicion: https://youtu.be/mWeU_4d48_8
