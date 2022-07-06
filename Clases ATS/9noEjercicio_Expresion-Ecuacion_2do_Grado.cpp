//9noEjercicio_Expresion
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float x,y,result =0;
	
	cout<<"Ingrese valor X: ";
	cin>> x;
	cout<<"Ingrese valor Y: ";
	cin>> y;
	
	result = (sqrt(x))/(pow(y,2)-1);
	cout.precision(2);
	
	cout<<"----------------------------\n";
	cout<<"Resultado: \n";
	cout<<" f(x,y) : "<<result;
	
	
	
	return 0;
}
