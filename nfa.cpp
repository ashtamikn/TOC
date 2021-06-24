#include <bits/stdc++.h>
using namespace std;

// function of state one or starting state
void q1(string s, int pos, int len);

// function of state two
void q2(string s, int pos, int len);

// function of state three
void q3(string s, int pos, int len);

// function of state four
void q4(string s, int pos, int len);

// function of state five
void q5(string s, int pos, int len);

// See diagram for help

vector<string> states;
int accepted = 0;

// Uncomment this function and the function calls to see
// the path of string from the start state to end state

void printVector()
{
	for (auto i = states.begin(); i != states.end(); i++)
		cout << *i << " ";
	cout << endl;
}

void q5(string s, int pos, int len)
{
	states.push_back("Q5->");
	if (pos == len) {
		 printVector();
		accepted = 1;
	}
	else {
		states.push_back("Dead");
		printVector();
		states.pop_back();
	}
	states.pop_back();
	return;
}

void q4(string s, int pos, int len)
{
	states.push_back("Q4->");
	if (pos == len) {
	 printVector();
		states.pop_back();
		return;
	}
	if (s[pos] == '2')
		q5(s, pos + 1, len);
	q4(s, pos + 1, len);
	states.pop_back();
	return;
}

void q3(string s, int pos, int len)
{
	states.push_back("Q3->");
	if (pos == len) {
		printVector();
		states.pop_back();
		return;
	}
	if (s[pos] == '1')
		q5(s, pos + 1, len);
	q3(s, pos + 1, len);
	states.pop_back();
	return;
}

void q2(string s, int pos, int len)
{
	states.push_back("Q2->");
	if (pos == len) {
		printVector();
		states.pop_back();
		return;
	}
	if (s[pos] == '0')
		q5(s, pos + 1, len);
	q2(s, pos + 1, len);
	states.pop_back();
	return;
}

void q1(string s, int pos, int len)
{
	states.push_back("Q1->");
	if (pos == len) {
		 printVector();
		states.pop_back();
		return;
	}
	if (s[pos] == '0')
		q2(s, pos + 1, len);
	else if (s[pos] == '1')
		q3(s, pos + 1, len);
	else if (s[pos] == '2')
		q4(s, pos + 1, len);

	q1(s, pos + 1, len);
	states.pop_back();
	return;
}

int main()
{
	string s;
	 cin >> s;
	//s = "01101";

	int pos = 0;
	q1(s, pos, s.length());

	if (accepted)
		cout << "Accepted" << endl;
	else
		cout << "Not Accepted" << endl;
	return 0;
}
