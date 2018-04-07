#include <iostream>
#include <string>
#include <string.h>

using namespace std;



int main()
{
	char* string1 = "ez egy string";
	char* str2 = string1 + 3;
	char* duplicate = strdup(str2);
	size_t len = strlen(duplicate);
	char buffer[256];
	strcpy(buffer, duplicate);
	char* osszefuzott = strcat(buffer, " ezt meg a vegere");

	string str = str2;
	string duplikalt = str;
	string osszefuzott2 = str + " meg ezt is bele";
	return 0;
}
