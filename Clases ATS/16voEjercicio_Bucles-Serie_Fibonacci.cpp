/*16voEjercicio_Bucles

hacer un programa que realize la serie fibonacci -> 1 1 2 3 5 8 ... n
*/

#include <iostream>

using namespace std;

int main(){
	
	int num,x=0,y=1,z=1,i;
	
	cout<<"Ingrese el valor de n: ";
	cin>> num;
	cout<<"---------------------------\n";
	cout<<"El resultado es: \n";
	
	cout<<"1";
	if(num>0){
	for(i=1;i<num;i++){ 			//z=x+y
		z=x+y;
		cout<<"  "<<z;
		x=y;
		y=z;
	}
	}else {
		cout<<"Dato errado.";
	}
	
	
	
	system("pause>nul");
	return 0;
}


