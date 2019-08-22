#include<stdio.h>
#include<string.h>
void main()
{
	char name[50],gmail[50];
	int sum=0,j,len,i;
	char a[26]="abcdefghijklmnopqrstuvwxyz";
	char b[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	scanf("%[^\n]s",name);
	scanf("%s",gmail);
	//gets(name);
	//gets(gmail);
	strcat(name,gmail);
	//puts(name);
	j=0;
	len=strlen(name);
	for(i=0;i<len;i++)
	{
		for(j=0;j<26;j++)
		{
			if (name[i]==a[j] || name[i]==b[j])
			{
			sum=sum+j+1;
			}
		}
		
	}
	printf("%d",sum);
}
	
	
	
