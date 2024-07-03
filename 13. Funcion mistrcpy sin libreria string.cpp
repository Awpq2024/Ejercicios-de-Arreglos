#include <iostream>
using namespace std;

void mistrcpy(char str1[],char str2[]){
	int i=0;
	for(i=0;str2[i]!='\0';i++){
		str1[i]=str2[i];
	}
	str1[i]='\0';
}


int main(){
	char str1[]="Oracion del Primer arreglo";
	char str2[]="Oracion del Segundo arreglo";
	
	cout<<"str1: "<<str1;
	cout<<"\nstr2: "<<str2<<endl;
	mistrcpy(str1,str2);
	cout<<"\nSe llama a la funcion mistrcpy(str1,str2)"<<endl;
	cout<<"\nstr1: "<<str1;
	
	return 0;
}

