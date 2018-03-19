#include <iostream>
using namespace std;

int csoki = 1;
int* az_a_csoki = 0;

int main()
{
	cout << "ennyi csoki van:" << csoki << endl;
	az_a_csoki = &csoki;
	*az_a_csoki = 0;
	cout << "ennyi csoki maradt:" << csoki << endl;
	return 0;
}

