#include <iostream>
#include <cstring>
using namespace std;


class String
{
private:
	char* str;
	int size;
	static int counterObject;
public:
	String()
	{
		size = 80;
		str = new char[size];
		str[0] = '\0';
		counterObject++;
	}
	String(int size_1)
	{
		size = size_1;
		str = new char[size];
		str[0] = '\0';
		counterObject++;
	}
	String(const char* userinput)
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
		counterObject++;
	}
	String(const String& s)
	{
		this->str = s.str;
		this->size = s.size;
		this->str = new char[strlen(s.str) + 1];
		strcpy_s(this->str, strlen(s.str) + 1, s.str);
		counterObject++;
	}
	static int getCounterObject()
	{
		return counterObject;
	}
	~String()
	{
		delete[]str;
	}
	void showString()
	{
		cout << "Counter: " <<  counterObject << " ";
		cout << str << endl;
	}
};
int String::counterObject = 0;


int main()
{
	cout << "Default: ";
	String st;
	st.showString();

	String st2(35);
	cout << "Custom size: ";
	st2.showString();

	String st3("Test2321313131");
	cout << "String: ";
	st3.showString();


	String st4 = st3;
	cout << "String: ";
	st4.showString();



	return 0;
}