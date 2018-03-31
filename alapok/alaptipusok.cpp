#include <iostream>
#include <limits>
using namespace std;
int main()
{
	int egyInteger = 5;
	unsigned int egyElojelNelkuliInteger = 77;
	char karakter = 'a';
	unsigned char elojelNelkuliKarakter = 'b';
	signed char elojelesKarakter = 'c';
	float tortSzam = 1.234;
	double duplePrecizitasu = 2.345678;
	char* string = "ez egy 0-terminalt string";
	short rovidebbInt;
	long nagyobbRange;
	long long megnagyobbRange;
	void fuggvenyVisszateresiErtekLehet();
	void* akarmilyenPointerreKonvertalhato;
	bool logikaiErtek;

	cout << numeric_limits<int>::max() << endl;
	cout << numeric_limits<int>::min() << endl;
	cout << numeric_limits<unsigned int>::max() << endl;
	cout << numeric_limits<short>::max() << endl;
	cout << numeric_limits<char>::max() << endl;
	cout << numeric_limits<long long>::max() << endl;
	cout << numeric_limits<float>::max() << endl;
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<bool>::max() << endl;
	return 0;
}
