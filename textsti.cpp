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
    if (*a == *b || *b == '.')    //比较当前位置s、p的字符是否匹配
    {
        b++;
        a++;
    }    
    else
    {
        if (*(b+1) == '*')
        b++;
        else
        {
            printf("false");
            return 1;
        }
    }
    while(*a!='\0')
    {
        if (*a == *(a-1))
        {
            if (*b == '*');
            else
            {
                if (*a == *b || *b == '.')    //比较当前位置s、p的字符是否匹配
                {
                    b++;
                    a++;
                }    
                else
                {
                    if (*(b+1) == '*')
                    b++;
                    else
                    {
                        printf("false");
                        return 1;
                    }
                }
            }
        }
        else
        {
            if (*a == *b || *b == '.')    //比较当前位置s、p的字符是否匹配
            {
                b++;
                a++;
            }    
            else
            {
                if (*(b+1) == '*')
                b++;
                else
                {
                    printf("false");
                    return 1;
                }
            }
        }
        a++;
    }
    
    printf("ture");
    return 1;
}