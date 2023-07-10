#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	string nome, palavra;
	cin>> nome>> palavra;
	
	ofstream arq(nome);
	arq<<palavra;
	
	return 0;
}
