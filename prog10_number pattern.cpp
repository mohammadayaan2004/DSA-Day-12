#include<iostream>
using namespace std;
int main()
//1 1 1 1 1
//2 2 2 2 2
//3 3 3 3 3
//4 4 4 4 4
//5 5 5 5 5  
{
    int n;
    cout<<"Enter no of rows:- ";
    cin>>n;
    int k=1;
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n ; j++)
        {
            cout<<k<<" ";
        }
        k++;
        cout<<endl;   
    }
return 0;
}
