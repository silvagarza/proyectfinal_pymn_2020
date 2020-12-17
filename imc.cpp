#include <stdio.h>
#include <math.h>

int main ()
{
    char nombre [20]; 
    flotar altura, peso, IMC;
    int edad; // Definimos la variable edad como tipo entero

printf ("Introduce tu nombre:");
    scanf ("% scanf", nombre); 
    printf ("¿Cuál es tu edad?");
    scanf ("% d", & edad); // leemos y guardamos edad del usuario
    printf ("Introduce tu altura (cm):");
    scanf ("% f", & altura);
    printf ("Introduce tu peso (kg):");
    scanf ("% f", & peso);
    IMC = peso / pow (altura, 2);
    printf ("\ nNombre% s \ ntu edad es de% d \ ntu peso es de% f \ nIndice de masa corporal:% f", nombre, edad, peso, IMC);
    
    return 0;
}
