#include<stdio.h>
void main()
{
	char s[11] = "Ssidigital";
	int i=0;
	int count=0;
	while(i<11)
	{
		if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')
		{
			count++;//1//2//3//4
		}
		i++;
	}
	printf("\n number of vowels : %d",count);
	getch();
	
}
