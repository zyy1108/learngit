#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>

#define N 100
using namespace std;

void jiemi(char *strl,int numB);
int main()

{
    char str[N];
    int numB=23;

    cin>>str;
    jiemi(str,numB);
    cout<<endl;
    return 0;
}

void jiemi(char *strl, int numB)
{
    for(int i=0; i<int(strlen(strl)); i++)
    {
        if(strl[i]>='A'&& strl[i]<='Z')
        {
            strl[i]=((strl[i]-'A')+numB)%26+'A';
        } 
        else if(strl[i]>='a' && strl[i]<='z')
        {
            strl[i]=((strl[i]-'a'+numB)%26+'a');
        }
    }
    cout<<strl<<endl;
    
}