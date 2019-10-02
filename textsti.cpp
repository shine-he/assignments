#include<stdio.h>
#include<string.h>
char compare (char *a,char *b);
int main()
{
    char s[20],p[20];
    printf("please input two strings s and p\n");
    printf("s:");
    gets(s);
    printf("p:");
    gets(p);
    compare (s,p);
}
char compare(char *a,char *b)
{
    int i;
    if (*b == *a && *b == '.')    //比较当前位置s、p的字符是否匹配
    {
        b++;
        a++;
    }    
    else
    {
        if (*(b++) == '*');
        else
        {
            printf("false");
            return 0;
        }
    }
    for(;a++;*a!='\0')
    {
        if (*a == *(a-1))
        {
            if (*b == '*');
            else
            {
               
            }
        }
        else 
        
    }
    printf("ture");
    return 0;
}