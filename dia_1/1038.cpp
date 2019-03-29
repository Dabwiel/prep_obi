#include <bits/stdc++.h>

using namespace std;

int main()
{
	int cod, qtde;
	float total;
	
	cin >> cod >> qtde;
	
	switch(cod)
	{
        case 1:
        	total = 4.0 * qtde;
		    break;
		case 2:
			total = 4.5 * qtde;
			break;
		case 3:
			total = 5.0 * qtde;
			break;
		case 4:
			total = 2.0 * qtde;
			break;
		case 5:
			total = 1.5 * qtde;
			break;	
	}
	
	cout << "Total: R$ " << fixed << setprecision(2) << total << endl;
		
	return 0;
}