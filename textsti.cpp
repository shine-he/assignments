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
    if (*a == *b || *b == '.')    //比较s、p第一位的字符是否匹配
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
    if (*b != '\0')  
    {
        while(*a!='\0')
        {
            if (*a == *b || *b == '.')      //比较当前位置s、p的字符是否匹配，匹配则s、p指针移下一位
            {
                b++;
                a++;
            }    
            else if (*b == '*')             //p为*
            {
                if (*a == *(a-1))           //判断s当前位是否与上一位相等，相等则指针移下一位
                a++;
                else                        //不等则判断p上一位是否为.，是则s移位否则p移位
                {
                    if (*(b-1) == '.')
                    a++;
                    else
                    b++;
                }
            }
            else                            //p为字母或\0
            {
                printf("false");
                return 1;
            }
        }
        if (*a == '\0' && *b!='\0') 
        {
            printf("false");
            return 1;
        }
        else;
    }
    else
    {
        printf("false");
        return 1;
    }
    
    printf("ture");
    return 1;
}