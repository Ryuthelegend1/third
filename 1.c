#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,n,a[1000],temp,count=0;
	FILE *fp;
	fp=fopen("out.txt","w+");
	for(i=1000;i>0;i--)
		a[i]=i;
	for(i=0;i<=1000;i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				count++;
				fprintf(fp,"%d\n",n);
			}
		}
	}
	fclose(fp);
}
		
