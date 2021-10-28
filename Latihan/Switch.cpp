#include<iostream>
using namespace std;
int main()
{
	int a =3;
	switch(a){
		case 2:
			cout << "Dua";
			break;
		case 5:
			cout << "lima";
			break;
		case 4:
			cout << "empat";
			break;
		default :
			cout << "Selain 2 dan 5";
	}
	return 0;
}
