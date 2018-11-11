#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main (){
	int a=120;
	cout<<"Bilangan Kelipatan 5 antara 125 sampai 200 = "<<endl;
	do {
		a+=5;
		cout<<a<<endl;
	} while (a<200);
	return 0;
}
