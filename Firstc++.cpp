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
        rm=num1%10;
        rev=rev+rm;
        rev=rev*10;  //rev=(rev*10)+rm
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
        cout<< "its not a armstrong number";
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

//toggle each character in a string
int main()
{
    string name;
    cout<< "enter a string to toggle:";
    cin>>name;
    for (int i=0;name[i]!='\0';i++)
    {
        if (name[i]>=97 && name[i]<=122)
            name[i]=name[i]-32;
        else if (name[i]>=65 && name[i]<=90)
            name[i]=name[i]+32;
    }
    cout<<name<<endl;
    return 0;
}

int main()
{
    int size;
    string name;
    cout<< "enter a string:";
    cin>>name;
    size=name.length();
    for (int i=0;i<size;i++)
        if (islower(name[i]))
            name[i]=toupper(name[i]);
        else
            name[i]=tolower(name[i]);
    cout<<name;
    return 0;
}

//reverse a string
int main()
{
    string name;
    cout<< "enter a string:";
    cin>>name;
    int l=name.length();
    for (int i=l-1;i>=0;i--)
    {
        cout<<name[i];
    }
    return 0;
}

int main()
{
    string name;
    cout<< "enter a string:";
    cin>>name;
    int l=name.length();
    for (int i=0;i<l/2;i++)
    {
        char ch=name[i];
        name[i]=name[l-1-i];
        name[l-1-i]=ch;
    }
    cout<<name;
    return 0;
}

int main()
{
    string name;
    cout<< "enter a string:";
    cin>>name;
    int l=name.length();
    int i=0,j=l-1;
    while (i<j)
    {
        char ch=name[i];
        name[i]=name[j];
        name[j]=ch;
        i++;
        j--;
    }
    cout<<name;
    return 0;
}
//madam,level
//Palindrome or not
int main()
{
    string name;
    cout<< "enter a string:";
    cin>>name;
    int l=name.length();
    int i=0,j=l-1;
    int flag=0;
    while (i<j)
    {
        if (name[i]==name[j])
        {
            i++;
            j--;
            flag=1;
        }
        else
        {
            break;
        }
    if (flag==1)
    {
        cout<< "its a palindrome";
    }
    else
    {
        cout<< "not a palindrome"
    }
    return 0;
}

//Sum of numbers in a string
int main()
{
    string name;
    cout<< "enter a string:";
    cin>>name;
    int i,l=name.size(),sum=0;
    for (i=0;i<l;i++)
    {
        if (name[i]>='0' && name[i]<='9')
        {
            sum=sum+(name[i]-48); //48 or '0'
        }
    }
    cout<<sum;
    return 0;
}

//Palindrome number
int main()
{
    int num,num1,rm,rev=0;
    cout << "enter a number:";
    cin>>num;
    num1=num;
    while (num>0)
    {
        rm=num%10;
        rev=(rev*10)+rm;
        num=num/10;
    }
    if (rev==num1)
        cout<<"palindrome";
    else
        cout<<"not a palindrome";
    return 0;
}

//count uppercase letters in string
int main()
{
    string name;
    cout<< "enter a string:";
    cin>>name;
    int l=name.length();
    int i,count=0;
    for (i=0;i<l;i++)
    {
        if (name[i]>='A' && name[i]<='Z')
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}

//reverse a array in place
int main()
{
    int arr1[5]={2,4,5,1,8};
    int l=sizeof(arr1)/sizeof(arr1[0]);
    for (int i=0;i<l/2;i++)
    {
        int temp=arr1[i];
        arr1[i]=arr1[l-1-i];
        arr1[l-1-i]=temp;
    }
    for (int i=0;i<l;i++)
    {
        cout<<arr1[i];
    }
    return 0;
}

//search an element in a array
int main()
{
    int size,target;
    cout<< "enter the size of the array and the target number:";
    cin>>size>>target;
    int arr1[size];
    cout<< "enter the array elements:";
    int ans=-1;
    for (int i=0;i<size;i++)
    {
        cin>>arr1[i];
    }
    for (int i=0;i<size;i++)
    {
        if (target==arr1[i])
        {
            ans=i;
            break;
        }
    }
    cout<<endl<<ans;
    return 0;
}

//sum of elements in an array
int main()
{
    int arr1[5]={3,5,7,3,1};
    int sum=0,i;
    for (i=0;i<5;i++)
    {
        sum+=arr1[i];
    }
    cout<<sum;
    return 0;
}

//sum of positive elements in an array
int main()
{
    int arr1[5]={3,5,-7,3,-1};
    int sum=0,i;
    for (i=0;i<5;i++)
    {
        if (arr1[i]>=0)
            sum+=arr1[i];
    }
    cout<<sum;
    return 0;
}

//sorting elements in an array
int main()
{
    int arr[6]={3,5,0,1,4,8},tmp;
    for (int i=0;i<6;i++)
    {
        for (int j=i+1;j<6;j++)
        {
            if (arr[i]>arr[j])
            {
                //swap(arr[i],arr[j]);
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    for (int i=0;i<6;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
*/
//large element in an array
//after sorting the last element

//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233
int main()
{
    int n=10,n1=0,n2=1,num;
    for (int i=1;i<=10;i++)
    {
        if (i==1)
        {
            cout << n1<<"";
        }
        if (i==2)
        {
            cout << n2<<"";
        }
        num=n1+n2;
        n1=n2;
        n2=num;
        cout << num<<"";
    }
    return 0;
}
