#include<iostream>
using namespace std;
int main()
//5 4 3 2 1
//5 4 3 2 1
//5 4 3 2 1
//5 4 3 2 1
//5 4 3 2 1
{
    int n;
    cout<<"Enter no of rows:- ";
    cin>>n;
    for (int i = 0; i < n ; i++)
    {
        int k=5;
        for (int j = 0; j < n ; j++)
        {
            cout<<k<<" ";
            k--;
        }
        cout<<endl;   
    }
return 0;
}