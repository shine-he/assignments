# 正则表达式匹配
给一个字符串s和字符规律p，实现一个支持'.'和'*'的正则表达式匹配。
## 安装
---
## 使用
---
按照要求输入字符串s与字符规律p
## 代码解释
---
函数为compare (char *a,char *b){}<br>

    char compare(char *a,char *b)
    {
    if (*a == *b || *b == '.')    
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
            if (*a == *b || *b == '.')      
            {
                b++;
                a++;
            }    
            else if (*b == '*')             
            {
                if (*a == *(a-1))          
                a++;

                else        
                {
                    if (*(b-1) == '.')
                    a++;
                    else
                    b++;
                }
            }
            else                     
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
 
