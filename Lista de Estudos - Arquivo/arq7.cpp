#include <iostream>
#include <fstream>

using namespace std;

int main(){

	string nome1,palavra1,nome2,palavra2,nome3;
	
	cin>>nome1>>nome2>>nome3;
	
	ifstream arq1(nome1);
	arq1>>palavra1;
	
	ifstream arq2(nome2);
	arq2>>palavra2;
	
	ofstream arq3(nome3);
	arq3<<palavra1 + " " + palavra2;

	return 0;
}
