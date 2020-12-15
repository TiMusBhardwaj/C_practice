#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	int len,i,vow=0;

	printf("\nEnter String: \n");
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
	    //printf("%s\n",str[i]);
                        if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
			vow=vow+1;
	}
	printf("\nNumber of vowels : %d",vow);
	return 0;
}
