#include	"iostream"
#include	"climits"

using namespace std;

int limits_test()
{
	cout << "char is " << sizeof(char) << " bytes." << endl;
	cout << "CHAR_MAX = " << CHAR_MAX << endl;
	cout << "CHAR_MIN = " << CHAR_MIN << endl;
	cout << "CHAR_BIT = " << CHAR_BIT << endl;
	cout << endl;

	cout << "short is " << sizeof(short) << " bytes." << endl;
	cout << "SHORT_MAX = " << SHRT_MAX << endl;
	cout << "SHORT_MIN = " << SHRT_MIN << endl;
	cout << "USHORT_MAX = " << USHRT_MAX << endl;
	cout << endl;

	cout << "int is " << sizeof(int) << " bytes." << endl;
	cout << "INT_MAX = " << INT_MAX << endl;
	cout << "INT_MIN = " << INT_MIN << endl;
	cout << "UINT_MAX = " << UINT_MAX << endl;
	cout << endl;
	
	cout << "long is " << sizeof(long) << " bytes." << endl;
	cout << "LONG_MAX = " << LONG_MAX << endl;
	cout << "LONG_MIN = " << LONG_MIN << endl;
	cout << "ULONG_MAX = " << ULONG_MAX << endl;
	cout << endl;
	
	cout << "long long is " << sizeof(long long) << " bytes." << endl;
	cout << "LLONG_MAX = " << LLONG_MAX << endl;
	cout << "LLONG_MIN = " << LLONG_MIN << endl;
	cout << "ULLONG_MAX = " << ULLONG_MAX << endl;
	cout << endl;
	
	return 0;
}

