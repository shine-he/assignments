#include<stdio.h>
#include<string.h>
#include<stdbool.h>
char compare (char *a,char *b);
int main() {
    char inter_varia;
    int m,n,i,re1,re2;
    char s[20],p[20];
    printf("please input two strings s and p\n");
    printf("s:");
    gets(s);
    printf("p:");
    gets(p);
    re1=compare (s,p);
    printf("%d",re1);
}
char compare(char *a,char *b)
{
    int m,n;
    if (*b == '\0') {
        return 0;
    }
    else ;
    if(*a == '\0') {
        while (*b != '\0' && *(b+1) != '\0') {
            if(*(b+1) == '*') b = b+2;
            else return 0;
        }
        return 1;  
    }
    else ;

    if (*a == *b && *b != '.') {    
        if (*(b+1) == '*') {
            m=0;
            n=0;
            b++;
            if (*a == *(b+1))
            {
                b++;
                while(*a == *(a+1)) {
                    m++;
                    a++;
                }
                while(*(b+1) == *b) {
                    n++;
                    b++;
                }
                if(m>=n) {
                    a++;
                    b++;
                }
                else {
                    return 0;
                }
                if (*a == '\0' && *b == '\0') {
                    return 1;
                }
                else ;
            }
            else {
                a++;
            }          
        }
        else {
            a++;
            b++;
        }
    }
    else if (*b == '.') {
        if (*(b+1) == '*') {
            a++;
        }
        else {
            a++;
            b++;
        }
    }
    else if(*b == '*'){
        return 0;          
    }
    else {
        if (*(b+1) == '*')  b = b+2;
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
                if (*a == *(a-1) && *a == *(b+1)) {
                    m=0;
                    n=0;
                    b++;          
                    while(*a == *(a+1)) {
                        m++;
                        a++;
                    }
                    while(*(b+1) == *b) {
                        n++;
                        b++;
                    }
                    if(m>=n) {
                        a++;
                        b++;
                    }
                    else {
                        return 0;
                    }
                }
                else if (*a == *(a-1) && *a != *(b+1)) {
                    while(*(a+1) == *a) {
                        a++;
                    }
                    a++;
                    b++;
                }
                else if (*a != *(a-1) && *a == *(b+1)) {
                    if (*(b-1) == '.') {
                        m=0;
                        n=0;
                        b++;          
                        while(*a == *(a+1)) {
                            m++;
                            a++;
                        }
                        while(*(b+1) == *b) {
                            n++;
                            b++;
                        }
                        if(m>=n) {
                            a++;
                            b++;
                        }
                        else {
                            return 0;
                        }
                    }
                    else {
                        b++;
                    }
                }
                else {
                    if (*(b-1) == '.') {
                        a++;
                    }
                    else {
                        return 0;
                    }   
                }  
                if (*a == '\0'&& *b != '\0') {
                    b++;
                }
                else ; 
            }
            else {
                if (*(b+1) == '*')  b = b+2;
                else    return 0;
            }
            if (*b == '\0' && *a != '\0') return 0;
            else ;
            if (*b != '\0' && *a == '\0') {
                if (*b =='*') b++;
                else ;
                if (*b != '\0')
                {
                    while (*b != '\0' && *(b+1) != '\0') {
                    if(*(b+1) == '*') b = b+2;
                    else return 0;
                    }
                    return 0;  /* code */
                }
                else ;
                
            }
            else;
        }
    }
    else {
        return 0;
    }
    return 1;
}