#include <iostream>
#include <fstream>
#include <assert.h>
#include <string>

using namespace std;

int main()
{
	system("./lab1.sh 0 1 2 3 4 5 6 7 8 9 >test_for.txt");
	system("./lab1.sh >test_for_2.txt");
	system("./lab1_2.sh 0 1 2 3 4 5 6 7 8 9 >test_while.txt");
	system("./lab1_2.sh >test_while_2.txt");
	ifstream fin1("test_for.txt");
	ifstream fin2("test_for_2.txt");
        ifstream fin3("test_while.txt");
        ifstream fin4("test_while_2.txt");
	string a, result;
	while(getline(fin1, a))
	{
		result += a;
	}
	assert("9876543210" == result);
	result = "";
	getline(fin2, a);
        assert("No arguments" == a);
        while(getline(fin3, a))
        {
                result += a;
        }
        assert("9876543210" == result);
        getline(fin4, a);
	assert("No arguments" == a);
	return 0;
}
