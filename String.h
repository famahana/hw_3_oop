#pragma once
#include <iostream>
using namespace std;
class String
{
private:
	char* str;
	int size;
	static int counterObject;
public:
	String();
	String(int size_1);
	String(const char* userinput);
	String(const String& s);
	static int getCounterObject();
	~String();
	void showString();
};

