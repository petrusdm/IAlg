#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){

	float x1,x2,x3,x4,x5,x6,x7,x8,media;
	
	ifstream arq1("dados.txt");
	arq1>>x1>>x2>>x3>>x4>>x5>>x6>>x7>>x8;
	media=(x1+x2+x3+x4+x5+x6+x7+x8)/8;
	
	ofstream arq2("media.txt");
	arq2<<fixed<<setprecision(3)<<media;

	return 0;
}
