// C++ code for the above DFA
#include <bits/stdc++.h>
using namespace std;
void stateQ(string);
void stateA(string);
void stateB(string);
void stateC(string);
void stateD(string);

// Function for state Q
// transition
void stateQ(string n)
{
// In dead state
// it shows string
// not accepted
cout << ("Not Accepted\n");
}

// Function for state A
// transition
void stateA(string n)
{
// If at index 0
// 'a' if found then
// call stateB function
// with passing n[1:] to it

	stateB(n.substr(
		1, n.length() + 1));

// If at index 0
// 'b' if found then
// call stateB function
// with passing n[1:] to it

}

// Function for state B transition
void stateB(string n)
{
// Length of string
// become 0 then
// print Accepted
if (n.length() == 0)
	cout << ("Accepted\n");
else
{
	// If at index 0
	// 'a' if found then
	// call stateC function
	// with passing n[1:] to it
	if (n[0] == 'a')
	stateC(n.substr(
			1, n.length() - 1));

	// If at index 0
	// 'b' if found then
	// call stateQ function
	// with passing n to it
	else
	stateQ(n);
}
}

// Function for state C
// transition
void stateC(string n)
{
// Length of string
// become 0 then
// print Accepted
if (n.length() == 0)
	cout << ("Accepted\n");

else
{
	// If at index 0
	// 'a' if found then
	// call stateQ function
	// with passing n to it
	if (n[0] == 'a')
	stateQ(n);

	// If at index 0
	// 'b' if found then
	// call stateD function
	// with passing n[1:] to it
	else
	stateD(n.substr(
			1, n.length() - 1));
}
}

// Function for state D
// transition
void stateD(string n)
{
// Length of string
// become 0 then
// print Accepted
if (n.length() == 0)
	cout << ("Accepted\n");

else
{
	// If at index 0
	// 'a' if found then
	// call stateD function
	// with passing n[1:] to it
	
	stateD(n.substr(
			1, n.length() + 1));

	// If at index 0
	// 'b' if found then
	// call stateD function
	// with passing n[1:] to it
	
}
}

// Driver code
int main()
{
// Take string input
string n ;
cout<<"enter the  string of a's and b's\n";
cin>>n;

// Call stateA to check
// the input
stateA(n);
}


