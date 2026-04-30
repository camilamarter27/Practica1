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

// Funcion menu
// Permite usar el cajero con el usuario que inició sesión
void menu(struct Usuario *u) {

    int opcion;
    float monto;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Consultar saldo\n");
        printf("2. Depositar\n");
        printf("3. Retirar\n");
        printf("4. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);


       //Seleccion de opciones del menu
               switch(opcion) {
            
            //Mostrar saldo en pantalla
            case 1:
                printf("Saldo: %.2f\n", u->saldo);
                break;


            //Deposito
            case 2:
                printf("Monto a depositar: ");
                scanf("%f", &monto);
                u->saldo += monto;
                printf("Deposito realizado");
                break;

            //Retiro
            case 3:
                printf("Monto a retirar: ");
                scanf("%f", &monto);

                if(monto <= u->saldo) {
                    u->saldo -= monto;
                    printf("Retiro realizado");
                } else {
                    printf("Fondos insuficientes");
                }
                break;
            //Cerrar sesion/abandonar sistema  
            case 4:
                printf("Abandonando sistema...");
                break;

            //Error o invalidacion en caso de repuesta no seleccionable
            default:
                printf("Opcion invalida\n");
        }

    } while(opcion != 4);
}

int main () {

    int total = 3;
    int index;

    index = login(registro, total);

    if(index == -1) {
        printf("Acceso denegado\n");
    } else {
        printf("Bienvenido %s\n", registro[index].nombre);

        menu(&registro[index]); // se llama el menu con el usuario
    }

    return 0;
}