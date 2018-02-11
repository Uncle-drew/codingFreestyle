#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int reverseStr(const char *str, char **p)
{
	if(str == NULL || p==NULL)
		return -1;
	*p = (char *)malloc(sizeof(char) * 64);
	strcpy(*p,str);
	char *p1 = *p;
	char *p2 = p1 + strlen(*p)-1;
	while(p1 < p2)
	{
		char tmp = *p1;
		*p1++ = *p2;
		*p2-- = tmp;
	}
	
	return 0;

}
void free_str(char **str)
{
	if(*str != NULL)
		free(*str);
	*str = NULL;

}
void main()
{
	const char *buf1 = "IfYouCanDoItJustDoIt";
	char *str = NULL;
	reverseStr(buf1,&str);
	printf("%s\n",str);

	free_str(&str);
	

}
