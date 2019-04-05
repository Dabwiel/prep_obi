#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	n -= 1;
	
	int numeros[n];
	for(int i = 0; i < n; i++)
		cin >> numeros[i];
	
	int i, j;
	int aux;
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(numeros[i] > numeros[j]){
				aux = numeros[i];
				numeros[i] = numeros[j];
				numeros[j] = aux;
			}
		}
	}
	
	for(i = 0; i < n; i++){
		if(numeros[i] != i + 1) break;
	}

	cout << i + 1 << endl;
	
	return 0;
}