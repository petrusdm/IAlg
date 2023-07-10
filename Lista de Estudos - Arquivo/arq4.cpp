#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	int numero, c, d, u;
	
	cin>>numero;
	
	c=numero/100;
	d=numero%100/10;
	u=numero%100%10;
	
	cout<<c+d+u;
	
	ofstream arq("saida.txt");
	arq<<c*d*u;
	
	return 0;
}
