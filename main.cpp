#include <bits/stdc++.h>

using namespace std;

int main()
{
    char reg[50];
    char reg2[50];
    int regexLen,textLen;

    cout<<"Enter the Regular Expression"<<endl;
    cin >> reg;

    for (regexLen = 0; reg[regexLen] != '\0'; regexLen++);

   cout<<"Enter the 2nd Expression"<<endl;
   cin >> reg2;


    for (textLen = 0; reg2[textLen] != '\0' ; textLen++);

    if (reg[regexLen-1] == '*')
    {
        if (reg[regexLen-2] == reg2[regexLen-1])
        {
            cout<<"Matched"<<endl;
        }
        else
        {
            cout<<"No match"<<endl;
        }
    }
    else if(reg[regexLen-1] == '+')
    {
        if (reg[regexLen-2] == reg2[regexLen-1])
        {
            cout<<"Matched"<<endl;
        }
        else
        {
            cout<<"No match"<<endl;
        }
    }
    else
    {
        if (reg[regexLen-1] == reg2[regexLen-1])
        {
            cout<<"Matched"<<endl;
        }
        else
        {
            cout<<"No match"<<endl;
        }
    }

    return 0;
}
