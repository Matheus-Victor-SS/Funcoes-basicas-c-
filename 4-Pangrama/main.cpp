#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv){
	string a;
	int M, carac=0;
	char x='a', z='a';
	cout<<"Insira a frase(com letras minusculas) para descobrir se eh um PANGRAMA: \n";
	getline(cin, a);

	for(x='a'; x<='z'; x++){
		for(M=0; M<200; M++){
			if(a[M]!=' ' and a[M]!='.' and a[M]!=',' and a[M]!='k' and a[M]!='w' and a[M]!='y'){
				if(a[M]==x){
					carac++;
					a[M]=' ';
					x++;
					M=0;
				}
			}
		}
	}
	if(carac==23){
		cout<<"S";
	}
	else{
		cout<<"N";
	}
}
