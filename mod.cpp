#include <iostream>
using namespace std;

main()
{
	while(true){
		int mod = 26;
		int a, h;
		cout << "\nMasukan Angka : "; cin >> a;
		h = a % mod;
		cout << "Hasilnya adalah : " << h;	
	}
}
