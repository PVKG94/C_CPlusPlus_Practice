//#include<stdio.h>
//#include<conio.h>
//#define A 30
/*Program for hello world*/
/*void display();
void main()
{
    printf("Hello World");
    display();
}
void display()
{
    printf("%d",'c');
    printf("%c",100);
}

//Variables

void main()
{
   char b='a';
   printf("%d",b);
   int _int_type=56;
   printf("%d",_int_type);
}

//Data types

void main()
{
    int a=-10;
    printf("%u",a);
}

void main()
{
    //char a='a';
    //char b=98;
    //char c='z';
    //char d=130;
    //unsigned char e=-130;
    unsigned char f=-129;
    printf("%d",f);
}

//Arithmetic operators

void main()
{
    int a=10;
    float b=7;
    printf("a+b=%f",a+b);
    printf("a-b=%f",a-b);
    printf("a*b=%f",a*b);
    printf("a/b=%f",a/b);
  //  printf("a%b=%d",a%b);
}

void main()
{
    int a=6,b=10,i;
    i=(a<b)?(a+=2):(a-b);
}

//Increment and decrement operator

void main()
{
    int a=7,b,c,d;
    b=++a;                //a=a+1 , b=a
    c=a++;                //c=a   , a=a+1
    d=++a;
    printf("%d",a);
}

void main()
{
    int a=18,b=9,c,d,e=10;
    c=b++;
    d=b;
    printf("%d",a<b<c>d);
    printf("%d",b==e);
    printf("%d",c+1>e);
    printf("%d",a+c==b>e<c+d);
}

void main()
{
    int a=18,b=9,c,d,e=10,f;
    c=b++;
    d=b;
    f=a>b>d<c;
    printf("%d",f!=1);
    printf("%d",a+c==b>=e<c+d!=1);
}

void main()
{
    printf("%d",'<'>'>');  //60>62
}

void main()
{
    int a=4,b=6,result;
    result=a>b&&printf("Strange")||printf("PVKG")||printf("Gowtham");
    printf("\n%d",result);
}

void main()
{
    int a=4,b=6,result;
    printf("%d",4&&!0);
    printf("%d",4&&0);
}

void main()
{
    int a=10,b=5,result;
    result=(a>b) && a++;
    printf("%d",result);
    printf("\n%d",a);
   // int a=1,b=6,result,result1;
    //result=a-- && ++b;
  //  result1=--a && ++b;
   // printf("%d",result);
   // printf("%d",result1);
}

//Bitwise operator

void main()
{
    int a=10,b=6;
    printf("%d",a&b);
    printf("\n%d",a|b);
    printf("\n%d",a^b);
    printf("\n%d",a&b&&b+1||0&&b++);
    printf("\n%d",b);
}

void main()
{
    int a=10,c,d;
    c=a<<4;
    d=a>>2;
    printf("%d",c);
    printf("\n%d",d);
}

void main()
{
    int a=5,b;
    b=~a;               //~a=-(a+1)
    printf("%d",b);
}

void main()
{
    int a=10,b,c,d;
    b=(a+1)<<2;
    c=(a+2)>>1;
    d=~(a+3);
    printf("%d",b);
    printf("\n%d",c);
    printf("\n%d",d);
}

void main()
{
    int a,b;
    a=(5,4);
    //b=(printf("Strange"),3,7,4);
    //b=printf("Strange"),3,7,4;
    printf("%d",a);
}

void main()
{
    int a=8,b;
    b=(a++,++a);
    //b=a++,++a;
    //b=(a++,++a,a>>2);
    printf("%d",b);
    printf("\n%d",a);
}

void main()
{
    int a=0,b=1,c=-1,d;
    d=--a*(5+b)/2-c++*b;
    printf("%d",d);
}

//Input and Output

void main()
{
    int a ; float b ; char c ;
    scanf("%d %f %c",&a,&b,&c);
    printf("%d %f %c",a,b,c);
}

void main()
{
    int a,b,c,x;
    x=scanf("%d %d",&a,&b);
    c=a+b;
    //printf("%d",x);
    printf("%d",c);
}

void main()
{
    int a=5,b=3;
    float c=1234.987;
    printf("a=%d\nb=%04d",a,b);
    printf("\nc=%f",c);
    printf("\nc=%5.2f",c);
}

void main()
{
    char ch;
    //ch=getchar();
    ch=getch();
    //ch=getche();
    printf("ch=%c",ch);
}

void main()
{
    char ch[10];
    gets(ch);
    printf("ch=%s",ch);
    //getch();
}

void main()
{
    char ch;
    printf("Enter a char:");
    ch=getchar();
    //printf("ch=%c",ch);
    putchar(ch);
    putchar('\n');
    putchar('e');
    getch();
}

void main()
{
    char ch;
    printf("Enter a char:");
    ch=getchar();
    //printf("ch=%c",ch);
    putch(ch);
    putch('\n');
    putch('h');
}

void main()
{
    char ch[15];
    //printf("Enter a char:");
    puts("Enter a string:");
    gets(ch);
    //printf("ch=%s",ch);
    puts(ch);
    //getch();
}

//Control Statements

void main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if (age>20 && age<30)
    {
        printf("Your age is=%d",age);
        printf("\nYou can go coffe with me");
    }
    if (age>15)
        printf("\nYour age is=%d",age);
    printf("\nIts time to go home");
    getch();
}

void main()
{
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if (age>25 && age<30)
    {
        printf("your age is=%d",age);
        printf("\ncoffe with me");
    }
    else
    {
        printf("\nyour age is=%d",age);
        printf("\nGo home");
    }
    printf("\nhave a nice day");
    getch();
}

void main()
{
    int age,salary;
    printf("Enter your age and salary:");
    scanf("%d %d",&age,&salary);
    if (age>50)
    {
        if (salary>60000)
        {
            salary=salary+10000;
            printf("Your salary is=%d",salary);
        }
        else
        {
            salary+=5000;
            printf("Your salary is=%d",salary);
        }
    }
    else
    {
        salary+=3000;
        printf("Your salary is=%d",salary);
    }
    printf("\nHave a nice day!");
    getch();
}

void main()
{
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b)
    {
        if (c>a)
            printf("%d is the max. number",c);
        else
            printf("%d is the max. number",a);
    }
    else
    {
        if (b>c)
            printf("%d is the max. number",b);
        else
            printf("%d is the max. number",c);
    }
}

void main()
{
    int marks;
    printf("enter your marks:");
    scanf("%d",&marks);
    if (marks>90)
        printf("o grade");
    else if (marks>80)
        printf("a grade");
    else if (marks>70)
        printf("b grade");
    else if (marks>60)
        printf("c grade");
    else
        printf("fail");
}

void main()
{
    int a;
    printf("enter a no:");
    scanf("%d",&a);
    switch (a)               //we can use char constants instead of integer, 'a'
    {case 1:
       printf("hi");
       break;
     case 2:
       printf("gh");
       break;
     case 3:
     case 4:
     case 5:
        printf("hey");
        break;
     default:
       printf("home");
    }
}

#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    char oper;
    printf("enter an operator:");
    scanf("%c",&oper);
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    switch (oper)
    {
    case '+':
        c=a+b;
        printf("Addition is %d",c);
        break;
    case '-':
        c=a-b;
        printf("Subraction is %d",c);
        break;
    case '*':
        c=a*b;
        printf("multiplication is %d",c);
        break;
    case '/':
        c=a/b;
        printf("division is %d",c);
        break;
    default:
        printf("enter a valid operator!");
    }
}

//Loops

void main()
{
    int i,j;
    for (i=1,j=0;i<10,j<5;i++,j++)
    //for (i=1,j=0;i==10;i++,j++)
        printf("i=%d%d\n",i,j);
}

void main()
{
    int i,j;
    for (i=1,j=0;i<5,j<=6;j++);    //adding ';' to the for loop it will terminate the loop but it will execute
    {
        printf("%d%d\n",i,j);
        i++;
    }
}

void main()
{
    int i,j,k;
    for (i=1,j=0,k=3;i<=5,j<=6,k>1;i++,j++,k--);
    {
        printf("%d%d%d\n",i,j,k);
    }
}

void main()
{
    int num,i,j;
    printf("enter a number:");
    scanf("%d",&num);
    for (i=1;i<11;i++)
    {
        j=num*i;
        printf("%d*%d=%d\n",i,num,j);
    }
}

void main()
{
    int i=1;
    while (i)
    //while (i++);
    {
        printf("%d\n",i);
        i++;
    }
    printf("end");
}

void main()
{
    char ch='a';
    while (ch)
    {
        printf("%d",ch);
        ch++;
    }
}

void main()
{
    int i=0;
    char ch='a';
    while(ch<127&&i==1)
    {
        printf("%d",ch);
        ch--;
    }
}

void main()
{
    int i=0;
    do                          //In do while loop the statement would be executed atleast one time whether if the condition fails
    {
        printf("jenny\n");
        //printf("%d\n",i);
        i++;
    }
    while (i>0);
    printf("end");
}

void main()
{
    int a,i,sum=0;
    //while (1)
    for (i=1;i<=5;i++)
    {
        printf("Enter a number:");
        scanf("%d",&a);
          if (a<0)
            break;
        sum+=a;
    }
    printf("%d",sum);
}

void main()
{
    int a,i=1,sum=0;
    do
    {
        printf("enter a number:");
        scanf("%d",&a);
          if (a<0)
            break;
        sum+=a;
        i++;
    } while (i<=5);
    printf("%d",sum);
}

void main()
{
    int a,i,sum=0;
    for (i=1;i<=5;i++)
    {
        printf("enter an integer:");
        scanf("%d",&a);
          if (a<0)
            continue;
        sum+=a;
    }
    printf("%d",sum);
}

void main()
{
    int i,j;
    for (i=1;i<=5;i++)
    {
        for (j=1;j<8;j++)
            printf("*");
        printf("\n");
    }
}

void main()
{
    int i=1,j=0;
    while (i<=3)
    {
        while (j<=3)
        {
            printf("%d",j++);
        }
        printf("%d",++i);
    }
}

void main()
{
    int i=1,j=0;
    while (i<=3)
    {
        while (j<=3)
        {
        }
    }
    printf("%d%d",++i,++j);
}

void main()
{
    int i=1,j=3;
    do
    {   do
        {
            printf("%d",j);
            j--;
        } while (j>0);

        i++;
        printf("%d",i);
    } while (i<4);
}

void main()
{
    int i=1,j=3;
    do
    {   do
        {
            printf("%d",--j);
        } while (j>0);

        printf("%d",i++);
    } while (i<4);
}

#define M 4
void main()
{
    int b;
    int a[M];
    //compile time initialization
    int c[5]={4,6,3,2,4};
    int d[]={4,5,2,2,5,6};
    int e[5]={4,5,2};
    int f[4]={}; //no
    char g[5]={'s','5','8','g'};
}

//runtime initialization
void main()
{
    int i,j;
    int a[5];
    printf("enter an array:");
    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    for (j=0;j<5;j++)
    {
        printf("%d",a[j]);
    }
}

void main()
{
    int i,j;
    int a[100];
    for (i=0;i<100;i++)
    {
        if (i<40)
            a[i]=6;
        else
            a[i]=3;
    }

    for (j=0;j<100;j++)
    {
        printf("%d",a[j]);
    }
}

void main()
{
    int a[5]={4,6,1,-2,9};  //base address is stored on var a, and other elements address are calculated by "base.addr+(index of req. ele * size of datatype)"
    printf("%d",a[3]);            //eg. 2000+(3*4bytes)=2012-addr of the req element
}

void main()
{
    int a[5],i;
    printf("Enter the array elements:");
    for (i=0;i<5;i++)
        {scanf("%d",&a[i]);}

    for (i=0;i<5;i++)
        printf("array element at %d index is:%d\n",i,a[i]);

    printf("reverse order:\n");

    for (i=4;i>=0;i--)
        printf("array element at %d index is:%d\n",i,a[i]);
}

void main()
{
    int a[5],i;
    float sum=0,avg;
    printf("enter marks of five students:");
    for (i=0;i<5;i++)
        scanf("%d",&a[i]);
    for (i=0;i<5;i++)
        sum=sum+a[i];
    avg=sum/5;
    printf("sum=%f\n",sum);
    printf("Average=%f",avg);
}

void main()
{
    int a[8],i;
    int even=0,odd=0;
    printf("enter the elements:");
    for(i=0;i<8;i++)
    {
        scanf("%d",&a[i]);
       // if (a[i]%2==0)   //we can write simply in one loop, no need of another loop
       //     even=even+1;
       //     //even++;
       // else
       //     odd=odd+1;
    }
    for (i=0;i<8;i++)
    {
        if (a[i]%2==0)
            //even=even+1;
            even++;
        else
            odd=odd+1;
    }
    printf("total no. of even numbers:%d\n",even);
    printf("total no. of odd numbers:%d",odd);
}

void main()
{
    int a1[5],a2[5],a3[5],i;
    printf("enter the array 1 elements:");
    for(i=0;i<5;i++)
        scanf("%d",&a1[i]);
    printf("enter the array 2 elements:");
    for(i=0;i<5;i++)
        scanf("%d",&a2[i]);
    for(i=0;i<5;i++)
    {
        a3[i]=a1[i]+a2[i];
        printf("the sum array element at index %d is:%d\n",i,a3[i]);
    }
}

//2D Array
//Compile time initialisation
void main()
{
    int a[2][3]={0,5,6,4,2,5};
    int a[2][3]={{3,4,2},{5,7,1}};
    int a[2][3]={{3,4,2},
                 {5,7,1}};
    int a[][3]={{3,4,2},{5,7,1}};
    int a[2][3]={{3,4},{5,7}}; //3rd value in row 1 and 2 are filled with zero
    int a[2][3]={0}; //all the values filled with zero
    int a[2][3]={{3,4,2}}; //row 2 will be 0
}

//Runtime initialisation
void main()
{
    int a[2][3],i,j;
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
}

void main()
{
    int a[2][3],i,j,sum=0;
    printf("enter the elements:\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("The array matrix is:\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
            sum+=a[i][j];
        }
        printf("\n");
    }
    printf("\nsum of the array elements are %d",sum);
}

void main()
{
    int a[2][3],i,j;
    printf("enter the array elements\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
            {
                scanf("%d",&a[i][j]);
            }
    }

    printf("the array matrix is:\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("the transpose array matrix is:\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
}

void main()
{
    int a[2][3],i,j,b[3][2];
    printf("enter the array elements\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
            {
                scanf("%d",&a[i][j]);
            }
    }

    printf("the matrix is:\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("the transpose matrix is:\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%d\t",a[j][i]);
            b[i][j]=a[j][i];
        }
        printf("\n");
    }
    printf("The stored b matrix is:\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    int a[3][3];
    int sr,sc,i,j;
    printf("enter the matrix:\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    printf("the matrix is:\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }

    for (i=0;i<3;i++)
    {
        sr=0,sc=0;
        for (j=0;j<3;j++)
        {
            sr=sr+a[i][j];
            sc=sc+a[j][i];
        }
        printf("sum of row is %d\n",sr);
        printf("sum of column is %d\n",sc);
    }
}

//for uneven matrix
void main()
{
    int a[2][3];
    int sr,sc,i,j;
    printf("enter the matrix:\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    printf("the matrix is:\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }

    printf("sum of rows are:\n");
    for (i=0;i<2;i++)
    {
        sr=0;
        for (j=0;j<3;j++)
            sr=sr+a[i][j];
        printf("sum of row is %d\n",sr);
    }

    printf("sum of columns are:\n");
    for (i=0;i<3;i++)
    {
        sc=0;
        for (j=0;j<2;j++)
            sc=sc+a[j][i];
        printf("sum of column is %d\n",sc);
    }
}

void main()
{
    int a[3][3];
    int sd1=0,sd2=0,i,j;
    printf("enter the matrix:\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    printf("the matrix is:\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }

    for(i=0,j=0;i<3,j<3;i++,j++)
    {
        sd1=sd1+a[i][j];
    }
    printf("sum of diagonal 1 is %d\n",sd1);

    for(i=0,j=2;i<3,j>=0;i++,j--)
    {
        sd2=sd2+a[i][j];
    }
    printf("sum of diagonal 2 is %d\n",sd2);
}

void main()
{
    int a[2][3],b[2][3],c[2][3],i,j;

    printf("enter the matrix 1:\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }

    printf("enter the matrix 2:\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
            scanf("%d",&b[i][j]);
    }

    printf("matrix 1:\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }

    printf("matrix 2:\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
            printf("%d\t",b[i][j]);
        printf("\n");
    }

    printf("The sum matrix is:\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}

#define N 50
void main()
{
    int a[N][N],b[N][N],c[N][N],i,j,k,m,n,p,q,sum;

    printf("enter rows and columns for matrix 1:\n");
    scanf("%d %d",&m,&n);

    printf("enter the matrix 1:\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }

    printf("enter rows and columns for matrix 2:\n");
    scanf("%d %d",&p,&q);

    printf("enter the matrix 2:\n");
    for (i=0;i<p;i++)
    {
        for (j=0;j<q;j++)
            scanf("%d",&b[i][j]);
    }

    printf("matrix 1:\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }

    printf("matrix 2:\n");
    for (i=0;i<p;i++)
    {
        for (j=0;j<q;j++)
            printf("%d\t",b[i][j]);
        printf("\n");
    }

    if (n==p)
    {
        for (i=0;i<m;i++)
        {
            for (j=0;j<q;j++)
            {
                sum=0;
                for (k=0;k<n;k++)
                {
                    sum=sum+(a[i][k]*b[k][j]);
                }
                c[i][j]=sum;
            }
        }

        printf("multiplied matrix is:\n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<q;j++)
                printf("%d\t",c[i][j]);
            printf("\n");
        }
    }
    else
        printf("Multiplication is not possible");
}

//Strings
//Initialisation
void main()
{
    char name1[10]="Jenny";
    char name2[10]={'J','e','n','n','y','\0'};
    char name3[]={'J','e','n','n','y','\0'};
    char name3[5]={'J','e','n','n','y','\0'}; //wrong
    char name4[6];
    name4[6]="jenny";  //wrong
}

void main()
{
    //char s1[6]={'j','e','n','n','y','\0'};
    char s2[10];
    printf("enter a string:");
    scanf("%s",s2);  //drawback-it will not consider the space in words. e.g. In "jayanti kathri" jayanti only be stored
    //printf("%s",s1);
    printf("%s",s2);
}

void main()
{
    char s1[10],s2[10];
    printf("enter a name:");
    scanf("%s %s",s1,s2);
    printf("%s %s",s1,s2);
}

void main()
{
    char s2[10];
    printf("enter a string:");
    gets(s2);
    printf("%s",s2);
}

//drawback of scanf and gets - buffer overflow : while the size of the string is 5 and entered value is lengthy it will try to store and print the value,
//It will not check the buffer size, then it will store beyond the allocated memory and overwrite the other memory values in nearest location
//this is very risky because of some important data may be there

void main()
{
    char s3[10];
    printf("enter a string:");
    scanf("%4s",s3);  //now it will read only 4 characters there is no buffer overflow
    printf("%s\n",s3);
    puts(s3);
}

void main()
{
    char s1[30];
    printf("enter a string:\n");
    scanf("%s",s1);
    printf("%s\n",s1);

    printf("%.5s\n",s1);
    printf("%10.5s",s1);

    printf("\n%s",&s1[3]); //it will print from 3rd index to the full string
    //printf("\n%s",s1[3]); //wrong
}

void main()
{
    char s1[30];
    printf("enter a string:\n");
    scanf("%s",s1);
    puts(s1);
    puts(s1); //It will automatically add newline(\n) operator at the end of a string whereas printf will print in the same line
}
*/

