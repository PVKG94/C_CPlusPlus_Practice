#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
int main()
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
}

int main()
{
    int num1;
    cout<< "enter a number:"<<endl;
    cin>>num1;
    if (num1>50)
    {
        cout<< "The number is greater than 50";
    }
    else
    {
        cout<< "the number is not greater than 50";
    }
    return 0;
}

int main()
{
    string name;
    cin>>name;
    int size1=name.size();
    cout<<size1<<endl;
}

//Practice Problems
//odd or even
int main()
{
    int num1;
    cout<<"enter a number:";
    cin>>num1;
    if (num1%2==0)
    {
        cout<<"even number";
    }
    else
    {
        cout<<"odd number";
    }
    return 0;
}

//vowel or consonant
int main()
{
    char ch;
    cout<< "enter a character:";
    cin>>ch;
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout<<"its a vowel";
    }
    else
    {
        cout<< "its a consonant";
    }
    return 0;
}

//Greatest of three numbers
int main()
{
    int num1,num2,num3;
    cout<< "enter three numbers:";
    cin>>num1>>num2>>num3;
    if (num1>num2)
    {
        if (num1>num3)
        {
            cout<<num1<<" is the greatest number";
        }
        else
        {
            cout<<num3<<" is the greatest number";
        }
    }
    else
    {
        if (num2>num3)
        {
            cout<<num2<<" is the greatest number";
        }
        else
        {
            cout<<num3<< " is the greatest number";
        }
    }
    return 0;
}

int main()
{
    int num1,num2,num3;
    cout<< "enter three numbers:";
    cin>>num1>>num2>>num3;
    if (num1>num2 && num1>num3)
        cout<<num1<<" is greater";
    else if (num2 >num1 && num2 > num3)
        cout<<num2<< " is greater";
    else
        cout<<num3<<" is greater";
    return 0;
}

//positive or negative
int main()
{
    int num1;
    cout<< "enter a number:";
    cin>>num1;
    if (num1>=0)
        cout<<"positive number";
    else
        cout<< "negative number";
    return 0;
}

//alphabet or not
int main()
{
    char ch;
    cout<< "enter a character:";
    cin>>ch;
    if (ch>=97 && ch <= 122 || ch>=65 && ch<=90)
        cout<<"its a alphabet";
    else
        cout << "not a alphabet";
    return 0;
}

//to print char value
int main()
{
    char ch;
    cout<< "enter a character:";
    cin>>ch;
    int ch1=ch;
    cout<<ch1;

    return 0;
}

//no. of digits in an integer
int main()
{
    int num1,count=0;
    cout<< "enter a number:";
    cin>>num1;
    while (num1!=0)
    {
        num1=num1/10;
        count++;
    }
    cout<<count;
    return 0;
}

//sum of digits in a number
int main()
{
    int num1,sum=0;
    cout<< "enter a number:";
    cin>>num1;
    while (num1!=0)  // num1>0
    {
        sum=sum+(num1%10);
        num1=num1/10;
    }
    cout<<sum;
    return 0;
}

//reverse a given number
int main() //its only for printing the number by single single one, not for store the reversed number in a single variable
{
    int num1,rev;
    cout<< "enter a number:";
    cin>>num1;
    while (num1!=0)  // num1>0
    {
        rev=(num1%10);
        cout<<rev;
        num1=num1/10;
    }
    return 0;
}

int main()
{
    int num1,rm=0,rev=0;
    cout<< "enter a number:";
    cin>>num1;
    while (num1!=0)  // num1>0
    {
        rm=(num1%10);
        rev=rev+rm;
        rev=rev*10;
        num1/=10;
    }
    cout<<rev/10;
    return 0;
}

//product of digits in a number
int main()
{
    int num1,pr=1;
    cout<< "enter a number:";
    cin>>num1;
    while (num1!=0)
    {
        pr=pr*(num1%10);
        num1=num1/10;
    }
    cout<<pr;
    return 0;
}

//sum of numbers in a range
int main()
{
    int num1,num2,i,sum=0;
    cout<<"enter the range of numbers:";
    cin>>num1>>num2;
    for (i=num1;i<=num2;i++)
    {
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}

//sum of n natural numbers;
int main()
{
    int num,i,sum=0;
    cout<< "enter the number:";
    cin>>num;
    for (i=1;i<=num;i++)
    {
        sum+=i;
    }
    cout<<sum;
    return 0;
}

//prime number or not
int main()
{
    int num,i,div=0;
    cout << "enter a number:";
    cin>>num;
    if (num>1)
    {
        for (i=1;i<=num;i++)
        {
            if (num%i==0)
                div++;
        }
        if (div==2)
            cout<< "Its a prime number";
        else
            cout<< "Its not a prime number";
    }
    else if(num==1)
    {
        cout<< "neither a prime number nor a composite number";
    }
    else
    {
        cout<< "invalid number";
    }
    return 0;
}

//Power of a number
int main()
{
    int base,power,ans;
    cout<< "enter the base and exponent:";
    cin>>base>>power;
    ans=pow(base,power);
    cout<<ans;
    return 0;
}

//Armstrong number or not - 153=1^3+5^3+3^3 , no of digits in the power
int main()
{
    int num,digit=0,rm,sum=0,num1;
    cout<< "enter a number:";
    cin>>num;
    num1=num;
    while (num1!=0)
    {
        num1=num1/10;
        digit++;
    }
    num1=num;
    while (num1!=0)
    {
        rm=num1%10;
        sum=sum+pow(rm,digit);
        num1=num1/10;
    }
    if (sum==num)
        cout<< "its a armstrong number";
    else
        cout<< "its not a armsstrong number";
    return 0;
}

//Strong number or not - sum of factorial of individual digits are equal to the number
int fact(int);
int main()
{
    int num,num1,sum=0,rm,f;
    cout<< "enter a number:";
    cin>>num;
    num1=num;
    while (num!=0)
    {
        rm=num%10;
        f=fact(rm);
        sum=sum+f;
        num=num/10;
    }
    if (sum==num1)
        cout<< "its a strong number";
    else
        cout<< "its not a strong number";
    return 0;
}
int fact(int n1)
{
    int i,a=1;
    for (i=1;i<=n1;i++)
    {
        a=a*i;
    }
    return a;
}
*/
//
