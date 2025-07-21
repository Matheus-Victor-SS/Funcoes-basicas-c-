#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, t, r;
	cout <<"Insira um valor: ";
	cin>>n;
	t=-1;
	while (t<10){
	t=t+1;
	r=n*t;
	cout<<"\n"<< n << "x" << t <<"=" << r;
}
	return 0;
}
