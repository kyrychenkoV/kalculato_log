#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <ctype.h>
#include <math.h>
char* funkcion1(char ch);

int checkSymbol(char ch);
char * check(char text[],char checkResult[]);

char * proverka(char text[]);
char *funkcion(char *ch);
char *saveResult(double number,char ch);
char *tmpDoubleToString(double tmpDouble);
int  findingDecimalPlaces(double number);
static double tmpDouble=0;
static double tmpSecond=0;
static char tmpchar='0';
static double staticResult=0;
static double MS=0;
char *stringnumber;
static char tmparray[33];
int decimalPlases=0;
int main()

{
//    check("1","1");
//    check("+","1");
//    check("=","1");

//    check("1","1");
//    check("+","1");
//    check("1","1");
//    check("+","2");
//    check("1","1");
//    check("=","3");

//    check("1","1");
//    check("+","1");
//    check("2","2");
//    check("=","3");

//    check("1","1");
//    check("+","1");
//    check("2","2");
//    check("+","3");
//    check("1","1");
//    check("-","4");
//    check("3","3");
//    check("=","1");

//    check("3","3");
//    check("*","3");
//    check("3","3");
//    check("-","9");
//    check("2","2");
//    check("+","7");
//    check("3","3");
//    check("*","10");
//    check("5","5");
//    check("=","50");

//    check("1","1");
//    check("+","1");
//    check("2","2");
//    check("+","3");
//    check("3","3");
//    check("+","6");
//    check("4","4");
//    check("+","10");
//    check("5","5");
//    check("=","15");

//    check("1","1");
//    check("+","1");
//    check("2","2");
//    check("+","3");
//    check("3","3");
//    check("+","6");
//    check("4","4");
//    check("+","10");
//    check("5","5");
//    check("=","15");

//    check("1","1");
//    check("-","1");
//    check("2","2");
//    check("-","-1");
//    check("3","3");
//    check("-","-4");
//    check("4","4");
//    check("-","-8");
//    check("5","5");
//    check("=","-13");

//    check("1","1");
//    check("*","1");
//    check("2","2");
//    check("*","2");
//    check("3","3");
//    check("*","6");
//    check("4","4");
//    check("*","24");
//    check("5","5");
//    check("=","120");



//    check("-","0");
//    check("2","-2");
//    check("+","-2");
//    check("7","7");
//    check("=","5");

//    check("-","0");
//    check("2","-2");
//    check("*","-2");
//    check("7","7");
//    check("=","-14");


//    check("-","0");
//    check("2","-2");
//    check("-","-2");
//    check("4","4");
//    check("=","-6");




//    check("2","2");
//    check("*","2");
//    check("9","9");
//    check("/","18");
//    check("4","4");
//    check("=","4.5");

//    check("1","1");
//    check("/","1");
//    check("4","4");
//    check("=","0.25");

//    check("2","2");
//    check("2","22");
//    check("+","22");
//    check("4","4");
//    check("=","26");

//    check("2","2");
//    check("2","22");
//    check("*","22");
//    check("4","4");
//    check("=","88");


//    check("9","9");
//    check("Q","3");
//    check("+","3");
//    check("2","2");
//    check("=","5");

//    check("9","9");
//    check("+","9");
//    check("9","9");
//    check("+","18");
//    check("7","7");
//    check("Q","5");
//    check("=","5");

//    check("9","9");
//    check("*","9");
//    check("2","2");
//    check("P","0.18");
//    check("+","0.18");
//    check("4","4");
//    check("=","4.18");//fail

//    check("9","9");
//    check("P","0");
//    check("+","0");
//    check("6","6");
//    check("=","6");
//    check("2","2");
//    check("+","2");
//    check("2","2");
//    check("+","4");
//    check("S","4");
//    check("=","8");//ms+=h.z.
//    printf("\n");
//    check("1","1");
//    check("+","1");
//    check("3","3");
//    check("+","4");
//    check("S","4");
//    check("+","4");
//    check("5","5");
//    check("+","9");
//    check("R","4");
//    check("=","13");
//    check("4","4");
//    check("/","4");
//    check("3","3");
//    check("/","1.3333333333333333");
//    check("3","3");
//    check("/","0.4444444444444444");
//    check("8","8");
//    check("/","0.0555555555555556");
//    check("8","8");
//    check("/","0.0069444444444444");
//    check("3","3");
//    check("=","0.0023148148148148");

//    check("-","0");
//    check("2","-2");
//    check("*","-2");
//    check("9","9");
//    check("/","-18");
//    check("4","4");
//    check("=","-4.5");

//    check("1","1");
//    check("/","1");
//    check("4","4");
//    check("=","0.25");
//    findingDecimalPlaces(4.5);
//    findingDecimalPlaces(-4.5);



//        check("2","2");
//        check(".","2.");
//        check("3","2.3");
//        check("+","2.3");
//        check("4","4");
//        check("=","6.3");

//         check("2","2");
//        check("+","2");
//        check("1","1");
//        check("=","3");
//        check("+","3");
//        check("4","4");
//        check("=","7");

    check("2","2");
    check("2","22");
    check("+","22");
    check("4","4");
    check("4","44");
    check("=","66");


    //    double i;
    //    i=2.2345555555555554;
    //    int a;
    //    char string[40];
    //    a=16;
    //    sprintf(string,"%.*lf",a,i);
    //    printf("%.*lf\n",a,i);

    //    printf("%s\n",string);
    //printf("tochka %d\n",findingDecimalPlaces(i));

    return 0;
}

