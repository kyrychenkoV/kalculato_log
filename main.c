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
static double tmpDouble2=0;
static char tmpchar='0';
static double staticResult=0;
char *stringnumber;
static char string1[20];
char* funkcion2(char *ch);
static char *result;
int main()

{   char *inputButton;
    inputButton = (char*) calloc(2,sizeof(char));
    char *string;
    string = (char*) calloc(2,sizeof(char));

    //    inputButton[0]='1';
    //    check(string,inputButton,"1");
    //    inputButton[0]='+';
    //    check(string,inputButton,"1");
    //    inputButton[0]='=';
    //    check(string,inputButton,"1");


    //    inputButton[0]='1';
    //    check(string,inputButton,"1");
    //    inputButton[0]='+';
    //    check(string,inputButton,"1");
    //    inputButton[0]='2';
    //    check(string,inputButton,"2");
    //    inputButton[0]='=';
    //    check(string,inputButton,"3");


    //    inputButton[0]='1';
    //    check(string,inputButton,"1");
    //    inputButton[0]='+';
    //    check(string,inputButton,"1");
    //    inputButton[0]='2';
    //    check(string,inputButton,"2");
    //    inputButton[0]='+';
    //    check(string,inputButton,"3");
    //    inputButton[0]='1';
    //    check(string,inputButton,"1");
    //    inputButton[0]='-';
    //    check(string,inputButton,"4");
    //    inputButton[0]='2';
    //    check(string,inputButton,"2");
    //    inputButton[0]='=';
    //    check(string,inputButton,"2");

    //    inputButton[0]='3';
    //    check(string,inputButton,"3");
    //    inputButton[0]='*';
    //    check(string,inputButton,"3");
    //    inputButton[0]='3';
    //    check(string,inputButton,"3");
    //    inputButton[0]='-';
    //    check(string,inputButton,"9");
    //    inputButton[0]='2';
    //    check(string,inputButton,"2");
    //    inputButton[0]='+';
    //    check(string,inputButton,"7");
    //    inputButton[0]='1';
    //    check(string,inputButton,"1");
    //    inputButton[0]='*';
    //    check(string,inputButton,"8");
    //    inputButton[0]='1';
    //    check(string,inputButton,"1");
    //    inputButton[0]='-';
    //    check(string,inputButton,"8");
    //    inputButton[0]='6';
    //    check(string,inputButton,"6");
    //    inputButton[0]='*';
    //    check(string,inputButton,"2");
    //    inputButton[0]='3';
    //    check(string,inputButton,"3");
    //    inputButton[0]='=';
    //    check(string,inputButton,"6");

    //    inputButton[0]='2';
    //    check(string,inputButton,"2");
    //    inputButton[0]='*';
    //    check(string,inputButton,"2");
    //    inputButton[0]='1';
    //    check(string,inputButton,"1");
    //    inputButton[0]='*';
    //    check(string,inputButton,"2");
    //    inputButton[0]='3';
    //    check(string,inputButton,"3");
    //    inputButton[0]='-';
    //    check(string,inputButton,"6");
    //    inputButton[0]='4';
    //    check(string,inputButton,"4");
    //    inputButton[0]='+';
    //    check(string,inputButton,"2");
    //    inputButton[0]='1';
    //    check(string,inputButton,"1");
    //    inputButton[0]='*';
    //    check(string,inputButton,"3");
    //    inputButton[0]='2';
    //    check(string,inputButton,"2");
    //    inputButton[0]='=';
    //    check(string,inputButton,"6");

    //    inputButton[0]='1';
    //    check(string,inputButton,"1");
    //    inputButton[0]='*';
    //    check(string,inputButton,"1");
    //    inputButton[0]='2';
    //    check(string,inputButton,"2");
    //    inputButton[0]='*';
    //    check(string,inputButton,"2");
    //    inputButton[0]='3';
    //    check(string,inputButton,"3");
    //    inputButton[0]='-';
    //    check(string,inputButton,"6");
    //    inputButton[0]='2';
    //    check(string,inputButton,"2");
    //    inputButton[0]='=';
    //    check(string,inputButton,"4");

    //    inputButton[0]='1';
    //    check(string,inputButton,"1");
    //    inputButton[0]='*';
    //    check(string,inputButton,"1");
    //    inputButton[0]='2';
    //    check(string,inputButton,"2");
    //    inputButton[0]='*';
    //    check(string,inputButton,"2");
    //    inputButton[0]='3';
    //    check(string,inputButton,"3");
    //    inputButton[0]='-';
    //    check(string,inputButton,"6");
    //    inputButton[0]='2';
    //    check(string,inputButton,"2");
    //    inputButton[0]='-';
    //    check(string,inputButton,"4");
    //    inputButton[0]='1';
    //    check(string,inputButton,"1");
    //    inputButton[0]='*';
    //    check(string,inputButton,"3");
    //    inputButton[0]='3';
    //    check(string,inputButton,"3");
    //    inputButton[0]='-';
    //    check(string,inputButton,"9");
    //    inputButton[0]='1';
    //    check(string,inputButton,"1");
    //    inputButton[0]='/';
    //    check(string,inputButton,"8");
    //    inputButton[0]='2';
    //    check(string,inputButton,"2");
    //    inputButton[0]='/';
    //    check(string,inputButton,"4");
    //    inputButton[0]='1';
    //    check(string,inputButton,"1");
    //    inputButton[0]='/';
    //    check(string,inputButton,"4");
    //    inputButton[0]='2';
    //    check(string,inputButton,"2");
    //    inputButton[0]='*';
    //    check(string,inputButton,"2");
    //    inputButton[0]='4';
    //    check(string,inputButton,"4");
    //    inputButton[0]='/';
    //    check(string,inputButton,"8");
    //    inputButton[0]='2';
    //    check(string,inputButton,"2");
    //    inputButton[0]='=';
    //    check(string,inputButton,"4");

    //    inputButton[0]='5';
    //    check(string,inputButton,"5");
    //    inputButton[0]='/';
    //    check(string,inputButton,"5");
    //    inputButton[0]='3';
    //    check(string,inputButton,"3");
    //    inputButton[0]='=';
    //    check(string,inputButton,"1.6666666666666667");


    //    inputButton[0]='-';
    //    check(string,inputButton,"0");
    //    inputButton[0]='1';
    //    check(string,inputButton,"-1");
    //    inputButton[0]='+';
    //    check(string,inputButton,"-1");
    //    inputButton[0]='3';
    //    check(string,inputButton,"3");
    //    inputButton[0]='=';
    //    check(string,inputButton,"2");

    //    inputButton[0]='-';
    //    check(string,inputButton,"0");
    //    inputButton[0]='2';
    //    check(string,inputButton,"-2");
    //    inputButton[0]='*';
    //    check(string,inputButton,"-2");
    //    inputButton[0]='3';
    //    check(string,inputButton,"3");
    //    inputButton[0]='=';
    //    check(string,inputButton,"-6");

    //    inputButton[0]='-';
    //    check(string,inputButton,"0");
    //    inputButton[0]='2';
    //    check(string,inputButton,"-2");
    //    inputButton[0]='*';
    //    check(string,inputButton,"-2");
    //    inputButton[0]='3';
    //    check(string,inputButton,"3");
    //    inputButton[0]='=';
    //    check(string,inputButton,"-6");


    //    double a;
    //    a=1.6666666666666667;
    //    double b;
    //    b=0.0000000000000005;
    //    double c;
    //    c=a+b;
    //    char test[20];
    //    printf("\n%0.16f=",c);//1.6666666666666672 ok
    //    sprintf(test,"%0.16f",c);
    //    printf("%s ok\n",test);//1.6666666666666672 ok

    //    ////        inputButton[0]='6';
    //    ////        check(string,inputButton,"6");
    //    ////        inputButton[0]='/';
    //    ////        check(string,inputButton,"6");
    //    ////        inputButton[0]='0';
    //    ////        check(string,inputButton,"0");//fail
    //    ////        inputButton[0]='=';
    //    ////        check(string,inputButton,"Divide By Zero");//fail

    inputButton[0]='3';
    check(string,inputButton,"3");
    inputButton[0]='3';
    check(string,inputButton,"33");
    inputButton[0]='1';
    check(string,inputButton,"331");
    inputButton[0]='5';
    check(string,inputButton,"3315");
    inputButton[0]='+';
    check(string,inputButton,"3315");
    inputButton[0]='2';
    check(string,inputButton,"2");
    inputButton[0]='=';
    check(string,inputButton,"3317");

    inputButton[0]='3';
    check(string,inputButton,"3");
    inputButton[0]='3';
    check(string,inputButton,"33");
    inputButton[0]='1';
    check(string,inputButton,"331");
    inputButton[0]='5';
    check(string,inputButton,"3315");
    inputButton[0]='*';
    check(string,inputButton,"3315");
    inputButton[0]='2';
    check(string,inputButton,"2");
    inputButton[0]='=';
    check(string,inputButton,"6630");


    inputButton[0]='3';
    check(string,inputButton,"3");
    inputButton[0]='3';
    check(string,inputButton,"33");
    inputButton[0]='+';
    check(string,inputButton,"33");
    inputButton[0]='2';
    check(string,inputButton,"2");
    inputButton[0]='2';
    check(string,inputButton,"22");
    inputButton[0]='=';
    check(string,inputButton,"55");

    inputButton[0]='3';
    check(string,inputButton,"3");
    inputButton[0]='3';
    check(string,inputButton,"33");
    inputButton[0]='-';
    check(string,inputButton,"33");
    inputButton[0]='2';
    check(string,inputButton,"2");
    inputButton[0]='2';
    check(string,inputButton,"22");
    inputButton[0]='=';
    check(string,inputButton,"11");

    inputButton[0]='3';
    check(string,inputButton,"3");
    inputButton[0]='3';
    check(string,inputButton,"33");
    inputButton[0]='*';
    check(string,inputButton,"33");
    inputButton[0]='2';
    check(string,inputButton,"2");
    inputButton[0]='=';
    check(string,inputButton,"66");

    inputButton[0]='3';
    check(string,inputButton,"3");
    inputButton[0]='3';
    check(string,inputButton,"33");
    inputButton[0]='/';
    check(string,inputButton,"33");
    inputButton[0]='2';
    check(string,inputButton,"2");
    inputButton[0]='=';
    check(string,inputButton,"16.5");

    inputButton[0]='3';
    check(string,inputButton,"3");
    inputButton[0]='2';
    check(string,inputButton,"32");
    inputButton[0]='/';
    check(string,inputButton,"32");
    inputButton[0]='2';
    check(string,inputButton,"2");
    inputButton[0]='+';
    check(string,inputButton,"16");
    inputButton[0]='1';
    check(string,inputButton,"1");
    inputButton[0]='2';
    check(string,inputButton,"12");
    inputButton[0]='=';
    check(string,inputButton,"28");

    inputButton[0]='8';
    check(string,inputButton,"8");
    inputButton[0]='0';
    check(string,inputButton,"80");
    inputButton[0]='/';
    check(string,inputButton,"80");
    inputButton[0]='2';
    check(string,inputButton,"2");
    inputButton[0]='0';
    check(string,inputButton,"20");
    inputButton[0]='=';
    check(string,inputButton,"4");

//    inputButton[0]='7';
//    check(string,inputButton,"7");
//    inputButton[0]='8';
//    check(string,inputButton,"78");
//    inputButton[0]='0';
//    check(string,inputButton,"780");
//    inputButton[0]='/';
//    check(string,inputButton,"780");
//    inputButton[0]='1';
//    check(string,inputButton,"1");
//    inputButton[0]='0';
//    check(string,inputButton,"10");
//    inputButton[0]='=';
//    check(string,inputButton,"78");



    return 0;
}
char* funkcion2(char *ch){
    strcat(string1,ch);
    return string1;

}
char * check(char *string,char text[],char checkResult[]){
    char ch=0;
    ch=text[0];
    if((isdigit(ch)!=0)||(ch=='.')){
        result=funkcion2(text);
        result=proverka(result,string);
        printf("input %s checkResult %s output=%s ",text,checkResult,result);
        if (strcmp(result,checkResult)==0){
            printf("ok\n");
        }
        else {
            printf("fail\n");
        }
        return result;
    }
    else
    {   string1[0]=0;
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
    return result;
}

char *tmpDoubleToString(double tmpDouble){
    char *string;
    string= (char*) calloc(30,sizeof(char));
    if(doubleOrNotDouble(tmpDouble)==1)
    {
        sprintf(string,"%0.16f",tmpDouble);
    }
    else{
        sprintf(string,"%.0f",tmpDouble);
    }
    return string;
}
char* saveResult(double number,char ch)
{  static int i=0;
    switch(ch){
    case '+':
        staticResult+=number;
        printf("Plus\n");
        break;
    case '-':
        staticResult=staticResult-number;
        break;
    case '*':
        staticResult=staticResult*number;
        break;
    case '/':
        staticResult =staticResult/number;
        break;
    case '0':
        staticResult=atof(result);
        //printf("s=s\n");
        break;
    case '=':
        printf("\nSTATIC RESULT=%.01f\n", staticResult);
        break;
    default:
        staticResult=staticResult+number;
        break;
    }
    printf("\nsrez=%f\n",staticResult);

    char *out;
    out = (char*) calloc(32,sizeof(char));
    int n;
    n=2;
    if(doubleOrNotDouble(staticResult)==1)
    {
        sprintf(out,"%0.16f",staticResult);
    }
    else{
        sprintf(out,"%.0f",staticResult);
    }
    i++;
    return out;
}
int doubleOrNotDouble(double number){
    char *string;
    int sign=0;
    int decpnt;
    int i;
    string=(char*) calloc(28,sizeof(char));
    sprintf(string,"%f",tmpDouble);
    string = ecvt(number, 28, &decpnt, &sign);
    int len=0;
    len=strlen(string);
    for(i=decpnt;i<28;i++){
        if(*(string+(i+1))!='0'){
            return 1;
        }
        else{
            return 0;
        }
    }
    return 2;
}

char * proverka(char text[],char *stringnumber){
    double number=0;
    char ch=0;
    ch=text[0];
    static int flag;
    char *textoutput1;
    textoutput1= (char*) calloc(50,sizeof(char));
    if ((isdigit(ch)!=0)){
        textoutput1=text;
        number=atof(textoutput1);
        if(strlen(text)>1){
            if(tmpchar=='0'){
                number=atof(result);
                //printf("\nNUMBER>2=%f\n",number);
                tmpDouble=number;
                saveResult(number,'0');
            }
            else{
                ch=tmpchar;
                tmpDouble2=number=atof(result);
                printf("\nNUMBER>2=%f\n",number);
                if(ch=='/'&&number==0){
                    printf("\a");
                    textoutput1="Divide By Zero";
                    return textoutput1;
                    exit(0);//поки так вихід з програми
                }
                else{
                    saveResult(number,ch);
                    textoutput1=tmpDoubleToString(tmpDouble2);
                    ch='0';
                }
            }
        }
        else{

            if(tmpDouble==0&&tmpchar=='-'){
                number=-number;
                flag=1;
            }
            tmpDouble=number;
            if(tmpchar=='0'){
                textoutput1=saveResult(number,ch);
            }
            else{
                ch=tmpchar;
                tmpDouble2=number;
                if(ch=='/'&&number==0){
                    printf("\a");
                    textoutput1="Divide By Zero";
                    return textoutput1;
                    exit(0);//поки так вихід з програми
                }
                else{
                    saveResult(number,ch);
                    textoutput1=tmpDoubleToString(tmpDouble);
                    ch='0';
                }
            }
        }
    }
    if (checkSymbol(ch)==0){
        if(tmpchar=='0'){
            textoutput1=tmpDoubleToString(tmpDouble);
        }
        else{
            if(flag==1){
                textoutput1=saveResult(-1,'*');
                flag=0;
            }
            else{
                textoutput1=saveResult(number,ch);
            }
        }
        tmpchar=ch;
    }
    if (checkSymbol(ch)==1){
        textoutput1=funkcion1(ch);
        ch=textoutput1[0];
        number=tmpDouble;
        textoutput1=saveResult(number,ch);
        tmpDouble=0;
        tmpchar='0';
        staticResult=0;
    }
    if (checkSymbol(ch)==2){
        if(tmpchar=='0'){
            textoutput1=tmpDoubleToString(tmpDouble);
        }
        else{
            if(flag==1){
                textoutput1=saveResult(-1,'*');
                flag=0;
            }
            else {
                textoutput1=tmpDoubleToString(staticResult);
            }
        }
        tmpchar=ch;
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
    if (ch=='+'||ch=='-'){
        return 0;
    }
    if (ch=='='){
        return 1;
    }
    if (ch=='*'||ch=='/'){
        return 2;
    }
    else return 3;
}
