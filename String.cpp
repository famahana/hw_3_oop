#include "String.h"
#include <cstring>


String::String()
{
	size = 80;
	str = new char[size];
	str[0] = '\0';
}

String::String(int size_1)
{
	size = size_1;
	str = new char[size];
	str[0] = '\0';
}

String::String(const char* userinput)
{
	size = strlen(userinput);
	str = new char[size + 1];
	int i = 0;
	while (userinput[i] != '\0')
	{
		str[i] = userinput[i];
		i++;
	}
	str[size] = '\0';
}

String::String(const String& s)
{
	this->str = s.str;
	this->size = s.size;
	this->str = new char[strlen(s.str) + 1];
	strcpy_s(this->str, strlen(s.str) + 1, s.str);
}
 int String::getCounterObject()
{
	return counterObject;
}
String::~String()
{
	delete[]str;
}
void String::showString()
{
	cout << str << endl;
}
int String::counterObject = 0;