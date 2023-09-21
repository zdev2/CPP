#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    int a1,t1,c1,L1,Kll1;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||           Mencari Luas & Keliling Segitiga Siku - Siku          ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Alas : ";
	cin >> a1;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||           Mencari Luas & Keliling Segitiga Siku - Siku          ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Tinggi : ";
	cin >> t1;
	L1 = a1*t1/2;
	c1 = sqrt((a1*a1)+(t1*t1));
	Kll1 = a1+t1+c1;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||           Mencari Luas & Keliling Segitiga Siku - Siku          ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Alas\t\t: " << a1;
	cout << "\n\t\t\t>> Tinggi\t: " << t1;
	cout << "\n\t\t\t>> Sisi Miring\t: " << c1;
	cout << "\n\t\t\t>> Luas\t\t: " << L1;
	cout << "\n\t\t\t>> Keliling\t: " << Kll1 << "\n\n";
    return 0;
}