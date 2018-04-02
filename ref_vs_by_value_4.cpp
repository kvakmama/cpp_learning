#include <iostream>
using namespace std;


void egyelKrumplit(int& mennyibol)
{
	mennyibol--;
}

void nyalogassad(int mennyit)
{
	mennyit = 0;
}

int main()
{
	int krumplikSzama = 5;
	cout << "kezdetben van " << krumplikSzama << "krumpli\n";
	egyelKrumplit(krumplikSzama);
	cout << "maradt " << krumplikSzama << " krumpli\n";
	nyalogassad(krumplikSzama);
	cout << "maradt " << krumplikSzama << " krumpli\n";
	return 0;
};
