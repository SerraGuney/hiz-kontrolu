#include <iostream>
using namespace std;
int main() {
	int hiz,aracturu;
	/*Azami hýz
	otomobil:82
	otobüs:70
	kamyonet:50*/
	cout<<"aracinizin turunu giriniz (0=otomabil 1=otobus 2=kamyonet):";
	cin>>aracturu;
	cout<<"aracinizin hizini giriniz:";
	cin>>hiz;
	switch(aracturu){
		case 0: cout<<"arac otomobildir.";
		break;
			case 1: cout<<"arac otobustur.";
				break;
				case 2: cout<<"arac kamyonettir.";
					break;
					default: cout<<"yanlis sayi girdiniz";
	}
	cout<<endl;
	if(aracturu==0 && hiz>82){
		cout<<"arac cezalidir. ";
	}
	else if(aracturu==0 && hiz<=82){
		cout<<"arac hiza uygundur. ";
	}
	else if(aracturu==1 && hiz>70){
		cout<<"arac cezalidir. ";
	}
	else if(aracturu==1 && hiz<=70){
		cout<<"arac hiza uygundur.";
	}
	else if(aracturu==2 && hiz>50){
		cout<<"arac cezalidir. ";
	}
	else if(aracturu==2 && hiz<=50){
		cout<<"arac hiza uygundur. ";
	}
	return 0;
}
