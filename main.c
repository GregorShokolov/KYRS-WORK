<<<<<<< HEAD
#include <stdio.h>
=======
#include <iostream>
>>>>>>> bc30ad693477c994bb9b4b8293d19db76050d40a
#include <math.h>
#include "STreug.h"


<<<<<<< HEAD
int main(){
    float a, b, y;
    double S;

    do{
    printf("Vvedite a: ");
    scanf("%f", &a);
    printf("Vvedite b: ");
    scanf("%f", &b);
    printf("Vvedite y: ");
    scanf("%f", &y);

    if(st(a, b, y, &S)==-1){
        printf("Na vhod podany nevernye dannye\n");
    }
    else 
        break;
    }
    while(1);
    printf("S = %f", S);
    return 1;
=======
main(){
	std::cout<< "a=10, b=15, y=60 \n";
	STreug(10,15,60);
>>>>>>> bc30ad693477c994bb9b4b8293d19db76050d40a
}
