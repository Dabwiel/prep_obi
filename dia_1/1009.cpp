#include <bits/stdc++.h>

using namespace std;

int main()
{
	string nome;
	float salario, total_vendas;
	
	cin >> nome >> salario >> total_vendas;
	
	cout << "TOTAL = R$ " << fixed << setprecision(2) << (salario + (total_vendas * 0.15)) << endl;
	
	return 0;
}