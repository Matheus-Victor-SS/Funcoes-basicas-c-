#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a, b, c, d, e, f;
	cout << "DIgite o primeiro valor: " << "\n";
	cin >> a;
	cout << "Digite o segundo valor: " << "\n";
	cin >> b;
	
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	
	cout << "A soma de " << a << "+" << b << "=" << c << "\n";
	cout << "A subtracao de " << a << "-" << b << "=" << d << "\n";
	cout << "A multiplicacao de " << a <<"*" << b << "=" << e << "\n";
	cout << "A divisao de " << a <<"/" << b << "=" << f << "\n";
	return 0;
}
