#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//输入字符串，去除首位空格
int trimSpace(char *str1/*in*/,char *str2/*in,out*/)
{
	char *p1 = str1;
	char *p2 = p1 + strlen(str1)-1;
	while(isspace(*p1))
		p1++;
	while(isspace(*p2))
		p2--;
	int len = p2-p1+1;
	strncpy(str2,p1,len);
	str2[len] = '\0';
	return 0;
}
void main()
{
	char *buf1 = "        Hello World!       ";
	char buf2[64];
	trimSpace(buf1,buf2);
	printf("%s",buf2);
}
	
