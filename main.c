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
        printf("\nSTATIC RESULT=%lf\n", staticResult);
    default:
        staticResult =staticResult+number;
    }
    int decpnt, sign;
    char *out;
    out = ecvt(staticResult, 6, &decpnt, &sign);
    return out;
}
char* funkcion1(char ch);
int checkSymbol(char ch);
char * proverka(char text,char *textoutput1);
int main()
{   char *textoutput1;

    char text='1';
    textoutput1=proverka(text,textoutput1);

    text='+';
    textoutput1=proverka(text,textoutput1);

    text='2';
    textoutput1=proverka(text,textoutput1);

    text='=';
    textoutput1=proverka(text,textoutput1);
    return 0;
}
char* funkcion1(char ch){
    static char string[1];
    string[0]=ch;
    if (checkSymbol(string[0])==0){
        string[0]='\0';
        return string;
    }
    else {
        return string;
    }
}
int checkSymbol(char ch){
    if (ch=='+'||ch=='-'||ch=='*'||ch=='/'){
        return 0;
    }
    if (ch=='='){
        return 1;
    }
    else{
        return 2;
    }
}
char * proverka(char text,char *textoutput1){
    double number=0;
    char ch;
    if ((checkSymbol(text)==2)){
        textoutput1=funkcion1(text);
        number=atof(textoutput1);
        textoutput1=saveResult(number,text);

        printf("\nCifra number=%f,textoutput1=%s 2=%d",number,textoutput1,checkSymbol(text));
    }
    if (checkSymbol(text)==0){
        textoutput1=funkcion1(text);
        ch=textoutput1[0];
        textoutput1=saveResult(number,text);

        printf("\ntextoutput1=%s Znak 0=%d,",textoutput1,checkSymbol(text));

    }
    if (text=='='){
        textoutput1=funkcion1(text);
        ch=textoutput1[0];
        textoutput1=saveResult(number,text);

        printf("\nRovno 1= %d",checkSymbol(text));
    }
    return textoutput1;
}








