#include <iostream>
#include <string>
using namespace std;
int globalisValtozo;
void initGlobalisValtozo();

class szekreny
{
public:
	szekreny()
	{
		cout << "osszeszereltek a szekrenyt" << endl;
	}
	~szekreny()
	{
		cout << "szetapritottak a szekrenyt" << endl;
	}

};

class ScopeLogger
{
	string mScope;
	int mMindegy;
public:
	ScopeLogger(string scope)
	{
		mScope = scope;
		cout << "enter: " << mScope << endl;
	}
	~ScopeLogger()
	{
		cout << "exit: " << mScope << endl;
	}
};

ScopeLogger globalScope("global");

int main()
{
	ScopeLogger mainScope("main");
	int mainenBelulEloValtozo = 1;

	{
		ScopeLogger innerScope("belso");
	}

	{
		ScopeLogger* innerPtr = new ScopeLogger("belso_ketto");
		delete innerPtr;
	}
	
	cout << "ln 23\n";
	if (true)
	{
		cout << "ln 26\n";
		szekreny ruhassz;
		cout << "ln 28\n"; 
		int scopebanLevoValtozo = 2;
		mainenBelulEloValtozo = 2;
		cout << "ln 31\n"; 
	}
	cout << "ln 33\n";
	{
		mainenBelulEloValtozo = 3;
	}

	{
		int mainenBelulEloValtozo = 4;
		cout << mainenBelulEloValtozo << endl;
	}

	// cout << scopebanLevoValtozo << endl;
	cout << mainenBelulEloValtozo << endl;

	initGlobalisValtozo();
	cout << globalisValtozo << endl;
	return 0;
}

