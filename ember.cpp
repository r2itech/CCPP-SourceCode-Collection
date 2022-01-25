#include <iostream>
using namespace std;

main()
{
	int E1 = 0;
	int E2 = 0;
	
	cout << "Ember 1 : " << E1 << "\nEmber 2 : " << E2;
	cout << "\n\n";
	E2 = 3;
	cout << "Ember 1 : " << E1 << "\nEmber 2 : " << E2;
	cout << "\n\n";
	E1 = E2;
	E2 -= E1;
	cout << "Ember 1 : " << E1 << "\nEmber 2 : " << E2;
	cout << "\n\n";
	E2 = 3;
	cout << "Ember 1 : " << E1 << "\nEmber 2 : " << E2;
	cout << "\n\n";
	E1 += E2 - 1;
	E2 -= (E2 - 1);
	cout << "Ember 1 : " << E1 << "\nEmber 2 : " << E2;
	cout << "\n\n";
	E1 -= E1;
	cout << "Ember 1 : " << E1 << "\nEmber 2 : " << E2;
	cout << "\n\n";
	E1 += E2;
	E2 -= E1;
	cout << "Ember 1 : " << E1 << "\nEmber 2 : " << E2;
	cout << "\n\n";
	E2 = 3;
	cout << "Ember 1 : " << E1 << "\nEmber 2 : " << E2;
	cout << "\n\n";
	E1 += E2;
	E2 -= (E1 - 1);
	cout << "Ember 1 : " << E1 << "\nEmber 2 : " << E2;
	cout << "\n\n";
}
