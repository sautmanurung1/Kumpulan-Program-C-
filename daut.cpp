#include <iostream>
using namespace std;
main()
{
	int N;
	cout<<"N : ";cin>>N;
	if(N>=50){
		N=N-15;
		cout<<"Jakarta";
	}
	else if (N<=50){
		N=N+20;
		cout<<"Banten";
	}
	else {
		cout<<"Kata Lebih";
	}
}
