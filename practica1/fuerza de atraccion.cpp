#include <stdio.h>

int main ()
{
    flotador constante g = 9,8; // gravedad
    flotador m = 0; // masa en kilogramos
    flotar w = 0; // fuerza de atraccion
    printf ("Introduce tu masa en kilogramos:");
    scanf ("% f", & m);
    w = m * g; // formula para sacar la fuerza de atraccion
    printf ("\ ng% f \ nm% f \ nTu fuerza de atraccion es de% f w", g, m, w);

    return 0;
}

