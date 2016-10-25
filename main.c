#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <ctype.h>
char* funkcion1(char ch);

int checkSymbol(char ch);

char * proverka(char text[],char *stringnumber);
void test1(){
    char *result;
    char *text;
    char *string;
    string = (char*) calloc(2,sizeof(char));
    text[0]='1';
    result=proverka(text,string);

    text[0]='+';
    result=proverka(text,string);

    text[0]='2';
    result=proverka(text,string);
    text[0]='=';
    result=proverka(text,string);
    char p[]="3";
    if (strcmp(result,p)==0){
        printf ("ok");
    }
    else {
        printf("fail");
    }
}
char *funkcion(char ch[],char *string);

char*saveResult(double number,char ch)
{  static int i=0;
    static double staticResult=0;
    switch(ch){
    case '+':
        staticResult+=number;

        break;
    case '-':
        staticResult=staticResult-number;
        break;
    case '*':
        staticResult =staticResult*number;
        break;
    case '/':
        staticResult =staticResult/number;
        break;
    case '0':
        staticResult =staticResult;
        break;
    case '=':
        printf("\nSTATIC RESULT=%f\n", staticResult);
        break;
    default:
        staticResult=staticResult+number;
        break;
    }
    printf("\n%d stat rezult=%f\n",i,staticResult);
    int decpnt, sign;
    char *out;
    out = ecvt(staticResult, 6, &decpnt, &sign);
    i++;
    return out;
}
static double tmpDouble=0;
static char tmpchar='0';
char *stringnumber;
int main()

{  // test1();
    char *textoutput1;

    stringnumber = (char*) calloc(2,sizeof(char));

    char *text;
    text = (char*) calloc(1,sizeof(char));

    text[0]='1';
    textoutput1=proverka(text,stringnumber);

    text[0]='+';
    textoutput1=proverka(text,stringnumber);

    text[0]='2';
    textoutput1=proverka(text,stringnumber);
    text[0]='=';
    textoutput1=proverka(text,stringnumber);

    return 0;
}
char * proverka(char text[],char *stringnumber){
    double number=0;
    char ch;
    ch=text[0];
    char flag=0;
    char *textoutput1;

    if ((isdigit(ch)!=0)){
        textoutput1=funkcion(text,stringnumber);
        number=atof(textoutput1);
        tmpDouble=number;
        if(tmpchar=='0'){
            textoutput1=saveResult(number,ch);
        }
        else{
            ch=tmpchar;
            textoutput1=saveResult(number,ch);
        }
    }
    if (checkSymbol(ch)==0){
        free(stringnumber);
        stringnumber = (char*) calloc(2,sizeof(char));
        tmpchar=ch;

    }
    if (checkSymbol(ch)==1){
        textoutput1=funkcion1(ch);
        ch=textoutput1[0];
        free(stringnumber);
        stringnumber = (char*) calloc(2,sizeof(char));
        number=tmpDouble;
        textoutput1=saveResult(number,ch);
    }
    return textoutput1;
}

char *funkcion(char ch[],char *string){
    string = (char*) realloc(string,1*sizeof(char));
    strcat(string,ch);
    return string;
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
    else return 2;
}








