#include <iostream>
using namespace std;
int main() {
	int a, F, a1, a2, a3;
	a1 = 1;
	a2 = 1;
	a3 = 2;
	cin >> a;
	if (a == 1 || a == 2) cout << 1;
	else if (a == 0) cout << 0;
	else {
		for (int i = 3; i < a; i++)
		{
			a1 = a2;
			a2 = a3;
			a3 = a1 + a2;
		}
		cout << a3;
	}

}
