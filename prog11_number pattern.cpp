#include<iostream>
using namespace std;
int main()
//1 2 3 4 5
//1 2 3 4 5
//1 2 3 4 5
//1 2 3 4 5
//1 2 3 4 5
{
    int n;
    cout<<"Enter no of rows:- ";
    cin>>n;
    for (int i = 0; i < n ; i++)
    {
        int k=1;
        for (int j = 0; j < n ; j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;   
    }
return 0;
}