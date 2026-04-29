#include <stdio.h>
#include <string.h>

//Estructura de usuarios
struct Usuario {
    char nombre [20];
    char contra [20];
    float saldo;
};
 

//Usuarios registrados (por defecto)
struct Usuario registro[] = {
{"Camila", "2703", 10000},
{"Mau", "0512", 45000},
{"Raquel", "1205", 27000}

};

int main () {

    return 0;
}
