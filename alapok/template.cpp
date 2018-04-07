#include <string.h>

char* sima;
wchar_t* wide_string;

template<typename CharType>
class String
{
	CharType* mSzoveg;
public:
	String(CharType * szoveg)
	{
		mSzoveg = szoveg;
	}
	size_t size()
	{
		CharType* counter = mSzoveg;
		while(counter && *counter)
		{
			++counter;
		}
		return counter - mSzoveg;
	}

};


int main()
{
	String<char> str("ez egy szoveg");
	String<wchar_t> wstr(L"ez egy szoveg");
	size_t s = str.size();
	return 0;
}

