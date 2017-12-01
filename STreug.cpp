#include <iostream>
#include <math.h>
#include <stdio.h>

STreug(int a, int b, int y)
{
	
   if (a<=0||b<=0||y<=0||y>=180){
   	printf("Error");
   } 
    else{
	
    double S = a*b*sin(y*M_PI/180)/2;
    printf("S= %f",S); 

	      
 
    return 0;
}}
main(){
	int a,b,y;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&y);
	//std::cout<<"a= "<<a<<"b= "<<b<<"y= "<<y<<endl;

	STreug(a,b,y);
}


