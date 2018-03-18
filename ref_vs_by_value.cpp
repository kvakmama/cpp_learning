#include <iostream>
using namespace std;

class Cica
{
public:
	// members
	string mNev;
	// standard constructor
	Cica(string nev)
	{
		mNev = nev;
		cout << "Megszuletett " << mNev << endl;
	}
	// copy constructor
	Cica(Cica const& eredeti)
	{
		mNev = eredeti.mNev + " klonja";
		cout << "Leklonoztak " << eredeti.mNev << " cicat, lett belole " << mNev << endl;
	}
	// destructor
	~Cica()
	{
		cout << mNev << " megmurdalt\n";
	}
};


void Klonozd(Cica arg)
{
	cout << "Klonoztuk " << arg.mNev << " cicat\n";
}

void SimizdMeg(Cica & arg)
{
	cout << "Megsimiztuk " << arg.mNev << " cicat\n";
}

void SimizdMegAZTACicat(Cica* cicaPointer)
{
	cout << "Megsimiztuk " << cicaPointer->mNev << " cicat\n";
}

int main()
{
	// an object is instantiated: type: Cica, name: instance
	Cica egyCica("Lilike");


	cout << "\n\ncalling by value\n";
	// a copy is made
	Klonozd(egyCica);
	cout << "called by value\n";

	cout << "\n\ncalling by ref\n";
	// no copy is created
	SimizdMeg(egyCica);
	cout << "calling by ref\n\n";
	cout << "\n\ncalling by pointer\n";
	// no copy is created
	SimizdMegAZTACicat(&egyCica);
	cout << "calling by pointer\n\n";
	return 0;
}
