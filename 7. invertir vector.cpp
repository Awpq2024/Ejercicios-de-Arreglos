#include <iostream>
using namespace std;

void invertirVector(int vector[],int n){
	int auxiliar;
	
	for(int i=0;i<n/2;i++){
		auxiliar=vector[i];
		vector[i]=vector[n-i-1];
		vector[n-i-1]=auxiliar;
	}
}

int main(){
	int vector[100];
	int n;
	cout<<"Ingrese una cantidad positiva de elementos menores o iguales a 100 para el vector: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Ingrese el numero "<<i+1<<": ";
		cin>>vector[i];
	}

	invertirVector(vector,n);
	
	for(int i=0;i<n;i++){
		cout<<vector[i]<<endl;
	}

	return 0;
}