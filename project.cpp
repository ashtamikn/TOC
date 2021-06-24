// C++ code for the above DFA
#include <bits/stdc++.h>
using namespace std;
void stateQ(string);
void stateA(string);
void stateB(string);
void stateC(string);
void stateD(string);


void stateQ(string n)
{

cout << ("Not Accepted\n");
}


void stateA(string n)
{
	if(n[0] == 'a'||n[0]=='b'||n[0]=='c')
	  stateB(n.substr(1, n.length() + 1));
	else
	  stateQ(n);
}


void stateB(string n)
{


{
	if(n[0] == 'a')
	stateC(n.substr(1, n.length() - 1));

	
	else
	stateQ(n);
}
}


void stateC(string n)
{


{
	
	if (n[0] == 'b')
	stateD(n.substr(1, n.length() - 1));

	
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
	if(n[0] == 'a'||n[0]=='b'||n[0]=='c')
	   stateD(n.substr(1, n.length() + 1));
	else
	  stateQ(n);
}
}


int main()
{

string n ;
//user input
cout<<"enter the  string a's b's and c's\n";
cin>>n;


stateA(n);
return 0;
}


