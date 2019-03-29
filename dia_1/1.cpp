#include <bits/stdc++.h>

using namespace std;

int busca(int *vetor, int inicio, int fim, int search)
{
	int meio = (inicio + fim)/2;
	if(vetor[meio] == search)
		return meio;
	else if(search < vetor[meio])
		return busca(vetor, inicio, meio, search);
	else
		return busca(vetor, meio, fim, search);
}

int main()
{
	int vetor[] = {10, 20, 30, 40, 50, 60, 70, 80};
	int search;
	
	cin >> search;
	cout << busca(vetor, 0, 8, search) << endl;
	
	return 0;
}