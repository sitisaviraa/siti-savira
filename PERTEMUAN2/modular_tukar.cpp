#include <iostream>
using namespace std;




void tukar (int *a, int *b){
	int c;
	c = *a;
	*a = *b;
	*b = c; 
}
int main ()
{
	int a, b;
	cout<<"sebelum ditukar"<<endl;
	cout<<"Masukan Nilai A = ";cin>>a;
	cout<<"Masukan Nilai B = ";cin>>b;
	
	tukar (&a,&b);

	cout<<"Sesudah ditukar"<<endl;
	cout<<"Hasil Nilai A = "<<a<<endl;
	cout<<"Hasil Nilai B = "<<b<<endl;
	cin.get();
	return 0;;
	
}
