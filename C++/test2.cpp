#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <bitset>
#include <fstream>  
using namespace std;
void persegi(){
	int sisi,L,Kll;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                   Mencari Luas & Keliling Persegi               ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Sisi : ";
	cin >> sisi;
	L = sisi*sisi;
	Kll = 6*sisi;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                   Mencari Luas & Keliling Persegi               ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Sisi\t: " << sisi;
	cout << "\n\t\t\t>> Luas\t: " << L;
	cout << "\n\t\t\t>> Keliling\t: " << Kll;
}
void persegiP(){
	int p,l,L,Kll;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||              Mencari Luas & Keliling Persegi Panjang            ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Panjang : ";
	cin >> p;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||              Mencari Luas & Keliling Persegi Panjang            ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Lebar : ";
	cin >> l;
	L = p*l;
	Kll = 2*(p+l);
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||              Mencari Luas & Keliling Persegi Panjang            ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Panjang\t: " << p;
	cout << "\n\t\t\t>> Lebar\t: " << l;
	cout << "\n\t\t\t>> Luas\t: " << L;
	cout << "\n\t\t\t>> Keliling\t: " << Kll;
}

void siku2(){
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
	cout << "\n\t\t\t>> Luas\t: " << L1;
	cout << "\n\t\t\t>> Keliling\t: " << Kll1 << "\n\n";
	system("pause");
}

void samasisi(){
	int a,t,L,Kll;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||            Mencari Luas & Keliling Segitiga Sama Sisi           ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Alas : ";
	cin >> a;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||            Mencari Luas & Keliling Segitiga Sama Sisi           ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Tinggi : ";
	cin >> t;
	L = a*t/2;
	Kll = a*3;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||            Mencari Luas & Keliling Segitiga Sama Sisi           ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Alas\t\t: " << a;
	cout << "\n\t\t\t>> Tinggi\t: " << t;
	cout << "\n\t\t\t>> Luas\t\t: " << L;
	cout << "\n\t\t\t>> Keliling\t: " << Kll << "\n\n";
	system("pause");
	
}

