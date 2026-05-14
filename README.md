# Uso de struct en C++ (Arduino)

Una estructura (struct) es una agrupación lógica de variables de diferentes tipos bajo un mismo nombre o identificador. Su objetivo principal es aumentar el nivel de abstracción del código, permitiendo representar conceptos complejos de manera más simple y organizada.

# Características Principales:

- Agrupación de Datos: Permite contener múltiples elementos llamados "campos", los cuales pueden ser de distintos tipos de datos (int, float, byte, etc.).  
- Simplificación: Facilita la gestión de grandes volúmenes de datos relacionados entre sí, evitando la creación excesiva de variables globales independientes.  
- Sintaxis: Se define utilizando la palabra clave struct, seguida del nombre de la estructura y sus campos encerrados entre llaves {}.  
- Instanciación: Permite declarar múltiples variables (instancias) que comparten la misma estructura base.

# Ejemplo de Aplicación:

En proyectos de robótica, una estructura puede representar a un robot completo, almacenando en un solo lugar su estado de activación, posiciones de ejes, puertos de interfaz y velocidades.

<img width="864" height="725" alt="image" src="https://github.com/user-attachments/assets/5b568330-cb99-4748-8d97-ff80a8f76cd0" />

# Dato Clave: 
Las estructuras fueron el paso previo fundamental antes de la llegada de la Programación Orientada a Objetos (OOP) y las clases, permitiendo un manejo de datos mucho más eficiente en sistemas embebidos.
