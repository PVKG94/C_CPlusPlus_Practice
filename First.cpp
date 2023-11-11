#include<iostream>
using namespace std;

/*int main()
{
    cout << "Strange";
    return 0;
}
int main()
{
    int cp,sp,p;
    cout<<"enter the cost price:";
    cin>>cp;
    cout<<"enter the selling price:";
    cin>>sp;
    p=sp-cp;
    cout<<"profit made:"<<p;
    p=(float(p)/float(cp))*100;
    cout<<"\nProfit %:"<<p;
    return 0;
}*/

int main()
{
    int a;
    cout<<"Enter a number:";
    cin>>a;
    if(a>1)
        if(a/1==a and a/a==1)
            cout<<a<<" is a prime number";
        else
            cout<<a<<" is not a prime number";
    else if (a==1)
        cout<<"1 is neither prime number nor composite number";
    else
        cout<<"Invalid number";
    return 0;

}
