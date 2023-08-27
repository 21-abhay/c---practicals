//palindrome
#include <iostream>
using namespace std;

 bool isPalindrome(string str)
{
	int l= 0;
	int h= str.length() - 1;
	while (l < h)
	{
		if (str[l] != str[h]) 
		{
			return false;
		}

		l++;
		h--;
	}

	return true;
}

int main()
{
	string str;
	cout<<"enter the string: ";
	cin>>str;
	if (isPalindrome(str)) 
	{
		cout << "\nTrue : "<<str;
	}
	else 
	{
		cout << "\nFalse : "<<str;
	}

	return 0;
}
