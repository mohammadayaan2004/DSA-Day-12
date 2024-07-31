#include<iostream>
using namespace std;
int main()
//a a a a a 
//b b b b b
//c c c c c
//d d d d d
//e e e e e
{
    int n;
    cout<<"Enter no of rows:- ";
    cin>>n;
    char ch='a';
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
return 0;
}
