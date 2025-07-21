#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int A, B, C;
	
	cout<<"Digite dois valores inteiros para achar a mediana: \n";
	cin>>A, cin>>B;
	
	while(A<1 or B<A){	
		cout<<"Digite denovo, 'A' deve ser > 1 e 'B' deve ser maior que 'A': \n";
		cin>>A, cin>>B;
	}
	while(B>=1000000000){
		cout<<"Digite denovo, B nao deve ser maior do que 1000000000: \n";
		cin>>A,	cin>>B;
	}	
	if(A<=B){
		C=(A*2)-B;
	}
    cout<<C;
	return 0;
}
