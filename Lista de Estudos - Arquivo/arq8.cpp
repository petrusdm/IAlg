#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

	float valor, rcx, rtrufa, rjuj;
	int cx, trufa, juj, drops, bala;
	
	cin>>valor;
	
	cx=valor/13.50;
	rcx=valor-float(cx)*13.50;
	trufa=rcx/2.50;
	rtrufa=rcx-float(trufa)*2.50;
	juj=rtrufa/1.5;
	rjuj=rtrufa-float(juj)*1.5;
	drops=rjuj/1;
	bala=(rjuj-drops)/0.25;
	
	ofstream arq("doces.txt");
	arq<<fixed<<setprecision(2)<<valor<<endl;
	arq<<cx<<endl<<trufa<<endl<<juj<<endl<<drops<<endl<<bala;
	
	return 0;
}
