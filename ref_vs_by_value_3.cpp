#include <iostream>
using namespace std;

class Cica
{
public:
	string mNev;
	Cica() {}
	Cica(Cica const& eredeti)
	{
		mNev = eredeti.mNev + " klonja";
		cout << "Leklonoztak " << eredeti.mNev << " cicat, lett belole " << mNev << endl;
	}
	~Cica()
	{
		cout << mNev << " megmurdalt\n";
	}
};


void NevezdEl(Cica cica, string nev)
{
	cica.mNev = nev;
}

void NevezdElDeTenyleg(Cica& cica, string nev)
{
	cica.mNev = nev;
}


int main()
{
	Cica egyCica;
	cout << "a cica neve " << egyCica.mNev << endl;
	NevezdEl(egyCica, "Lilike");
	cout << "a cica neve " << egyCica.mNev << endl;
	NevezdElDeTenyleg(egyCica, "Lilike");
	cout << "a cica neve " << egyCica.mNev << endl;
	return 0;
}
