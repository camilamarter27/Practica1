# Cajero automatico

# Descripción del sistema
Este proyecto consiste en un programa desarrollado en lenguaje C que simula el funcionamiento básico de un cajero automático. El sistema permite que usuarios previamente registrados puedan iniciar sesión utilizando su nombre y contraseña, y realizar operaciones sobre su cuenta como consultar saldo, depositar dinero y retirar dinero.

# Funcionalidades implementadas
El sistema cuenta con un inicio de sesión donde se validan las credenciales del usuario.
Una vez dentro, se muestra un menú interactivo que permite:

* Consultar el saldo disponible
* Depositar dinero en la cuenta
* Retirar dinero si hay fondos suficientes
* Salir del sistema

El programa se mantiene en ejecución hasta que el usuario decide salir.

# Instrucciones para compilar el programa en C
Para compilar el programa, se debe abrir la terminal en la carpeta donde se encuentra el archivo main.c y ejecutar el siguiente comando:
gcc main.c -o cajero

# Instrucciones para ejecutar el sistema
Luego de compilar, se puede ejecutar el programa con el siguiente comando:
./cajero

Con esto, cualquier usuario puede ejecutar el sistema y utilizar las funciones del cajero automático desde la consola.

# Mejoras realizadas
