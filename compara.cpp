#include<iostream>
using namespace std;
int main ()

{
	float r,m;
	cout<<"ingrese r : "; cin>>r;
	cout<<"ingrese  m : "; cin>>m;

	if (r==m) { 
		cout<<"son iguales"<<endl;

	}else{
		if (r<m) {
	cout<<r<<"es menor que "<<m<<"r";

		}else{
		cout<<m<<"es menor que "<<r<<"m";

		}
	}

	return (0);