int  findingDecimalPlaces(double number){
    char *string;
    int i=0;
    int count=0;
    int count1=0;
    int count2=0;
    string=(char*) calloc(33,sizeof(char));
    sprintf(string,"%.16f",number);
    int len=0;
    len=strlen(string);
    //printf("LEN=%d, string=%s",len,string);
    for(i=0;i<len;i++){
        count++;
        if(string[i]=='.'){
            break;
        }
    }
    for(i=len;i>count;i--){

        if (string[i]>='1'&&string[i]<='9'){
            count1=len-count-count2+1;
            break;
        }
        else{
            count1=0;
        }
        //printf("i=%d",i);
        count2++;
    }
    decimalPlases=count1;
    //printf("tochka=%d, kolznakov=%d\n",count,count2);
    free(string);
    return decimalPlases;
}
char *funkcion(char *ch){
       strcat(tmparray,ch);
        return tmparray;
}
char * proverka(char text[]){
    double number=0;
    double number1=0;
    char ch=0;
    ch=text[0];
    char *tmp;
    tmp=(char*) calloc(20,sizeof(char));
    tmp=text;
    text=(char*) calloc(20,sizeof(char));

    static int flag;
    char *textoutput1;
    textoutput1= (char*) calloc(33,sizeof(char));

    if(isdigit(ch)!=0||ch=='.'){
        tmp=funkcion(tmp);
                strcpy(text,tmp);
            }
        if ((isdigit(ch)!=0||ch=='.')){
        textoutput1=text;
        number=atof(textoutput1);
                if(tmpDouble==0&&tmpchar=='-'){
            number=-number;
            tmpDouble=number;
            flag=1;
        }

        if(tmpchar=='0'||flag==1){
            tmpDouble=staticResult=number;

            textoutput1=tmpDoubleToString(staticResult);
        }
        else{
            tmpSecond=number;
            if(ch=='/'&&number==0){
                printf("\a");
                textoutput1="Divide By Zero";
                return textoutput1;
                exit(0);
            }
            else{
                saveResult(tmpSecond,tmpchar);
                textoutput1=tmpDoubleToString(tmpSecond);
                ch='0';
            }
        }
    }
    if (checkSymbol(ch)==0){
        tmparray[0]=0;
        if(tmpchar=='0'){
            textoutput1=tmpDoubleToString(tmpDouble);
            tmpchar=ch;
        }
        else{
            tmpchar=ch;
            if(flag==1){
                textoutput1=saveResult(1,'*');
                flag=0;
            }
            else{
                textoutput1=saveResult(number,ch);
            }
        }
    }
    if (checkSymbol(ch)==2){
        tmparray[0]=0;
        if(tmpchar=='0'){
            tmpchar=ch;
            textoutput1=tmpDoubleToString(tmpDouble);
        }
        else{
            tmpchar=ch;
            if(flag==1){
                textoutput1=saveResult(1,'*');
                flag=0;
            }
            else {
                textoutput1=tmpDoubleToString(staticResult);
            }
        }
    }
    if (checkSymbol(ch)==1){
        tmparray[0]=0;
        textoutput1=saveResult(tmpSecond,ch);
        tmpDouble=staticResult;
        decimalPlases=0;
    }
    if (ch=='S'){
        if(tmpchar==0){
            MS=tmpDouble;
        }
        else{
            MS=staticResult;
        }
        textoutput1=saveResult(MS,ch);
        tmpDouble=staticResult;
    }
    if (ch=='R'){
                saveResult(MS,ch);
        textoutput1=tmpDoubleToString(MS);
    }
    if (ch=='C'){
        MS=0;

    }
    if (ch=='Q'){
        if(tmpchar=='0'){
            number1=tmpDouble;
        }
        else{
            number1=staticResult;
        }
        textoutput1=saveResult(number1,ch);
        tmpSecond=staticResult;
    }
    if (ch=='P'){
        if(tmpchar=='0'){
            textoutput1=tmpDoubleToString(0);
            tmpDouble=staticResult=0;
        }
        else{
            textoutput1=saveResult(number,ch);
        }
    }
    if (ch=='C'){
        printf("sss\n");
            tmpDouble=0;
            tmpchar='0';
            staticResult=0;
            decimalPlases=0;
            tmpSecond=0;
            text[0]=0;
        }
    if (ch=='.'){
        textoutput1=tmparray;
        }
     printf("tmpDouble=%.0f tmpchar=%c, tmpSecond=%.0f, static rezult=%.0f MS=%.0f\n",tmpDouble,tmpchar,tmpSecond,staticResult,MS);
    return textoutput1;
}
char *tmpDoubleToString(double tmpDouble){
    char *string;
    string= (char*) calloc(33,sizeof(char));
    int a=0;
    a=findingDecimalPlaces(tmpDouble);
    sprintf(string,"%.*f",a,tmpDouble);
    return string;
}
char* saveResult(double number,char ch)
{  static int i=0;
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
        printf("s=s\n");
    case 'S':
        MS=MS;
               break;
    case 'R':
        staticResult+=MS;

        break;
    case 'Q':
        staticResult=sqrt(staticResult);

        break;
    case 'P':
        staticResult=staticResult/100;

        break;
    case '=':
        break;
    default:
        break;
    }


    char *out;
    out = (char*) calloc(33,sizeof(char));
    int a=0;
    a=findingDecimalPlaces(staticResult);
    //printf("a=%d\n",a);
    sprintf(out,"%.*f",a,staticResult);
    i++;
    return out;
}
char * check(char text[],char checkResult[]){
    static char *result;
    result=proverka(text);
    printf("input %s checkResult %s output=%s ",text,checkResult,result);
    if (strcmp(result,checkResult)==0){
        printf ("ok\n");
    }
    else {
        printf("fail\n");
    }
    return result;
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