//Length of string
#include<stdio.h>
#include<string.h>
/*
void main()
{
    int count=0;
    char s1[30];
    printf("enter a string:");
    gets(s1);
    count=strlen(s1);     //strlen(pointer to string), it will return unsigned int value
    printf("length of the string is %d",count);
}

void main()
{
    int i=0,count=0;  //here we can use 'unsigned int' instead of 'int'
    char s1[30];
    printf("enter a string:");
    gets(s1);
    while (s1[i]!='\0')
    {
        count++;
        //count=count+1;
        i++;
    }
    puts(s1);
    printf("length of the string is %d",count);
}

//Concatenation
void main()
{
    char s1[30],s2[10];
    printf("enter two strings:");
    gets(s1);
    gets(s2);
    strcat(s1,s2);   //strcat(destination,source) , buffer overflow may happen so the size of destination string must be long, it will return pointer to the destination string
    printf("%s\n",s1);
    puts(s2);
}

void main()
{
    int i,len1,len2;
    char s1[30],s2[30];
    printf("enter two strings:\n");
    gets(s1);
    gets(s2);
    len1=strlen(s1);
    len2=strlen(s2);

    for (i=0;i<=len2;i++)
    {
        s1[len1+i]=s2[i];
        //s1[len1]=s2[i];  //by using this len1 is modified and updated, in the program after sometime we can't use the correct value of len1, it will be wrong
        //len1++;
    }
    printf("%s",s1);
    puts(s2);
}

void main()
{
    char s1[30]="gowtham",s2[30]="kishore";
    strncat(s1,s2,3);  //strncat(destination,source,no.of char to be concatenated)
    printf("%s\n",s1);
    puts(s2);
}

//String comparison
//strcmp will return 0 if the strings are same
//return +ve value if the char of the string1 doesn't match and greater than(ascii value) the string2 char
//return -ve value if the char of the string1 doesn't match and less than(ascii value) the string2 char
void main()
{
    int a;
    char s1[30],s2[30];
    printf("enter two string:\n");
    gets(s1);
    gets(s2);
    a=strcmp(s1,s2);
    printf("%d\n",a);
    if (a==0)
       printf("Same strings");
    else
       printf("Strings are not same");

    //if (strcmp(s1,s2)==0)
    //    printf("same");
    //else
    //    printf("not same");
}

void main()
{
    int i,flag=0;
    char s1[30],s2[30];
    printf("enter two string:\n");
    gets(s1);
    gets(s2);

    for (i=0;s1[i]!='\0'||s2[i]!='\0';i++)
    {
        if (s1[i]!=s2[i])
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
        printf("Not same");
    else
        printf("Same");
}
//Reversing of string
void main()
{
    char s1[30];
    printf("enter a string:");
    gets(s1);
    strrev(s1);     //strrev(pointer to the string), it will return pointer to the modified string
    printf("%s",s1);
}

void main()
{
    int i,l1;
    char s1[30],ch;
    printf("enter a string:");
    gets(s1);
    l1=strlen(s1);

    for (i=0;i<l1/2;i++)
    {
        ch=s1[i];
        s1[i]=s1[l1-1-i];
        s1[l1-1-i]=ch;
    }
    printf("%s",s1);
}

void main()
{
    int i,j,l1;
    char s1[30],ch;
    printf("enter a string:");
    gets(s1);
    l1=strlen(s1);

    for (i=0,j=l1-1;i<j;i++,j--)
    {
        ch=s1[i];
        s1[i]=s1[j];
        s1[j]=ch;
    }
    printf("%s",s1);
}

//but this is not reversing, reversing means swapping the characters, here the ans are characters only not a string, but the above the reversed string is stored in a variable
void main()
{
    int i,l1;
    char s1[30];
    printf("enter a string:");
    gets(s1);
    l1=strlen(s1);
    for (i=l1-1;i>=0;i--)
    {
        printf("%c",s1[i]);
    }
}

void main()
{
    char s1[30];
    printf("enter a string:");
    gets(s1);
    strlwr(s1);    //upper to lower case
    //strupr(s1);  //lower to upper cse
    printf("%s",s1);
}

void main()
{
    int i;
    char s1[30];
    printf("enter a string:");
    gets(s1);
    for (i=0;s1[i]!='\0';i++)
    {
        if (s1[i]>='A' && s1[i]<='Z')    //upper to lower case
        {
            s1[i]=s1[i]+32;
        }
    }
    printf("%s",s1);
}
//method 2
void main()
{
    int i,a;
    char s1[30];
    printf("enter a string:");
    gets(s1);
    a=strlen(s1);
    for (i=0;i<a;i++)
    {
        if (s1[i]>=65 && s1[i]<=90)    //upper to lower case, we can use char values instead of characters
        {
            s1[i]=s1[i]+32;
        }
    }
    printf("%s",s1);
}

void main()
{
    int i;
    char s1[30];
    printf("enter a string:");
    gets(s1);
    for (i=0;s1[i]!='\0';i++)
    {
        if (s1[i]>='a' && s1[i]<='z')    //lower to upper case
        //if (s1[i]>='97' && s1[i]<='122')
        {
            s1[i]=s1[i]-32;
        }
    }
    printf("%s",s1);
}


//Pointers(special variables)

//Pointers are special variables which contain address of other variables, it will always contain address of other variables whereas variables contain values
//Declaration and Initialization

void main()
{
    int a;
    float b;
    int * p; //here 'p' will contain address of variable whose data type is integer
    p=&a;
    //p=&b; //wrong one because b is a float value

    int*p=&a;
    int a=5,*p=&a;
    int a,*p=&a;
    int *p=&a,a=5; //wrong
}

//address of(&) and Indirection(*) operator
void main()
{
    int a=10,b=5,d=8,c;
    int *p,*q,*r;
    p=&a;
    q=&b;   //more than one pointer can point to a single variable
    r=&d;
    c=*q;
    printf("value of a=%d",a);
    printf("\nvalue of a=%d",*p);
    printf("\nvalue of a=%d",*(&a));
    printf("\n%d",p); //base address of a
    printf("\n%x",p); //address in hexadecimal form
    printf("\naddress of a = %d",&a);
    printf("\naddress of p = %d",&p);

    printf("\n%d",*q);
    printf("\n%d",c);

    printf("\n%d",r);
    *r=20;
    printf("\n%d",d);
    printf("\n%d",r);
}

void main()
{
    int a=10,b=5;
    int *p,*q;   //here * act as only a pointer(it will tell p is pointer) for the declaration, not acting as a d-referencing or in direction operator
    p=&a;
    //q=p;
    //printf("%d %d %d",a,*p,*q);

    q=&b;
    *q=*p;
    printf("\n%d %d",*p,*q);
}

void main()
{
    int a=10,b=5;
    float *p,*q;
    p=&a;
    q=&b;
    printf("%f %f",*p,*q);
}

void main()
{
    int a=10;
    int *p=&a;   //one level pointer which can store the address of a variable
    int **q=&p;   //two level pointer which can store the address of only a one level pointer
    int ***r=&q;  //three level pointer which can store the address of only a two level pointer
    printf("%d %d %d %d",a,*p,**q,***r);
    printf("\naddress of q:%x %x",&q,r);
    printf("\naddress of p:%x %x %x",&p,q,*r);

    **q=25;
    ***r=50;
    printf("\n%d",a);
}

//Arithmetic operations in Pointer
void main()
{
    int a=10;
    int *p=&a;
    int *q=&a;
    printf("%d",*p);
    //p+q is invalid , we cannot add two pointers, we can only add integer value to a pointer
    p=p+2;   //p+n=value of p + (n*size of datatype)
    printf("\n%d",*p);
}
//addition
void main()
{
    int a[5]={3,5,1,7,8};
    int *p=&a[0]; // or *p=a , 'a' contains the address of first element
    printf("%d",*p);
    printf("\naddress:%d",p);
    p=p+2;   //p+n=&a[0+n]
    printf("\n%d",*p);  //now p is pointing to a[2]
    printf("\naddress:%d",p);
    *p=20;
    printf("\n%d",*p);
    printf("\naddress:%d",p);
}

//subtraction
void main()
{
    int a[]={2,4,6,2,7,9},c;
    int *p=a;
    int *q=&a[3];
    //p-q,q-p is possible where p and q are pointing only one array, if they are pointing two diff. arrays p-q,q-p is not possible
    //p-q return an integer value, how many elements q apart from p
    //p-n return pointer(address)
    c=q-p;  //e.g. 1012-1000=12/4(size of datatype)=3
    printf("%d",c);
    q=q-2;
    printf("\n%d",*q);
    p=p-1;
    printf("\n%d",*p);
}

void main()
{
    int a[]={2,4,6,2,7,9},c;
    int *p=a;
    int *q=&a[4];
    c=p-q;
    printf("%d",c);
    *q=25;
    c=q-p;
    printf("\n%d",c);
    *p=27;
    q=q-3;
    printf("\n%d",*q);
    p=p+3;
    printf("\n%d",*p);
    //c=p-q;
    printf("\n%d",p-q);
}

//Increment and Decrement
void main()
{
    int a[]={5,8,9,3,2,5,0,7,1};
    int *p;
    p=a;
    printf("%d",*p);
    p++;  //p=p+1
    printf("\n%d",*p);
    printf("\n%d",*p++); //value first used then incremented
    printf("\n%d",*p);
    printf("\n%d",*++p);

    printf("\n%d %d",*p++,*p++); //associativity is right to left
    printf("\n%d",*p);

    printf("\n%d",*p--);
    printf("\n%d",*p);
    printf("\n%d",*--p);

    printf("\n%d %d %d",*--p,*--p,*--p);

    printf("\n%d",*p);
    printf("\n%d",(*p)--);
    printf("\n%d",*p);
    printf("\n%d",++(*p));
}
//Prob
void main()
{
    int a[]={10,11,-1,56,67,5,4};
    int *p,*q;
    p=a;
    printf("%d",*p);
    printf("\n%d %d %d",(*p)++,*p++,*++p);
    printf("\n%d",*p);
    q=p+3;
    printf("\n%d",*q-3); //precedence is '*' greater than '-'
    printf("\n%d",*--p+5);
    printf("\n%d",*--q+5);
    printf("\n%d",*p+*q);
}

void main()
{
    int a[]={10,11,-1,56,67,5,4};
    int *p,*q;
    p=a;
    q=&a[0]+3;
    printf("%d %d %d",(*p)++,(*p)++,*(++p));
    printf("\n%d",*p);
    printf("\n%d",(*p)++);
    printf("\n%d",(*p)++);
    q--;
    printf("\n%d",(*(q+2))--);
    printf("\n%d",*(p+2)-2);
    printf("\n%d",*(p++ -2)-1);
    printf("\n%d",*p);
}

void main ()
{
    const int a=-11;
    const int *p=&a;
    *p=10;       // now a is a read only location, we can't modify it
    printf("%d",*p);
}

void main()
{
    char s1[]="welcome to jenny's lecture";
    char *p=s1;
    printf("%c\n",*p);
    printf("%c\n",*(p++ +1));
    printf("%c\n",*((p-- +5)-1)+3);
    printf("%c\n",*(++p+10)-32);
    printf("%c %c %c\n",*p,*++p,*--p);
}

//void pointer
void main()
{
    int a=5; float b=2.4; char c='f';
    int *p;
    p=&a;
    float *q=&b;
    char *r;
    printf("%d %f\n",*p,*q);  //here we have to declare and use different datatype of pointers to print different datatype of values

    void *vp;   //here we can use different data type in one pointer by typecasting
    vp=&a;
    printf("%d\n",*(int*)vp);
    vp=&b;
    printf("%f\n",*(float*)vp);
    vp=&c;
    printf("%c\n",*(char*)vp);
    //In a program, if we are using int,float,char we need to declare 3 pointers for int,float,char but by using the void pointer no need to declare these
    //3 pointers, we can access all these three data types by using these one void pointer
    //malloc and calloc will return void pointer
}
//Null pointer
void main()
{
    //It is used in error handling in c
    int *p=NULL; //*p=0 we can use 0 instead of null ,here it doesn't point to(or refer) any valid object, it point to 0th memory location which is reserved, so we can't dereference it
    printf("%d",p);
    //printf("%d",p); //wrong one, program will crash

    //ptr=(int*)malloc(5*size of(int)); //malloc and calloc are built in functions which are used to allocate memory dynamically
    if (p==NULL)
    {
        printf("this is a null pointer, memory not has been allocated");
    }
    else
    {
        printf("memory allocated")
    }
    //here, by using malloc, memory is allocated if it is not allocated it left as null pointer so we know memory is not allocated and the program will not
    //crash while using dereferencing, if we don't use null, while the memory is not allocated the program will crash while using dereferencing operator,
    //because we have only declared the pointer not even initialized or allocated memory
}

void main()
{
    int *p=NULL; //we can't dereference(*p) a null pointer it will crash
    int *q;
    //int *q=NULL;
    printf("%d\n",p);
    printf("%d\n",q);
    if (p==q)
        printf("both are same");
    else
        printf("not same");
}
*/
//Dangling pointer
#include<stdlib.h>
/*
void main()
{
    int *p=(int*)malloc(sizeof(int));  //malloc return void pointer so we are using typacaste
    *p=10;
    printf("%d\n",*p);
    free(p); //used to free the memory, now p is pointing to a free memory, p is still pointing to that address
    //at this time p is acting as dangling pointer
    printf("%d\n",*p); //garbage value or program crash may happen
    //to avoid this situation better to initialize null pointer
    p=NULL;
    if (p==NULL)
        printf("its a null");
    else
        printf("we can dereference");
}

void main()
{
    int *p;
    {
        int a=10;
        p=&a;
        printf("%d\n",*p);
    } //after this block the value of a would be vanished
    //printf("%d",a); //wrong, undeclared
    printf("%d",*p); //here p is acting as a dangling pointer because a is vanished, may be sometime we get the correct answer
}

int* f()
{
    int a=10;
    //static int a=10;  //if we use static its like global declaration, a would not be vanished after the function block
    return &a;
}
void main()
{
    int *p=f();
    printf("%d",*p); //here also p is acting as a dangling pointer because after the function returned the address, a would be vanished
}

//Wild Pointer
void main()
{
    int *p;
    printf("%d",*p); //uninitialized pointer(p) is known as wild pointer or its a pointer which is pointing to any other random location
    //to avoid these, make these as null pointer or use dynamic allocation or initialize as normal pointer
}


//Functions


//if we write the definition fn after fn calling we need to declare the fn, if we write the fn definition before the fn calling no need to declare the function(fn)
void sum()
{
    int a,b,sum=0;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum=%d\n",sum);
}
void main()
{
    sum();
    printf("hello\n");
    sum();
    //we can use functions throughout the program repeatedly
}

void sum(int,int);
void sub(void);  //without arguments better to use void, if we write void it will not take any arguments
//void sum(int m,int n);
void main()
{
    printf("hello\n");
    sum(5,6);
    sub();
}
void sum(int a,int b)
{
    int sum=0;
    sum=a+b;
    printf("sum is =%d\n",sum);
}
void sub()
{
    int a=8,b=4,c=0;
    c=a-b;
    printf("%d",c);
}

char fnc(); //we can declare it in the main fn also, but better to declare outside of the program
void main()
{
    char ch;
    ch=fnc();
    printf("char=%c\n",ch);
}
char fnc()
{
    char c;
    printf("enter a character:\n");
    scanf("%c",&c);
    return c;
}


//Call by value, drawback-if we do any correction in the fn it will not reflect in the main fn, to overcome we can use call by reference method
void fun(int,int);
void main()
{
    int x=5,y=7;
    fun(x,y);
    printf("x=%d y=%d\n",x,y);
}
void fun(int x,int y)
{
    x=7;
    y=5;
    printf("x=%d y=%d\n",x,y);
}

//Call by reference, here we are using pointer to point the variable in the main fn so any change in the fn will be reflected throughout the program by calling the fn
void fun(int*,int*);
void main()
{
    int x=5,y=7;
    fun(&x,&y);
    printf("x=%d y=%d",x,y);
}
void fun(int *x,int *y)
{
    *x=7;
    *y=5;
    printf("x=%d y=%d\n",*x,*y);
}
//Function classification
//No argument without return type
void sum(void);
void main()
{
    sum();
}
void sum()
{
    int a=8,b=7,sum=0;
    sum=a+b;
    printf("sum =%d\n",sum);
}
//No argument with return type
int sum(void);
void main()
{
    int s;
    s=sum();
    printf("sum=%d\n",s);
}
int sum()
{
    int a,b;
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    return a+b;
    //return a+b,a;  //here comma operator uses first and discard it, and return the second element
    printf("hello"); //after the return executed, it will return the value and as soon as it will return the control also to the main fn, it will not execute the after lines
}

//With argument without return type
void sum(float,float);
void main()
{
    float a,b;
    printf("enter two numbers:\n");
    scanf("%f%f",&a,&b);
    sum(a,b);
}
void sum(float x,float y)
{
    float sum=0;
    sum=x+y;
    printf("sum=%f",sum);
}

void fn(int);
void main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    fn(a);
}
void fn(int a)
{
    if (a%2==0)
        printf("even number");
    else
        printf("odd number");
}

void sum(int,float);
void main()
{
    int a;
    float b;
    printf("enter two numbers:\n");
    scanf("%d%f",&a,&b);
    sum(a,b);
}
void sum(int x,float y)
{
    float sum=0;
    sum=x+y;
    printf("sum=%f",sum);
}

//With argument with return type
int sum(int,int);
void main()
{
    int a,b,c;
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("sum=%d",c);
}
int sum(int x,int y)
{
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    return x+y;
}

int max(int,int);
void main()
{
    int a,b,c;
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    c=max(a,b);
    printf("Maximum is %d",c);
}
int max(int x,int y)
{
    if (x>y)
        return x;
    else
        return y;
}
//Problems
int jumble(int x,int y)
{
    x=2*x+y;
    return x;
}
int main()
{
    int x=2,y=5;
    y=jumble(y,x);
    x=jumble(y,x);
    printf("%d\n",x);
    return 0; //if we use void main no need to write return, because it will need to return something
}

int incr(int i)
{
    static int count=0;  //here static holds the previous value and prevent the re initialization of 0 while looping, if not using static the count value will be vanished after exiting the block
    count+=i;
    return count;
}
int main()
{
    int i,j;
    for (i=0;i<=4;i++)
        j=incr(i);
    printf("%d\n",j);
    return 0;
}

int r()
{
    static int num=7;
    return num--;
}
int main()
{
    for(r();r();r())
        printf("%d\n",r());
    return 0;
}

void fn(int*p,int m)
{
    m=m+5;
    *p=*p+m;
    return;
}
void main()
{
    int i=5,j=10;
    fn(&i,j);
    printf("%d\n",i+j);
}
//Passing array as argument
float avg(int[],int); //we put sq. brackets to denote its an integer array
void main()
{
    int marks[5]={10,45,34,37,23},size;
    float a;
    size=sizeof(marks)/sizeof(marks[0]);  //size of array=no of elements*size of one element(for int 4 bytes)
    a=avg(marks,size);   //here, we are not passing the complete array, only passing the address of the base element(internal pointer)
    printf("average mark is %f\n",a);
    printf("%d\n",sizeof(marks));
}
float avg(int marks1[],int x) //this will act as int*marks1, marks1 is a pointer(call by reference,call by value)
{
    int i;
    float sum=0,average=0;
    for (i=0;i<x;i++)   //if we calculate the size of the array(x) here it will give 1 because of pointer, so we are calculating it in the main function and passing through arguments
    {
        sum=sum+marks1[i];
    }
    average=sum/x;
    printf("%d\n",sizeof(marks1)); //the array size is 4 bytes because of the pointer which contain base address of the integer array
    return average;
}
//Passing string as argument
void modify(char[],char[]);
void main()
{
    char s1[30];
    char s2[30];
    printf("enter two strings:\n");
    gets(s1);
    gets(s2);
    modify(s1,s2);
    printf("%s %s\n",s1,s2);
}
void modify(char s1[],char s2[])
{
    int i,ln=0;
    for (i=0;s1[i]!='\0';i++)
    {
        ln=ln+1;
    }
    printf("length of the first string is %d\n",ln);

    s2[0]=s2[0]-32;
    s2[1]='5';
    //printf("%s %s\n",s1,s2);
}

void modify(char*,char*);
void main()
{
    char s1[30];
    char s2[30];
    printf("enter two strings:\n");
    gets(s1);
    gets(s2);
    modify(s1,s2);
    printf("%s %s\n",s1,s2);
}
void modify(char *s1,char *s2) //we can also write like this, because s1 pointer pointing to the character array
{
    int i,ln=0;
    for (i=0;s1[i]!='\0';i++)
    {
        ln=ln+1;
    }
    printf("length of the first string is %d\n",ln);

    s2[0]=s2[0]-32;
    s2[1]='5';
    //printf("%s %s\n",s1,s2);
}

//Return string from a function
//char* display();
const char* display();
void main()
{
    const char *s1;
    s1=display();
    s1[0]='x'; //we can't modify it because its stored in heap memory(read only) to overcome use const keyword(here and 4th) to avoid modifying(ultimately it will throw error)-at 4th
    printf("%s",s1);
}
//char* display()
const char* display()
{
    //return "jenny"; //here its not stored in stack memory, its stored in heep memory so it will not be vanished after returning(but its a read only memory, we can't modify)

    //char s1[]="jenny";
    //return s1; //it will vanish after returning address of local variable, so it will print null

    //static char s1[]="jenny"; //here we can also modify the string
    //return s1;

    //4th
    const char *s1="jenny"; //this pointer will also be stored in heep area , if const wrote only here it will throw out after returning
    return s1;
}

//Returning a pointer
int* rp(int[]);
void main()
{
    int* p;
    int a[]={1,2,3,4,5,6,7};
    printf("%d\n",*a);
    //a=a+2;   //here we can't modify a, because its an array(act as a constant pointer to the first element of the array)
    //printf("%d\n",*a);
    p=rp(a);
    printf("%d\n",*p);
}
int* rp(int a[])
{
    a=a+2; //here a act as an pointer so we can modify it
    return a;
}

//Problem
void f(int*p,int*q)
{
    p=q;
    *p=2;
}
int i=0,j=1;
int main()
{
    f(&i,&j);
    printf("%d %d",i,j);
    return 0;
}

//Function pointer
int sum(int,int);
void main()
{
    int s=0;
    int (*ptr)(int,int)=&sum; //or we can simply write sum instead of &sum, here ptr will store the base address of the function(base address of the code)
    //ptr=&sum;
    s=(*ptr)(5,4); //we can use ptr instead of (*ptr), here dereferences the pointer and passing arguments to the function
    printf("%d",s);
}
int sum(int a,int b)
{
    return a+b;
}

//Call back function
//here sum and sub are the call back functions
void sum(int a,int b)
{
    printf("%d\n",a+b);
}
void sub(int a,int b)
{
    printf("%d\n",a-b);
}
void display(void (*fp)(int,int)) //to accept the address of fn here we are using fn pointer, here we are calling fns using fn pointer so the returntype and datatype of them must be same
{
    (*fp)(5,4);
}
void main()
{
    display(&sum);
    display(sub);
}
//Function pointer array
void add(int a,int b)
{
    printf("addition=%d",a+b);
}
void sub(int a,int b)
{
    printf("subtraction=%d",a-b);
}
void multi(int a,int b)
{
    printf("multiplication=%d",a*b);
}
void divi(int a, int b)
{
    printf("division=%d",a/b);
}
void main()
{
    int a,b,ch;
    void (*ptr[])(int,int)={add,sub,multi,divi}; //function pointer array
    printf("enter two numbers:\n");
    scanf("%d %d",&a,&b);
    printf("enter your choice between 0-3:\n");
    scanf("%d",&ch);
    (*ptr[ch])(a,b); //here its a replaces a complete switch case statements(low memory)
}

//Recursion
void display(int a)
{
    if (a<1)
        return;
    else
    {
        printf("%d",a);
        display(a-1);
        printf("%d",a);
    }
}
void main()
{
    int a=3;
    display(a);
}

//Problem(Direct recursion)
int sum(int x)
{
    int s=0;
    if (x==1)
        return x;
    s=x+sum(x-1);
    return s;
}
void main()
{
    int a;
    a=sum(5);
    printf("%d",a);
}

//Indirect recursion
int fn1(int);
int fn2(int);
void main()
{
    printf("%d",fn1(5));
}
int fn1(int a)
{
    if (a<=1)
        return a;
    else
        return a*fn2(a-1);
}
int fn2(int a)
{
    if (a<=1)
        return a;
    else
        return a*fn1(a-1);
}

//Tail recursion
void fn(int a)
{
    if (a<1)   //after reached this condition it will return, here there is no statements are there while returning so its tail recursion
        return; //while returning there is no tasks are there so its a wastage of memory, so better to write tail recursion by using loops
    else
    {
        printf("%d ",a);
        fn(a/2);   //here its a direct recursion, its a tail recursion
        //printf("%d",a);   //if we modify like this it will become a non tail recursion because of some tasks are left to execute while returning
    }
}
void main()
{
    fn(10);
}

//Non-Tail recursion
int fn(int a)
{
    if (a<1)
        return 0;
    else
        return 1+fn(a/2);  //here its having some tasks to do while returning so its a non tail recursion, here we are fully utilizing the stack, but in tail recursion its a wastage of memory while maintaining stack
}
void main()
{
    int x;
    x=fn(10);
    printf("%d",x);
}

//Problem
void count(int a)
{
    static int d=1;
    printf("%d",a);
    printf("%d",d);
    d++;
    if (a>1)
        count(a-1);
    printf("%d",d); //here while returning all stages d value will be 4 only because its modified and updated, not initialized on every stages
}
void main()
{
    count(3);
}

//Structures(User defined data type)
struct students
{
    int roll;  //we can't initialize here
    char a[20];
    float marks;
} ;  //till now no memory has been allocated to this
void main()
{
    struct students a;
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(struct students)); //struct students is a datatype, a is a variable or object
}
//we can also declare like this
struct students  //here these tag(students) is optional we can write struct only for this type of declaration
{
    int roll;  //we can't initialize here
    char a[20];
    float marks;
}a,b ;

//Initialization and accessing
struct student
{
    int roll;
    char name[20];
    float marks;
}s1={1,"John",87.5};

struct student s5={5,"jasmine",85.9}; //we can also declare outside of the main function

void main()
{
    struct student s2={2,"Elsa",92.4};  //if we initialize {2} only other two are filled with null and zero
    struct student s3;
    struct student s4;
    s3=s2;
    s3.marks=84.2;
    s3.roll=3;
    printf("%s\n",s1.name);
    printf("%s %f\n",s3.name,s3.marks);

    printf("enter details of s4:\n");
    scanf("%d %s %f\n",&s4.roll,s4.name,&s4.marks);
    //we can't compare s1,s2,s3 (s1>s2), but we can compare the members(roll,marks,name)like-(s1.roll>s2.roll)

    printf("%d %s %f\n",s5.roll,s5.name,s5.marks);
}

//Array of structures
struct student
{
    int roll;
    char name[20];
    float marks;
};
void main()
{

    int i;
    struct student s[3]; //3 structure objects or variables
    printf("enter the details for each object:\n");
    for (i=0;i<3;i++)
    {
        scanf("%d %s %f\n",&s[i].roll,s[i].name,&s[i].marks);
    }

    printf("the object/variable details are:\n");
    for (i=0;i<3;i++)
    {
        printf("%d %s %f\n",s[i].roll,s[i].name,s[i].marks);
    }
}

//Pointers to structures
struct student
{
    int roll;
    char name[20];
    float marks;
};
struct student s={23,"Julie",89.6};
void main()
{
    struct student *ptr=&s;
    printf("%d\n",s.roll);
    printf("%s\n",(*ptr).name);
    printf("%f\n",ptr->marks);
}

//Union(user defined data type)
//union is same as structure datatype, all the process are same like declaration, initialization, syntax, array, pointer; the datatype only a different one
//difference- In structure the memory allocation for members are in different blocks(e.g 3 blocks, 28 bytes ), but here the memory is allocated in only
//one block and the memory is the max memory of the individual members(e.g 4 bytes). All the members share the single memory
union student
{
    int a;
    char b;
    float c;
};
void main()
{
    union student s={5,'b',4.8};
    union student *ptr=&s;
    s.a=7;
    s.b='f';
    s.c=4.9; //disadv- the last updated value is overwritten because of shared memory(low memory), it can't process all the elements at a same time
    printf("%d %c %f\n",s.a,(*ptr).b,ptr->c); //other values are filled with any garbage value
}
//adv- used in previous year(when memories are expensive), we need to access one value at a time - in these case structure would occupy more memory so unions are used
//In these case, using structure is wastage of memory

union student
{
    int a;
    char b;
    float c;
};
void main()
{
    union student s;
    union student *ptr=&s;
    s.a=1;
    s.b=97;
    printf("%d\n",ptr->a);
    printf("%c\n",ptr->b);
}

//Type Defined Structure(Typedef)
//Used to create a alias name(another name) for a datatype
void main()
{
    typedef int integer;
    integer a=10;
    printf("%d",a);
}

typedef struct student
{
    int a;
    char b;
    float c;
}stu;  //here its not a variable declaration, its a alias name because of typedef

void main()
{
    stu s1={3,'g',56.5}; //if we won't use typedef we need to write full datatype(struct student)
    printf("%d %c %f\n",s1.a,s1.b,s1.c);
}

//Structure padding
//for 1 cpu cycle we can access 4 bytes(32bit)(8 bytes for 64bit)
//here first 4 bytes for char a and other 4 bytes for int b, but in the first 4 bytes 1 byte only occupied by char a other 3 bytes are padding
//bytes(memory alignment) for increase the performance(speed) of the process(by wasting memory)
struct stu
{
    //char c;
    char a;
    int b;
    char c;
}s;
void main()
{
    printf("%d",sizeof(s));
}
//so write the program in increasing(or decreasing) order of memory size to avoid the wastage of memory
//if interviewer ask how much memory allocated in these case?
//1st ask, with structure padding or without?
//2nd ask, word size is what? 4 bytes or 8 bytes

#pragma pack(1) //here we turned off the automatic padding feature
struct stu
{
    char a;
    int b;
    double c;
}s;
void main()
{
    printf("%d",sizeof(s));
}

//Problem
struct ques
{
    int a;
    float b;
    int c;
};
void main()
{
    struct ques q={.b=1,.c=10,.a=15}; //this is designated initilazation
    //struct ques q={1,10,15};
    printf("%d %f %d",q.a,q.b,q.c);
}

//File handling
//It will handle two types of files - txt and bin
//FILE *ptr=fopen("file name","mode")
//fclose(ptr)

//w mode(for writing)
void main()
{
    char ch='d';
    char s1[30]=" hello world";
    FILE *fp;
    fp=fopen("abc.txt","w");  //w mode - if file exist it would be overwritten, if doesn't exist new file would be created and written
    fputc(ch,fp);
    fputs(s1,fp);
    fclose(fp);
}

void main()
{
    char s1[30];
    int l=0,i;
    printf("enter a string:");
    gets(s1);
    l=strlen(s1);
    FILE *ptr;
    ptr=fopen("abc.txt","w");
    for (i=0;i<l;i++)
    {
        fputc(s1[i],ptr);
    }
    fclose(ptr);
}

void main()
{
    int a=12;
    char b[20]="grapes";
    FILE *p=NULL;
    p=fopen("abc.txt","w");
        if (p==NULL)
        {
            printf("no file!");
            exit(1); //need to include stdlib.h file
        }
    fprintf(p,"%d %s",a,b);
    fclose(p);
}

//r mode(for reading)
void main()
{
    FILE *ptr=NULL;
    char ch;
    ptr=fopen("abc.txt","r"); //if the file doesn't exist it will give error
        if (ptr==NULL)
        {
            printf("No file!");
            exit(1);
        }
    //ch=fgetc(ptr); //reading and storing it to print
    while (!feof(ptr)) //feof-end of file(predefined function), if its not an end of file it will return false(0), if its an end of file it will return true(1)
    {
        ch=fgetc(ptr);
        printf("%c",ch);
    }
    //printf("%c",ch);
    fclose(ptr);
}

void main()
{
    FILE *ptr=NULL;
    char s1[20];
    ptr=fopen("abc.txt","r"); //if the file doesn't exist it will give error
        if (ptr==NULL)
        {
            printf("No file!");
            exit(1);
        }
    fgets(s1,20,ptr); //fgets(where u want to store, how much char u want to read at one time(last char would be null), file pointer)
    printf("%s",s1);
    fclose(ptr);
}
//if the s1 size is 10 and reading size is 5 it will print only 4 char with a null char
//if the s1 size is 30 and reading size is also large(30) it will print the full string in the line 1 only, after the line 1 it will not print, one fgets finds a
//new line character it will stop
//so, to rectify this, put these into loop
void main()
{
    FILE *ptr=NULL;
    char s1[10];
    ptr=fopen("abc.txt","r"); //if the file doesn't exist it will give error
        if (ptr==NULL)
        {
            printf("No file!");
            exit(1);
        }
    while (!feof(ptr))
    {
        fgets(s1,10,ptr);
        printf("%s",s1);
    }
    fclose(ptr);
}

//a mode(for appending)
void main()
{
    FILE *fp=NULL;
    char s1[30];
    fp=fopen("abc.txt","a"); //if file doesn't exist it will create a new one like write mode
    if (fp==NULL)
    {
        printf("no file!");
        exit(1);
    }
    printf("enter your string:\n");
    gets(s1);
    //fputs(s1,fp);
    fprintf(fp,"\n%s",s1);
    fclose(fp);
}

//r+ mode(Read and write, mostly for reading)
//It is used to read and modify the content, we can write anywhere just need to set the file pointer to that location(by logic)
void main()
{
    FILE *fp=NULL;
    char s1[30],ch;
    fp=fopen("abc.txt","r+"); //if the file doesn't exist it will give error
    if (fp==NULL)
    {
        printf("no file!");
        exit(1);
    }
    fgets(s1,5,fp);
    printf("%s",s1);
    //rewind(fp);  //use rewind to place the cursor at starting position otherwise it will not write
    fputs("apple",fp);
    fputc('.',fp);
    fclose(fp);
}

//w+ mode(read and write, mostly for writing)
//It will truncate(erase) the previous content after it opens the file(like w mode), we can read the content after written something
void main()
{
    char ch;
    FILE *p=NULL;
    p=fopen("abc.txt","w+"); //if file exist the previous content will be erased, if doesn't exist new file would be created
    if (p==NULL)
    {
        printf("no file!");
        exit(1);
    }
    fputs("jenny",p);  //after writing pointer would be in the end position
    rewind(p); //so by using rewind(special function) we can move the pointer to the first position, then read the file
    while (!feof(p))
    {
        ch=fgetc(p);
        printf("%c",ch);
    }
    fclose(p);
}

//a+ mode(for read and append)
void main()
{
    char ch,s1[30];
    FILE *ptr=NULL;
    ptr=fopen("abc.txt","a+");  //if file doesn't exist it will create a new one like write mode
    if (ptr==NULL)
    {
        printf("no file!");
        exit(1);
    }
    //printf("%c",fgetc(ptr));
    //fputs(" khatri",ptr);
    //rewind(ptr);
    while (!feof(ptr))
    {
        ch=fgetc(ptr);
        printf("%c",ch);
    }
    fputs("melons",ptr);
    fclose(ptr);
}
*/
