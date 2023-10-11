#include<stdio.h>

int main(){
    int n;
    long int factorial = 1;

    printf("ingrese un numero entero: ");
    scanf("%d", &n);

    if (n >= 1)
    {
        do{
            factorial *= n;
            n--;
        } while (n > 1);
        
        printf("el factorial es: %ld \n", factorial);
    } else {
        printf("numero no valido");
    }

    return 0;
}