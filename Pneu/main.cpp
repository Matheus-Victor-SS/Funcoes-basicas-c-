#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int N, M, D;
    cout<<"Escreva a pressao desejada e a quantidade lida pela bomba: \n";
	cin>>N, cin>>M;
	
	if(N < 1 or N > 40){
		cout<<"Valor invalido( N deve ser > 1 e < 40)";
		return 0;
	}
	if(M < 1 or M > 40){
		cout<<"Valor invalido( M deve ser >1 e < 40)";
		return 0;
	}
	
	D = N - M;
	
	cout<<"A diferenca entre a pressão desejada e a lida eh de: " <<D ;
	
	return 0;
}
