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
void funkcion(char text[],char ch){
    double number=0;

    number=atof(text);
    if(number==0){
        ;
    }
    else{
        number=atof(text);
        saveResult(number,ch);

    }
}
int main()
{

    char text[2]="1";
    double number;
    char ch;
    ch=text[0];

    funkcion(text,ch);

    text[0]='+';
    ch=text[0];

    funkcion(text,ch);

    text[0]='2';

    funkcion(text,ch);

    text[0]='=';
    ch=text[0];
    number=atof(text);

    char *result;
    result=saveResult(number,ch);
    printf("String result=%s",result);
    return 0;
}









