#include <stdio.h>
#include <stdlib.h>
#include<string.h>
char* saveResult(double number,char ch)
{   static double staticResult=0;
    switch(ch){
    case '+':
        staticResult =staticResult+number;
        break;
    case '-':
        staticResult =staticResult-number;
        break;
    case '*':
        staticResult =staticResult*number;
        break;
    case '/':
        staticResult =staticResult/number;
        break;
    case '=':
        printf("STATIC RESULT=%lf\n", staticResult);
    default:
        staticResult =number+staticResult;
    }
    int decpnt, sign;
    char *out;
    out = ecvt(staticResult, 6, &decpnt, &sign);
    return out;
}
char* funkcion(char ch);
char* funkcion1(char ch);
int main()
{   char *textoutput1;
    char text='1';

    textoutput1=funkcion1(text);
    printf("Text output funkcion1=%s\n",textoutput1);// 1
    funkcion(text);

    text='+';
    textoutput1=funkcion1(text);
    printf("Text output funkcion1=%s\n",textoutput1);// +

    char *textoutput=funkcion(text);
    printf("Text output funkcion=%s\n",textoutput);//  1+
    return 0;
}
char *funkcion(char ch){
    static int i=0;
    static char string[10];
    string[i]=ch;
    i++;
    return string;
}
char* funkcion1(char ch){
    static char string[1];
    string[0]=ch;
    return string;
}








