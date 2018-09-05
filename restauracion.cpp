#include <iostream>
using namespace std;

int main(){
	int num;
	int *var;
	var=new int[num];
	cout <<"cuantos numeros quieres restaurar"<<endl;
	cin>>num;
	int arreglo[num];
	for(int i=0;i<num;i++)
	{
		cout<<"ingresa el numero ["<<i+1<<"]"<<endl;
		cin>>arreglo [i];
	}
	for(int i=0;i<num;i++)
	{
		cout<<"numero ["<<i+1<<"]"<<arreglo [i]<<endl;
	}
	delete[]var;
	return 0;
}


	
