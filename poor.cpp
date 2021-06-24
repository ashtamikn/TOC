// C++ code for the above DFA
#include <bits/stdc++.h>
using namespace std;
void stateQ(string);
void stateA(string);
void stateB(string);
void stateC(string);
void stateD(string);
void stateE(string);
void stateF(string);


void stateQ(string n)
{

cout << ("Not Accepted\n");
}


void stateA(string n)
{


	stateB(n.substr(
		1, n.length() + 1));

}


void stateB(string n)
{

if (n.length() == 0)
	cout << ("Accepted\n");
else
{
	
	if (n[0] == 'a')
	stateC(n.substr(
			1, n.length() - 1));

	
	
	else
	stateQ(n);
}
}


void stateC(string n)
{

if (n.length() == 0)
	cout << ("Accepted\n");

else
{
	
	if (n[0] == 'b')
	stateD(n.substr(
			1, n.length() - 1));
	
	else
	stateQ(n);
}
}


void stateD(string n)
{

if (n.length() == 0)
	cout << ("Accepted\n");

else
{
		stateE(n.substr(
			1, n.length() + 1));

}
}

void stateE(string n)
{
    if (n.length() == 0)
	cout << ("Accepted\n");

else
{
	
	
	if (n[0] == 'c')
	stateF(n.substr(
			1, n.length() - 1));

	
	else
	stateQ(n);
}
    
}
void stateF(string n)
{

if (n.length() == 0)
	cout << ("Accepted\n");

else
 {
	
	
	stateF(n.substr(
			1, n.length() + 1));
 }
}


int main()
{
// Take string input
string n ;
cout<<"enter the  string of a's and b's  and c's\n";
cin>>n;

// Call stateA to check
// the input
stateA(n);
}