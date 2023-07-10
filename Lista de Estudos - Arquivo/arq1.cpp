#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	string arq, palavra;
	cin>> arq;
	
	ifstream arquivo(arq);
	arquivo>>palavra;
	cout<<palavra;
	
	return 0;
}
