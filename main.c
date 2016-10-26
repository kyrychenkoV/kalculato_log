#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <ctype.h>
char* funkcion1(char ch);

int checkSymbol(char ch);
char * check(char *string,char text[],char checkResult[]);

char * proverka(char text[],char *stringnumber);
char *funkcion(char ch[],char *string);
char *saveResult(double number,char ch);
char *tmpDoubleToString(double tmpDouble);
static double tmpDouble=0;
static char tmpchar='0';
char *stringnumber;
int main()

{   char *inputButton;
    inputButton = (char*) calloc(2,sizeof(char));
    char *string;
    string = (char*) calloc(2,sizeof(char));


    //    Test 1 all ok
    //    inputButton[0]='1';
    //    check(string,inputButton,"1");
    //    inputButton[0]='+';
    //    check(string,inputButton,"1");
    //    inputButton[0]='=';
    //    check(string,inputButton,"1");

    //    Test 2 all ok
    //    inputButton[0]='1';
    //    check(string,inputButton,"1");
    //    inputButton[0]='+';
    //    check(string,inputButton,"1");
    //    inputButton[0]='2';
    //    check(string,inputButton,"2");
    //    inputButton[0]='=';
    //    check(string,inputButton,"3");

    //    Test 3 all ok
    inputButton[0]='1';
    check(string,inputButton,"1");
    inputButton[0]='+';
    check(string,inputButton,"1");
    inputButton[0]='2';
    check(string,inputButton,"2");
    inputButton[0]='+';
    check(string,inputButton,"3");
    inputButton[0]='1';
    check(string,inputButton,"1");
    inputButton[0]='=';
    check(string,inputButton,"4");
    return 0;
}
char *tmpDoubleToString(double tmpDouble){
    char *string;
    string= (char*) calloc(2,sizeof(char));
    sprintf(string,"%.0f",tmpDouble);
    return string;
}
char* saveResult(double number,char ch)
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
    // int decpnt, sign;
    char *out;
    out = (char*) calloc(32,sizeof(char));
    //int leng=0;
    //out = ecvt(staticResult, 6, &decpnt, &sign);
    sprintf(out,"%.0f",staticResult);
    i++;
    return out;
}

char * check(char *string,char text[],char checkResult[]){
    static char *result;
    result=proverka(text,string);
    printf("input %s checkResult %s output=%s ",text,checkResult,result);
    if (strcmp(result,checkResult)==0){
        printf ("ok\n");
    }
    else {
        printf("fail\n");
    }

    return result;
}
char * proverka(char text[],char *stringnumber){
    double number=0;
    char ch=0;
    ch=text[0];
    char *textoutput1;
    textoutput1= (char*) calloc(20,sizeof(char));

    if ((isdigit(ch)!=0)){
        textoutput1=text;// funkcion(text,stringnumber);
        number=atof(textoutput1);
        tmpDouble=number;
        if(tmpchar=='0'){
            textoutput1=saveResult(number,ch);
        }
        else{
            ch=tmpchar;
            saveResult(number,ch);
            textoutput1=tmpDoubleToString(tmpDouble);
            ch='0';
        }
    }
    if (checkSymbol(ch)==0){
        if(tmpchar=='0'){
            textoutput1=tmpDoubleToString(tmpDouble);
        }
        else{
            textoutput1=saveResult(number,ch);
        }
        tmpchar=ch;
    }
    if (checkSymbol(ch)==1){
        textoutput1=funkcion1(ch);
        ch=textoutput1[0];
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








