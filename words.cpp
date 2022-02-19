#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int up = 0, low = 0;
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i]>=65 and s[i]<=90)
        {
            up++;
        }
        else if(s[i]>=97 and s[i]<=122)
        {
            low++;
        }
    }
    if(up>low)
    {
        for(int i = 0; i<s.length(); i++)
        {
            string d;
            d = toupper(s[i]);
            cout<<d;        
        }   
    }
    else 
        {
            for(int i = 0; i<s.length(); i++)
            {
                string c;
                c = tolower(s[i]);
                cout<<c;
            }
        }
}