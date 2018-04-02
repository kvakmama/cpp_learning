#include <unistd.h>
#include <iostream>
using namespace std;

class krumplisZsak
{
public:
	int krumplikSzama;
	krumplisZsak()
	{
		krumplikSzama = 0;
	}

	krumplisZsak(krumplisZsak const& eredeti)
	{
		cout << "most csinalunk meg egy krumpliszsakot\n";
		sleep(3);
	}
};

void egyelKrumplit(krumplisZsak& mennyibol)
{
	mennyibol.krumplikSzama--;
}

void nyalogassad(krumplisZsak mennyit)
{
	mennyit.krumplikSzama = 0;
}

int main()
{
	krumplisZsak zsak;
       	zsak.krumplikSzama = 5;
	cout << "kezdetben van " << zsak.krumplikSzama << "krumpli\n";
	egyelKrumplit(zsak);
	cout << "maradt " << zsak.krumplikSzama << " krumpli\n";
	nyalogassad(zsak);
	cout << "maradt " << zsak.krumplikSzama << " krumpli\n";
	return 0;
};
