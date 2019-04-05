#include <bits/stdc++.h>

using namespace std;

int main()
{
	int cartas[5];
	for(int i = 0; i < 5; i++)
		cin >> cartas[i];
	
	int logico = 0;
	for(int i = 0; i < 4; i++){
		if(cartas[i] < cartas[i+1]) {
            logico += 1;
			continue;	
		}
		if(cartas[i] > cartas[i+1]){
			logico += 2;
			continue;	
		} 
	}
	
	if(logico == 4) cout << 'C' << endl;
	else if(logico == 8) cout << 'D' << endl;
	else cout << 'N' << endl;
	
	return 0;
}