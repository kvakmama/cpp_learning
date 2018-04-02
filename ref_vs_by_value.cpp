#include <iostream>
using namespace std;

class Cica
{
public:
	string mNev;
	Cica() {}
	Cica(Cica& eredeti)
	{
		mNev = eredeti.mNev + " klonja";
		cout << "Leklonoztak " << eredeti.mNev << " cicat, lett belole " << mNev << endl;
	}
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
	Cica egyCica;
	egyCica.mNev = "Lilike";

	cout << "\n\ncalling by value\n";
	Klonozd(egyCica);

	cout << "\n\ncalling by ref\n";
	SimizdMeg(egyCica);

	cout << "\n\ncalling by pointer\n";
	SimizdMegAZTACicat(&egyCica);
	return 0;
}
