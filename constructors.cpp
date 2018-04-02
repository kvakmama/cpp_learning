#include <iostream>
using namespace std;


class Kesztyu
{
public:
	Kesztyu() {
		cout << "ez egy nagyon egyszeru kesztyu" << endl;
	}
	Kesztyu(int ujjak)
	{
		cout << "most meg egy " << ujjak << " ujjas kesztyut csinaltunk\n";
	}
	Kesztyu(Kesztyu const& eredeti)
	{
		cout << "most masolat kesztyut csinalunk" << endl;
	}
};


void veddFel(Kesztyu& kesz)
{
	cout << "felvettem\n";
}


int main()
{
	Kesztyu tyu;
	Kesztyu ketujjas(2);
	Kesztyu masolat(tyu);
	veddFel(tyu);
	return 0;
}

