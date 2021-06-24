#include <stdio.h>
#include <string.h>
  
// dfa tells the number associated
// with the present state
int dfa = 0;
  
// This function is for
// the starting state (zeroth) of DFA
void start(char c)
{
    if (c == 'a')
        dfa = 1;
    else if (c == 'b')
        dfa = 2;
  
    // -1 is used to check for any invalid symbol
    else
        dfa = -1;
}
  
// This function is for the first state of DFA
void state1(char c)
{
    if (c == 'a')
        dfa = 0;
    else if (c == 'b')
        dfa = 5;
    else
        dfa = -1;
}
  
// This function is for the second state of DFA
void state2(char c)
{
    if (c == 'b')
        dfa = 3;
    else
        dfa = -1;
}
  
// This function is for the third state of DFA
void state3(char c)
{
    if (c == 'b')
        dfa = 4;
    else
        dfa = -1;
}
  
// This function is for the fourth state of DFA
void state4(char c)
{
    if (c == 'b')
        dfa = 3;
    else
        dfa = -1;
}
  
// This function is for the fifth state of DFA
void state5(char c)
{
    if (c == 'b')
        dfa = 6;
    else
        dfa = -1;
}
  
// This function is for the sixth state of DFA
void state6(char c)
{
    if (c == 'b')
        dfa = 5;
    else
        dfa = -1;
}
  
int isAccepted(char str[])
{
    // store length of string
    int i, len = strlen(str);
  
    for (i = 0; i < len; i++) {
        if (dfa == 0)
            start(str[i]);
  
        else if (dfa == 1)
            state1(str[i]);
  
        else if (dfa == 2)
            state2(str[i]);
  
        else if (dfa == 3)
            state3(str[i]);
  
        else if (dfa == 4)
            state4(str[i]);
  
        else if (dfa == 5)
            state5(str[i]);
  
        else if (dfa == 6)
            state6(str[i]);
  
        else
            return 0;
    }
    if (dfa == 3 || dfa == 5)
        return 1;
    else
        return 0;
}
  
// driver code
int main()
{
    char str[20] ;
    scanf("%s",                                             str);
    if (isAccepted(str))
        printf("\nACCEPTED\n");
    else
        printf("NOT ACCEPTED\n");
    return 0;
}