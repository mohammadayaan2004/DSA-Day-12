#include<iostream>
using namespace std;
int main()
//a b c d e  
//a b c d e  
//a b c d e  
//a b c d e  
//a b c d e  
{
    int n;
    cout<<"Enter no of rows:- ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char ch='a';
        for (int j=0;j<n;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
return 0;
}
