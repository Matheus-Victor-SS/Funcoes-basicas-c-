#include <iostream>
#include <string>
using namespace std;
int main() {
	string a, b;
	int carac, j, k=0, f=0, e=0, c=0;
	bool ea=false;
	char x='a', z='a';
	cout<<"Digite o numero de caracteres: \n";
	cin>>carac;
	cout<<"Primeira frase: ";
	getline(cin, a); getline(cin, a);
	cout<<"Segunda frase: ";
	getline(cin, b);
	while(f<carac){
		for(j=0; j<carac; j++){
			if(a[j]!=' ' and a[j]!='.' and a[j]!=','){
				if(ea==false){
					e++;}
		    	}
			if(b[j]!=' ' and b[j]!='.' and b[j]!=','){
				if(ea==false){
					c++;}
			}
			if(a[j]!=' ' and a[j]!='.' and a[j]!=',' and b[j]!=' ' and b[j]!='.' and b[j]!=','){
				if(a[j]==b[f]){
					k++;   a[j]=' '; b[f]='0';
		    	}
	    	}
	}
	            f++; ea=true;}
	if(e==c and e==k){
    	cout<<"\n S";
	}       
	else{
		cout<<"\n N";
	}
}
