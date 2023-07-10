#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
	
	int n1,n2,n3,p1,p2,p3;
	
	ifstream arq1("notas.txt");
	arq1>>n1>>p1>>n2>>p2>>n3>>p3;
	
	float nota_final;
	
	nota_final=float(n1*p1+n2*p2+n3*p3)/float((p1+p2+p3));
	
	ofstream arq2("final.txt");
	arq2<<fixed<<setprecision(2)<<nota_final;

	return 0;
}
