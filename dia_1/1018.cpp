#include <bits/stdc++.h>

using namespace std;

int main()
{
    int valor;
	cin >> valor;
	
	int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n = 0;
	int aux = valor;
	while(valor > 0)
	{
		if(valor >= 100)
		{
			valor -= 100;
			n100++;
		}
		else if(valor >= 50)
		{
			valor -= 50;
			n50++;
		}
		else if(valor >= 20)
		{
			valor -= 20;
			n20++;
		}
		else if(valor >= 10)
		{
			valor -= 10;
			n10++;
		}
		else if(valor >= 5)
		{
			valor -= 5;
			n5++;
		}
		else if(valor >= 2)
		{
			valor -= 2;
			n2++;
		}
		else
		{
			valor--;
			n++;
		}
	}
	
	cout << aux << endl;
	cout << n100 << " nota(s) de R$ 100,00" << endl;
	cout << n50 << " nota(s) de R$ 50,00" << endl;
	cout << n20 << " nota(s) de R$ 20,00" << endl;
	cout << n10 << " nota(s) de R$ 10,00" << endl;
	cout << n5 << " nota(s) de R$ 5,00" << endl;
	cout << n2 << " nota(s) de R$ 2,00" << endl;
	cout << n << " nota(s) de R$ 1,00" << endl;
			
	return 0;
}