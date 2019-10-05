#include<stdio.h>
#include<string.h>
#include<stdbool.h>
char compare (char *a,char *b);
char recompare (char *a,char *b);
char recur (char *k);
bool isMatch(char *s,char *p);
int main(){
    char inter_varia;
    int m,n,i,re1,re2;
    char s[20],p[20];
    printf("please input two strings s and p\n");
    printf("s:");
    gets(s);
    printf("p:");
    gets(p);
    re1=compare (s,p);
    m=strlen(s);
    n=strlen(p);
    for ( i = 0;i <= (m-1-i);i++)
    {
        inter_varia=*(s+i);
        *(s+i)=*(s+m-1-i);
        *(s+m-1-i)=inter_varia;
    }
    for ( i = 0;i <= (n-1-i);i++)
    {
        inter_varia=*(p+i);
        *(p+i)=*(p+n-1-i);
        *(p+n-1-i)=inter_varia;
    }
    re2 = recompare (s,p);

    if (re1 == 1 || re2 == 1) {
        printf("true");
    }
    else {
        printf("false");
    }
    
}
char compare(char *a,char *b)
{
    if (*a == *b || *b == '.') {
        b++;
        a++;
    }
    else {
        if (*(b+1) == '*')  b++;
        else    return 0;
    }

    if (*b != '\0' && *a != '\0') {
        while(*a!='\0')
        {
            if (*a == *b || *b == '.') {
                b++;
                a++;
            }    
            else if (*b == '*') {
                if (*a == *(a-1)) {          
                    a++;
                }
                else {
                    if (*(b-1) == '.')  a++;
                    else    b++;
                }
            }
            else {
                return 0;
            }
        }
    }
    else {

        return 0;
    }
    return 1;
}
char recompare(char *a,char *b)
{
    if (*a == *b || *b == '.') {
        b++;
        a++;
    }    
    else if(*b == '*') {
        if (*(b+1) == *a)   a++;
        else    return 0;
    }
    else{}

    if (*b != '\0' && *a!= '\0') {
        while(*a!='\0' ) {
            if (*a == *b || *b == '.') {
                b++;
                a++;
            }    
            else if (*b == '*') {
                if (*a == *(a+1))   a++;
                else    b++;
            }
            else {
                return 0;
            }
        }
        return recur(b);
    }
    else {
        return 0;
    }
}
char recur(char *k){
    if(*k == '*')
    {
        k++;
        while(*k != '\0' && *(k+1) != '\0') {
            if (*k == *(k+1))  k++;
            else   return recur(k);
        }
        return 1;
    }
    else return 0;
}
bool isMatch(char *s,char *p){}