void samakaki(){
	int a,t,c,L,Kll;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||           Mencari Luas & Keliling Segitiga Siku - Siku          ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Alas : ";
	cin >> a;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||           Mencari Luas & Keliling Segitiga Siku - Siku          ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Tinggi : ";
	cin >> t;
	L = a*t/2;
	c = sqrt((a*a)+(t*t));
	Kll = a+t+c;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||           Mencari Luas & Keliling Segitiga Siku - Siku          ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Alas\t\t: " << a;
	cout << "\n\t\t\t>> Tinggi\t: " << t;
	cout << "\n\t\t\t>> Sisi Miring\t: " << c;
	cout << "\n\t\t\t>> Luas\t: " << L;
	cout << "\n\t\t\t>> Keliling\t: " << Kll << "\n\n";
	system("pause");
	
}
int lingkaran(){
	float r,L,Kll;
	const double pi = 3.14;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                Mencari Luas & Keliling Lingkaran                ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Jari - Jari : ";
	cin >> r;
	L = pi*r*r;
	Kll = pi*(r*2);
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                Mencari Luas & Keliling Lingkaran                ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Jari - Jari\t: " << r;
	cout << "\n\t\t\t>> Luas\t\t: " << L;
	cout << "\n\t\t\t>> Keliling\t: " << Kll;
}
int jajargenjang(){
	int a,b,t,L,Kll;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||              Mencari Luas & Keliling Jajar Genjang              ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Alas\t\t: " ;
	cin >> a;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||              Mencari Luas & Keliling Jajar Genjang              ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Tinggi\t: " ;
	cin >> t;
	L = a*t;
	b = sqrt((a*a)+(t*t));
	Kll = 2*(a+b);
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||              Mencari Luas & Keliling Jajar Genjang              ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Alas\t\t: " << a;
	cout << "\n\t\t\t>> Tinggi\t: " << t;
	cout << "\n\t\t\t>> Sisi Miring\t: " << b;
	cout << "\n\t\t\t>> Luas\t\t: " << L;
	cout << "\n\t\t\t>> Keliling\t: " << Kll << "\n\n";
	
}
int trapesium(){
	int a,b,alas,t,c,L,Kll;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                 Mencari Luas & Keliling Trapesium               ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> A : ";
	cin >> a;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                 Mencari Luas & Keliling Trapesium               ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> B : ";
	cin >> b;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                 Mencari Luas & Keliling Trapesium               ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Tinggi : ";
	cin >> t;
	alas = (a-b)/2;
	c = sqrt((alas*alas)+(t*t));
	L = 0.5*(a+b)*t;
	Kll = a+b+c*2;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                 Mencari Luas & Keliling Trapesium               ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Sisi A\t: " << a;
	cout << "\n\t\t\t>> Sisi B\t: " << b;
	cout << "\n\t\t\t>> Alas\t\t: " << alas;
	cout << "\n\t\t\t>> Tinggi\t: " << t;
	cout << "\n\t\t\t>> Sisi Miring\t: " << c;
	cout << "\n\t\t\t>> Luas\t: " << L;
	cout << "\n\t\t\t>> Keliling\t: " << Kll << "\n\n";
	system("pause");
}
int belahketupat(){
	int d1,d2,c,L,Kll;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||               Mencari Luas & Keliling Belah Ketupat             ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> D1 : ";
	cin >> d1;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||               Mencari Luas & Keliling Belah Ketupat             ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> D2 : ";
	cin >> d2;
	c = sqrt(((d1/2)*(d1/2))+((d2/2)*(d2/2)));
	L = 0.5*d1*d2;
	Kll = 4*c;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||               Mencari Luas & Keliling Belah Ketupat             ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Sisi D1\t: " << d1;
	cout << "\n\t\t\t>> Sisi D2\t: " << d2;
	cout << "\n\t\t\t>> Sisi Miring\t: " << c;
	cout << "\n\t\t\t>> Luas\t: " << L;
	cout << "\n\t\t\t>> Keliling\t: " << Kll << "\n\n";
	system("pause");
}
int layang2(){
	int BE,DE,AC,c1,c2,L,Kll;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||               Mencari Luas & Keliling Layang Layang             ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> BE : ";
	cin >> BE;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||               Mencari Luas & Keliling Layang Layang             ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> DE : ";
	cin >> DE;
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||               Mencari Luas & Keliling Layang Layang             ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> AC : ";
	c1 = sqrt((BE*BE)+((AC/2)*(AC/2)));
	c2 = sqrt((DE*DE)+((AC/2)*(AC/2)));
	L = 0.5*(BE+DE)*AC;
	Kll = 2*(c1+c2);
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||               Mencari Luas & Keliling Layang Layang             ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Sisi BE\t: " << BE;
	cout << "\n\t\t\t>> Sisi DE\t: " << DE;
	cout << "\n\t\t\t>> Sisi AC\t: " << AC;
	cout << "\n\t\t\t>> Sisi AB/BC\t: " << c1;
	cout << "\n\t\t\t>> Sisi AD/DC\t: " << c2;
	cout << "\n\t\t\t>> Luas\t: " << L;
	cout << "\n\t\t\t>> Keliling\t: " << Kll << "\n\n";
	system("pause");
}
int credits(){
	int cmenu;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                       Program Sederhana C++                     ||";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t||  Create By : Bagus Perwira                                      ||";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t||  Date Created : 11/09/2023                                      ||";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t**=================================================================**";

}
void form(){
	string nama,blnn,pesan,jenk,jk,hobi;
	int hL,blnL,thnL;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                      Formulir Sederhana C++                     ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Nama : ";
	cin >> nama;
	do{
		system("cls");
		cout << "\n\t\t\t**=================================================================**";
		cout << "\n\t\t\t||                      Formulir Sederhana C++                     ||";
		cout << "\n\t\t\t**=================================================================**\n";
		cout << "\n\t\t\t\t\t\t>> A. Laki - Laki , B. Perempuan\n\t\t\t>> Jenis Kelamin : [A/B]? ";
		cin >> jk;
	}while(jk != "A" && jk != "B");
	
	do{
		system("cls");
		cout << "\n\t\t\t**=================================================================**";
		cout << "\n\t\t\t||                      Formulir Sederhana C++                     ||";
		cout << "\n\t\t\t**=================================================================**\n";
		cout << "\n\t\t\t>> Hari Lahir(1/31) : ";
		cin >> hL;
		system("cls");
		cout << "\n\t\t\t**=================================================================**";
		cout << "\n\t\t\t||                      Formulir Sederhana C++                     ||";
		cout << "\n\t\t\t**=================================================================**\n";
		cout << "\n\t\t\t>> Bulan Lahir(1/12) : ";
		cin >> blnL;
		system("cls");
		cout << "\n\t\t\t**=================================================================**";
		cout << "\n\t\t\t||                      Formulir Sederhana C++                     ||";
		cout << "\n\t\t\t**=================================================================**\n";
		cout << "\n\t\t\t>> Tahun Lahir : ";
		cin >> thnL;
	}while(hL > 31 || hL < 1 || blnL < 1 || blnL > 12);
		system("cls");
		cout << "\n\t\t\t**=================================================================**";
		cout << "\n\t\t\t||                      Formulir Sederhana C++                     ||";
		cout << "\n\t\t\t**=================================================================**\n";
		cout << "\n\t\t\t>> Hobi (1 Kata) : ";
		cin >> hobi;
		system("cls");
		cout << "\n\t\t\t**=================================================================**";
		cout << "\n\t\t\t||                      Formulir Sederhana C++                     ||";
		cout << "\n\t\t\t**=================================================================**\n";
		cout << "\n\t\t\t>> Email : ";
		cin >> pesan;
		switch(blnL){
			case 1:{
				blnn = "Jan";
			}
			case 2:{
				blnn = "Feb";
			}
			case 3:{
				blnn = "Mar";
			}
			case 4:{
				blnn = "Apr";
			}
			case 5:{
				blnn = "May";
			}
			case 6:{
				blnn = "Jun";
			}
			case 7:{
				blnn = "Jul";
			}
			case 8:{
				blnn = "Aug";
			}
			case 9:{
				blnn = "Sep";
			}
			case 10:{
				blnn = "Oct";
			}
			case 11:{
				blnn = "Nov";
			}
			case 12:{
				blnn = "Dec";
			}
		}
		if(jk == "A"){
			jenk = "Laki - Laki";
		}
		else{
			jenk = "Perempuan";
		}
		system("cls");
		cout << "\n\t\t\t**=================================================================**";
		cout << "\n\t\t\t||                      Formulir Sederhana C++                     ||";
		cout << "\n\t\t\t**=================================================================**\n";
		cout << "\n\t\t\t>> Nama\t\t\t: " << nama;
		cout << "\n\t\t\t>> Jenis Kelamin\t: " << jenk;
		cout << "\n\t\t\t>> Tanggal Lahir\t: " << hL << " " << blnn << " " << thnL;
		cout << "\n\t\t\t>> Hobi\t\t\t: " << hobi;
		cout << "\n\t\t\t>> Email\t\t: " << pesan;
}
int menutri(){
	int xmenutri;
	char rmenutri;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||              Menghitung Luas dan Keliling Bangun 2D             ||";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t||  1. Segitiga Siku - Siku                                        ||";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t||  2. Segitiga Sama Sisi                                          ||";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t||  3. Segitiga Sama Kaki                                          ||";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t>> Input\t: ";
	cin >> xmenutri;
	if (xmenutri < 1 || xmenutri > 3){
		cout << "\n\t\t\t>> Input Invalid!";
		cout << "\n\t\t\t>> Apakah Anda Ingin Mengulanginya? [Y/N]..";
		cin >> rmenutri;
		if (rmenutri == 'Y' || 'y'){
			return menutri();
		}
		else{
			system("exit");
		}
	}
	else {
		switch(xmenutri){
			case 1:{
				siku2();
				break;
			}
			case 2:{
				samasisi();
				break;
			}
			case 3:{
				samakaki();
				break;
			}
		}
	}
}
int kubus(){
	int sisi,Lp,V;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                    Mencari Luas & Volume Kubus                  ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Sisi : ";
	cin >> sisi;
	Lp = sisi*sisi*sisi;
	V = 6*sisi*sisi;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                    Mencari Luas & Volume Kubus                  ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Sisi\t: " << sisi;
	cout << "\n\t\t\t>> Luas\t: " << Lp;
	cout << "\n\t\t\t>> Keliling\t: " << V;
}
int balok(){
	int p,l,t,Lp,V;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                    Mencari Luas & Volume Balok                  ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Panjang : ";
	cin >> p;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                    Mencari Luas & Volume Balok                  ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Lebar : ";
	cin >> l;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                    Mencari Luas & Volume Balok                  ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Tinggi : ";
	cin >> t;
	Lp = p*l*t;
	V = 2*(p*l+p*t+l*t);
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                    Mencari Luas & Volume Balok                  ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Panjang\t: " << p;
	cout << "\n\t\t\t>> Lebar\t: " << l;
	cout << "\n\t\t\t>> Tinggi\t: " << t;
	cout << "\n\t\t\t>> Luas\t: " << Lp;
	cout << "\n\t\t\t>> Volume\t: " << V;
}
int tabung(){
	float r,t,L,V;
	const double pi = 3.14;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                  Mencari Luas & Keliling Tabung                 ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Jari - Jari : ";
	cin >> r;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                  Mencari Luas & Keliling Tabung                 ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Tinggi : ";
	cin >> t;
	L = 2*pi*r*r;
	V = pi*r*r*t;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                  Mencari Luas & Keliling Tabung                 ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Jari - Jari\t: " << r;
	cout << "\n\t\t\t>> Tinggi\t: " << t;
	cout << "\n\t\t\t>> Luas\t\t: " << L;
	cout << "\n\t\t\t>> Volume\t: " << V;
}
int bola(){
	float r,L,V;
	const double pi = 3.14;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                   Mencari Luas & Keliling Bola                  ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Jari - Jari : ";
	cin >> r;
	L = 4*pi*r*r;
	V = 4/3*pi*r*r*r;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                   Mencari Luas & Keliling Bola                  ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Jari - Jari\t: " << r;
	cout << "\n\t\t\t>> Luas\t\t: " << L;
	cout << "\n\t\t\t>> Volume\t: " << V;
}
int kerucut(){
	float r,t,s,L,V;
	const double pi = 3.14;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                 Mencari Luas & Keliling Kerucut                 ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Jari - Jari : ";
	cin >> r;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                 Mencari Luas & Keliling Kerucut                 ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Tinggi : ";
	cin >> t;
	s = sqrt(((r/2)*(r/2))+(t*t));
	L = pi*r*(r+s);
	V = 1/3*pi*r*r*t;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                 Mencari Luas & Keliling Kerucut                 ||";
	cout << "\n\t\t\t**=================================================================**\n";
	cout << "\n\t\t\t>> Jari - Jari\t: " << r;
	cout << "\n\t\t\t>> Tinggi\t: " << t;
	cout << "\n\t\t\t>> Luas\t\t: " << L;
	cout << "\n\t\t\t>> Volume\t: " << V;
}
int menu3D(){
	int xmenu3D;
	char rmenu3D;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||               Menghitung Luas dan Volume Bangun 3D              ||";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t||  1. Kubus                                                       ||";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t||  2. Balok                                                       ||";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t||  3. Tabung                                                      ||";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t||  4. Bola                                                        ||";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t||  5. Kerucut                                                     ||";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t>> Input\t: ";
	cin >> xmenu3D;
	if (xmenu3D < 1 || xmenu3D > 5){
		cout << "\n\t\t\t>> Input Invalid!";
		cout << "\n\t\t\t>> Apakah Anda Ingin Mengulanginya? [Y/N]..";
		cin >> rmenu3D;
		if (rmenu3D == 'Y' || 'y'){
			return menu3D();
		}
		else{
			system("exit");
		}
	}
	else {
		switch(xmenu3D){
			case 1:{
				kubus();
				break;
			}
			case 2:{
				balok();
				break;
			}
			case 3:{
				tabung();
				break;
			}
			case 4:{
				bola();
				break;
			}
			case 5:{
				kerucut();
				break;
			}
		}
	}
}
int menu2D(){
	int xmenu2D;
	char rmenu2D;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||              Menghitung Luas dan Keliling Bangun 2D             ||";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t||  1. Persegi                                                     ||";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t||  2. Persegi Panjang                                             ||";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t||  3. Segitiga                                                    ||";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t||  4. Lingkaran                                                   ||";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t||  5. Jajar Genjang                                               ||";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t||  6. Trapesium                                                   ||";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t||  7. Belah Ketupat                                               ||";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t||  8. Layang - Layang                                             ||";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t>> Input\t: ";
	cin >> xmenu2D;
	if (xmenu2D < 1 || xmenu2D > 8){
		cout << "\n\t\t\t>> Input Invalid!";
		cout << "\n\t\t\t>> Apakah Anda Ingin Mengulanginya? [Y/N]..";
		cin >> rmenu2D;
		if (rmenu2D == 'Y' || 'y'){
			return menu2D();
		}
		else{
			system("exit");
		}
	}
	else {
		switch(xmenu2D){
			case 1:{
				persegi();
				break;
			}
			case 2:{
				persegiP();
				break;
			}
			case 3:{
				menutri();
				break;
			}
			case 4:{
				lingkaran();
				break;
			}
			case 5:{
				jajargenjang();
				break;
			}
			case 6:{
				trapesium();
				break;
			}
			case 7:{
				belahketupat();
				break;
			}
			case 8:{
				layang2();
				break;
			}
		}
	}
}
int bitwiseOpt(){
	int a,b,AND,OR,XOR,LSHIFTA,RSHIFTA,NOTA,LSHIFTB,RSHIFTB,NOTB;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                          Bitwise Operator                       ||";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t>> A\t: ";
	cout << "\n\t\t\t>> B\t: ";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t>> AND\t\t\t: ";
	cout << "\n\t\t\t>> OR\t\t\t: ";
	cout << "\n\t\t\t>> XOR\t\t\t: ";
	cout << "\n\t\t\t>> LEFTSHIFT(A)\t\t: ";
	cout << "\n\t\t\t>> RIGHTSHIFT(A)\t: ";
	cout << "\n\t\t\t>> NOT(A)\t\t: ";
	cout << "\n\t\t\t>> LEFTSHIFT(B)\t\t: ";
	cout << "\n\t\t\t>> RIGHTSHIFT(B)\t: ";
	cout << "\n\t\t\t>> NOT(B)\t\t: ";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t>> A\t: ";
	cin >> a;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                          Bitwise Operator                       ||";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t>> A\t: " << a;
	cout << "\n\t\t\t>> B\t: ";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t>> AND\t\t\t: ";
	cout << "\n\t\t\t>> OR\t\t\t: ";
	cout << "\n\t\t\t>> XOR\t\t\t: ";
	cout << "\n\t\t\t>> LEFTSHIFT(A)\t\t: ";
	cout << "\n\t\t\t>> RIGHTSHIFT(A)\t: ";
	cout << "\n\t\t\t>> NOT(A)\t\t: ";
	cout << "\n\t\t\t>> LEFTSHIFT(B)\t\t: ";
	cout << "\n\t\t\t>> RIGHTSHIFT(B)\t: ";
	cout << "\n\t\t\t>> NOT(B)\t\t: ";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t>> B\t: ";
	cin >> b;
	AND = a & b;
	OR = a | b;
	XOR = a ^ b;
	LSHIFTA = a << 2;
	RSHIFTA = a >> 2;
	NOTA = ~a;
	LSHIFTB = b << 2;
	RSHIFTB = b >> 2;
	NOTB = ~b;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                          Bitwise Operator                       ||";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t>> A\t: ";
	cout << "\n\t\t\t>> B\t: ";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t>> AND\t\t\t: " << AND;
	cout << "\n\t\t\t>> OR\t\t\t: " << OR;
	cout << "\n\t\t\t>> XOR\t\t\t: " << XOR;
	cout << "\n\t\t\t>> LEFTSHIFT(A)\t\t: " << LSHIFTA;
	cout << "\n\t\t\t>> RIGHTSHIFT(A)\t: " << RSHIFTA;
	cout << "\n\t\t\t>> NOT(A)\t\t: " << NOTA;
	cout << "\n\t\t\t>> LEFTSHIFT(B)\t\t: " << LSHIFTB;
	cout << "\n\t\t\t>> RIGHTSHIFT(B)\t: " << RSHIFTB;
	cout << "\n\t\t\t>> NOT(B)\t\t: " << NOTB;
	cout << "\n\t\t\t**=================================================================**";
}
int ksemp(){
	float a,b,c,D,x1,x2;
	string text;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                          Kuadrat Sempurna                       ||";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t>> A\t: ";
	cout << "\n\t\t\t>> B\t: ";
	cout << "\n\t\t\t>> C\t: ";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t>> Diskriminan\t: ";
	cout << "\n\t\t\t>> Text\t: ";
	cout << "\n\t\t\t>> X1\t: ";
	cout << "\n\t\t\t>> X2\t: ";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t>> A\t: ";
	cin >> a;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                          Kuadrat Sempurna                       ||";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t>> A\t: " << a;
	cout << "\n\t\t\t>> B\t: ";
	cout << "\n\t\t\t>> C\t: ";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t>> Diskriminan\t: ";
	cout << "\n\t\t\t>> Text\t: ";
	cout << "\n\t\t\t>> X1\t: ";
	cout << "\n\t\t\t>> X2\t: ";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t>> A\t: ";
	cin >> b;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                          Kuadrat Sempurna                       ||";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t>> A\t: " << a;
	cout << "\n\t\t\t>> B\t: " << b;
	cout << "\n\t\t\t>> C\t: ";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t>> Diskriminan\t: ";
	cout << "\n\t\t\t>> Text\t: ";
	cout << "\n\t\t\t>> X1\t: ";
	cout << "\n\t\t\t>> X2\t: ";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t>> A\t: ";
	cin >> c;
	D = b-4*a*c;
	if(D > 0){
		text = "Angka Berbeda dan Real";
		x1 = (-b+sqrt(D))/2*a;
		x2 = (-b-sqrt(D))/2*a;
	}
	else if(D == 0){
		text = "Angka Sama dan Real";
		x1 = (-b+sqrt(D))/2*a;
		x2 = x1;
	}
	else{
		text = "Angka Tidak Real";
		x1 = 0;
		x2 = 0;
	}
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                          Kuadrat Sempurna                       ||";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t>> A\t: " << a;
	cout << "\n\t\t\t>> B\t: " << b;
	cout << "\n\t\t\t>> C\t: " << c;
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t>> Diskriminan\t: " << D;
	cout << "\n\t\t\t>> Text\t: " << text;
	cout << "\n\t\t\t>> X1\t: " << x1;
	cout << "\n\t\t\t>> X2\t: " << x2;
	cout << "\n\t\t\t**=================================================================**";
}
int menu(){
	int xmenu;
	char rmenu;
	system("cls");
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                       Program Sederhana C++                     ||";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t||  1. Formulir                                                    ||";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t||  2. Menghitung Luas & Keliling Bangun 2D                        ||";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t||  3. Menghitung Luas & Volume Bangun 3D                          ||";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t||  4. Kuadrat Sempurna                                            ||";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t||  5. Bitwise Operator                                            ||";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t||  6. Credits                                                     ||";
	cout << "\n\t\t\t||                                                                 ||";
	cout << "\n\t\t\t**=================================================================**";
	cout << "\n\t\t\t>> Input\t: ";
	cin >> xmenu;
	if (xmenu < 1 || xmenu > 6){
		cout << "\n\t\t\t>> Input Invalid!";
		cout << "\n\t\t\t>> Apakah Anda Ingin Mengulanginya? [Y/N]..";
		cin >> rmenu;
		if (rmenu == 'Y' || 'y'){
			return menu();
		}
		else{
			system("exit");
		}
	}
	else {
		switch(xmenu){
			case 1:{
				form();
				break;
			}
			case 2:{
				menu2D();
				break;
			}
			case 3:{
				menu3D();
				break;
			}
			case 4:{
				ksemp();
				break;
			}
			case 5:{
				bitwiseOpt();
				break;
			}
			case 6:{
				break;
			}
			case 7:{
				break;
			}
			case 8:{
				break;
			}
			case 9:{
				break;
			}
		}
	}
}
int main(){
	string UserN;
	string PassW;
	system ("color 17");
	system("cls");
	cout << "\n\t\t\t\t**============================================**";
	cout << "\n\t\t\t\t||                                            ||";
	cout << "\n\t\t\t\t||                    Welcome                 ||";
	cout << "\n\t\t\t\t||                                            ||";
	cout << "\n\t\t\t\t**============================================**";
	cout << "\n\t\t\t\t>> Username\t: ";
	cin >> UserN;
	cout << "\t\t\t\t>> Password\t: ";
	cin >> PassW;
	
	if (UserN == "Bagus"){
		if (PassW == "github"){
			system("start www.github.com/zdev2");
		}
		else if (PassW == "09112023"){
			menu();
		}
		else{
			cout << "\n\t\t\t\t>> Password Salah!\n\n\n\n";
			system("pause");
			return main();
		}
	}
	else if (UserN == "Admin"){
		if (PassW == "test"){
			cout << "\n\t\t\t\t>> Welcome! \n\n\n\n\n";
			system("pause");
			return main();
		}
		else if (PassW == "1"){
			menu();
		}
		else{
			cout << "\n\t\t\t\t>> Password Salah!\n\n\n\n";
			system("pause");
			return main();
		}
	}
	else{
		cout << "\n\t\t\t\t>> Tidak Ada Username " << UserN << " !\n\n\n\n";
		system("pause");
			return main();
	}
		
	return 0;
}
