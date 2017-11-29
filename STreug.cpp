#include <iostream>
#include <math.h>


STreug(int a, int b, int y)
{
	
   if (a<0||b<0||y<0||y>180){
   	std::cout << "Eror" << std::endl;
   }

   
    
    double S = a*b*sin(y*M_PI/180)/2;
    std::cout << "S=" << S << std::endl; 
	   
 
    return 0;
}
main(){
	std::cout<< "a=20, b=25, y=90 \n";
	STreug(20,25,90);
}
