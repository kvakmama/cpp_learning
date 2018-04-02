#include <iostream>
#include <string>
using namespace std;

void duplikaldmeg(string& be)
{
	be = be + be;
}

void atbaszos_duplikalas(string be)
{
	be = be + be + be;
	cout << be << endl;
}

int main()
{
	string bemenet = "lelelele";
	cout << "ez vooot: " << bemenet << endl;
	duplikaldmeg(bemenet);
	cout << "ez lett: " << bemenet << endl;
	atbaszos_duplikalas(bemenet);
	cout << "atbaszos: " << bemenet << endl;

	return 0;
}
