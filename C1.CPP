#include<iostream.h>
#include<conio.h>
int prime(int);
void main()
{
clrscr();
int n,num=2,k=0;
cout<<"enter the number";
cin>>n;
while(n!=1)
{
while(n%num==0)
{
k++;
n=n/num;
}
num=prime(num);
cout<<num<<"^"<<k<<"*";
}
getch();
}
int prime(int num)
{
int i,j,f=0,x=1;
num++;
while(x>0)
{
j=2;
for(i=num;j<=i;j++)
{
if(i%j==0)
{
f=1;
}
else
{
f=0;
}
}
if(f==1)
{
num++;
}
else
{
break;
}
}
return num;
}