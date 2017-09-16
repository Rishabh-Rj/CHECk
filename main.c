#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    char a,b,t;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        while(str[i]=='?')
        {
           if(str[i+1]=='a' || str[i-1]=='a')
            {str[i]='b';}
            else if(str[i+1]=='b' || str[i-1]=='b')
                {str[i]='a';
            }
        }

    }



        cout<<str;

}
