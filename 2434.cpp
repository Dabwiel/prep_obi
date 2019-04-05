#include <bits/stdc++.h>

using namespace std;

int main()
{
	int menor = 1001;
	int n, saldo, aux;
	
	cin >> n >> saldo;
	
	while(n--){
		cin >> aux;
		saldo += aux;
		if(saldo < menor) menor = saldo;
	}

	cout << menor << endl;
	
	return 0;
}