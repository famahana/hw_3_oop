#include "String.h"

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
}