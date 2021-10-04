#include <iostream>
using namespace std;

// Function to check palindrome
int checkPalindrome(string str)
{
	// Calculating string length
	int len = str.length();

	// Traversing through the string
	// upto half its length
	for (int i = 0; i < len / 2; i++) {
	
		// Comparing i th character
		// from starting and len-i
		// th character from end
		if (str[i] != str[len - i - 1])
			return false;
	}

	// If the above loop doesn't return then it is
	// palindrome
	return true;
}

// Driver Code
int main()
{ // taking number as string
	string st
		= "112233445566778899000000998877665544332211";
	if (checkPalindrome(st) == true)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}
