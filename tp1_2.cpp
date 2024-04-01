#include <stdio.h>
/*
!resuelva las siguientes tareas mediante el uso de funciones:
a) Haga una función que devuelva el cuadrado de un número
b) Haga la función anterior, pero devolviendo un tipo void
c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable
d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos.
*void Invertir(a,b) //deberá devolver en el valor de a en lavariable b, y en el valor de b el valor de a
e) Dado dos parámetros de entrada, deberá devolverlos de formaordenada, en el primer parámetro el menor y en el segundo el mayor.
*void orden(a,b) //deberá devolver en el valor de a el valor más chico, y en el valor de b el valor más grande
f) Utilice las funciones anteriores para leer pares de valores e imprimirlospor pantalla.
*/

int cuadrado(int lado);
void imprimirCuadrado(int lado);
void mostrarDetalles(int var);//Para este caso suponemos que la variable es integer
void invertir(int a, int b);
void orden(int a, int b);

int main(){
    int a, b, numCuadrado;
    printf("PAR DE VALORES\n");
    printf("Ingrese el valor de a\n");
    scanf("%d",&a);
    printf("Ingrese el valor de b\n");
    scanf("%d",&b);
    numCuadrado = cuadrado(a);
    printf("\nEl cuadrado de %d es: %d\n",a,numCuadrado);
    imprimirCuadrado(b);
    mostrarDetalles(a);
    mostrarDetalles(b);
    invertir(a, b);
    orden(a,b);
    return 0;
}

int cuadrado(int lado)
{
    return lado *  lado;
}

void imprimirCuadrado(int lado)
{
    printf("\nEl cuadrado de %d es: %d\n",lado, lado * lado);
}

void mostrarDetalles(int var)
{
    printf("\nEl contenido de la variable es: %d\n",var);
    printf("\nLa direccion de memoria de la variable es: %p\n",&var);
}

void invertir(int a, int b)
{
    printf("\n Invirtiendo valores...\n");
    printf("\n El valor de la variable a es: %d\n",b);
    printf("\n El valor de la variable b es: %d\n",a);
}

void orden(int a, int b)
{
    printf("\n Ordenando...\n");
    if (a < b)
    {
     printf("a = %d\n",a);
     printf("b = %d\n",b);   
    }else
    {
    printf("a = %d\n",b);
    printf("b = %d\n",a); 
    }
    
}
