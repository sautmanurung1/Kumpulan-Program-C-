#include <iostream>
using namespace std;
int main(){
	int hape;
	cout<<"kamu punya hape berapa ? ";
	cin>> hape;
	
	if (hape == 0){
		cout <<"waduh gak punya hape" <<endl;
	}
	if (hape == 1){
		cout << "Sabar yah, punya satu hape" <<endl;
	}
	if (hape == 2){
		cout << "Wah, hebat punya 2 hape" <<endl;
	}
	else{
		cout << "wadah wadah kamu punya lebih dar 2 hape" <<endl;
	}
}
