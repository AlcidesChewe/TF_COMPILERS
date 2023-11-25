# TF_COMPILERS u202021294

## Integrantes
### -Alcides Rommel Charapaqui Reluz u202021294
### -Daniel Barrionuevo
## Introduccion 
La presente introducción forma parte del informe final para el curso de Teoría de Compiladores, donde se documenta el diseño y la implementación de una shell personalizada. Este proyecto integra conceptos fundamentales de la interpretación de comandos y scripting, proporcionando un entorno interactivo que sirve como interfaz entre el usuario y el sistema operativo. El objetivo central ha sido crear una herramienta que no solo cumpla con los requisitos técnicos de la asignatura, sino que también promueva una comprensión más profunda de la teoría subyacente en la construcción de intérpretes y su relación con la interfaz de comandos de los sistemas. A través de este trabajo, buscamos demostrar una aplicación práctica de los principios de compilación y teoría de lenguajes de programación, culminando en una shell funcional con capacidades de scripting, ejecución de comandos y una serie de características avanzadas como el modo headless y la personalización del entorno de la shell.

## Objetivos:

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



## Metodologia:

## Resultados:

## Conclusiones:
