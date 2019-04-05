#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; 
	cin >> n;
	
	int notas[n];
	for(int i = 0; i < n; i++)
		cin >> notas[i];
	
	int search, cont, maior_contagem = 0, mais_famoso;
	for(int i = 0; i < n; i++){
		search = notas[i];
		cont = 0;
		
		for(int j = i+1; j < n; j++){
			if(search == notas[j]) cont++;
		}
		
		if(cont >= maior_contagem){
			mais_famoso = search;
			maior_contagem = cont;
		}
	}
	
	cout << mais_famoso << endl;
	
	return 0;
}