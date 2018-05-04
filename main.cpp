#include <iostream>

using namespace std;

int roman(char ch)
{
    if(ch==73)
        return 1;
    else if(ch==86)
        return 5;
    else if(ch==88)
        return 10;
    else if(ch==76)
        return 50;
    else if(ch==67)
        return 100;
    else if(ch==68)
        return 500;
    else if(ch==77)
        return 1000;
}

int main()
{int v[1001],n,suma=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char ch;
        cin>>ch;
        v[i]=roman(ch);
    }
    int x=n;
    if(v[n-1]<v[n])
        x--;
    for(int i=0;i<x;i++)
    {
        if(v[i]<v[i+1])
        {
            suma+=v[i+1]-v[i];
            i++;
        }
        else
            suma+=v[i];
    }
    cout<<suma;
    return 0;
}
