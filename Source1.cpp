#include <iostream>
#include <cmath>
using namespace std;

int main(){
int a;
int b;
int c;
int y;
double S=0;
	if (a < 0 || b < 0 || c < 0 || y < 0 || y > 180)
	{
		std::cout << "Неверные параметры треугольника" << std::endl;
	}
	cout << "A=  ";
	cin >> a;
	cout << "B=  ";
	cin >> b;
	cout << "C=  ";
	cin >> c;
	cout << "Ygol=  ";
	cin >> y;
 if (a==b,c==0)
	{
	S=(pow(a,2)*sin(y*M_PI/180)/2);
	}
	
	cout<<"Площадь треугольника= "<<S<<endl;
	return 0;

}
