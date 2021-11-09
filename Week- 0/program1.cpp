#include<iostream>
using namespace std;
int main()
{
    int n,ele;
    cout<<"ENTER SIZE OF ARRAY"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"ENTER ELEMENT TO SEARCH"<<endl;
    cin>>ele;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            cout<<"ELEMENT AT "<<i<<" index"<<endl;
            cout<<"Total comparisions "<<(i+1)<<endl;
            break;
        }
    }
}
