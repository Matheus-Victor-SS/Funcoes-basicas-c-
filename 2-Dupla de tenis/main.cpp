#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a, b, c, d, g, f, dif;
	
cout << "Digite o nivel de habilidade dos 4 jogadores, do menor para o maior: \n";
	cin >> a;	
	cin >> b;
	cin >> c;	
	cin >> d;

while(a<0 or b<a or c<b or d<c){

	cout<<"Coloque os niveis em sequencia crescente: \n";
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
}
	g = a + d;
	f = b + c;
	dif = g - f;

	cout << "A diferenca de nivel entre os times e de: \n" <<dif;
	return 0;
}

