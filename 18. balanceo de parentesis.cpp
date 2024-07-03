#include <iostream>
using namespace std;

bool balanceoParentesis(string arreglo) {
    int contador=0;
    
    for (int i=0;arreglo[i]!='\0';i++){
    	if (arreglo[i]=='('){
    		contador++;
		}else if (arreglo[i]==')'){
			contador--;
			if (contador<0){
				return false;
			}
		}
	}
	return contador==0;
}

int main(){
	string cadena;
	cout<<"Ingrese una oracion con parentesis: ";
	getline(cin,cadena);
	
	if (balanceoParentesis(cadena)){
		cout<<"El balance de las parentesis es correcto";
	}else{
		cout<<"El balance de las parentesis es incorrecto";
	}
	
	return 0;
}