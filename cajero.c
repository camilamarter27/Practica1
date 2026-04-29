#include <stdio.h>
#include <string.h>

//Estructura de usuarios
struct Usuario {
    char nombre [20];
    char contra [20];
    float saldo;
};

//Usuarios registrados
struct Usuario registro[] = {
    {"Camila", "2703", 10000},
    {"Mau", "0512", 45000},
    {"Raquel", "1205", 27000}
};

// Funcion login
// Pide usuario y contraseña, y verifica si coincide con alguno registrado
// "Return -1" si no coincide
int login(struct Usuario registro[], int total) {

    char nombre[20];
    char contra[20];

    printf("Ingrese su usuario: ");
    scanf("%s", nombre); // guarda el usuario ingresado

    printf("Ingrese su contraseña: ");
    scanf("%s", contra); // guarda la contraseña ingresada

    // Recorre todos los usuarios registrados
    for(int i = 0; i < total; i++) {

        // Compara el usuario y la contraseña
        if(strcmp(nombre, registro[i].nombre) == 0 &&
           strcmp(contra, registro[i].contra) == 0) {

            return i; // si coincide, devuelve la posicion
        }
    }

    return -1; // si no encuentra usuario registrado
}



int main (){

 int total = 3; // cantidad de usuarios
    int index;     // guardar la posicion del usuario

    index = login(registro, total); // llama a la funcion login

    // Verifica si el login fue correcto
    if(index == -1) {
        printf("Acceso denegado\n");
        
    } else {
        printf("Bienvenido %s\n", registro[index].nombre);
    }   

    return 0;

}