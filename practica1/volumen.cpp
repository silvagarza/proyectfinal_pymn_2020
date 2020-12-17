# include < stdio.h >
# include <math.h>
int  main () {
    const  float Pi = 3,14159 ;
    radio flotante = 0 ;
    flotar volumenEsfera = 0 ;
    
printf ( " Ingrese el radio de una esfera, en metros: " );
    scanf ( " % f " , & radio);
volumenEsfera = ( 4 / 3 ) * Pi * pow (radio, 3 );

    printf ( " \ n Pi% f \ n radio% f \ n El volumen de la esfera es% f metros cubicos " , Pi, radio, volumenEsfera);
    return  0 ;
}
