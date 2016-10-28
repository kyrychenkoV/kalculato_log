
#ifndef testinput_h
#define testinput_h

void testinput(){
	char *inputButton;
		inputButton = (char*) calloc(2,sizeof(char));
		char *string;
		string = (char*) calloc(2,sizeof(char));
		inputButton[0]='1';
		check(string,inputButton,"1");
		inputButton[0]='+';
		check(string,inputButton,"1");
		inputButton[0]='=';
		check(string,inputButton,"1");


		inputButton[0]='1';
		check(string,inputButton,"1");
		inputButton[0]='+';
		check(string,inputButton,"1");
		inputButton[0]='2';
		check(string,inputButton,"2");
		inputButton[0]='=';
		check(string,inputButton,"3");


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
		inputButton[0]='-';
		check(string,inputButton,"4");
		inputButton[0]='2';
		check(string,inputButton,"2");
		inputButton[0]='=';
		check(string,inputButton,"2");

		inputButton[0]='3';
		check(string,inputButton,"3");
		inputButton[0]='*';
		check(string,inputButton,"3");
		inputButton[0]='3';
		check(string,inputButton,"3");
		inputButton[0]='-';
		check(string,inputButton,"9");
		inputButton[0]='2';
		check(string,inputButton,"2");
		inputButton[0]='+';
		check(string,inputButton,"7");
		inputButton[0]='1';
		check(string,inputButton,"1");
		inputButton[0]='*';
		check(string,inputButton,"8");
		inputButton[0]='1';
		check(string,inputButton,"1");
		inputButton[0]='-';
		check(string,inputButton,"8");
		inputButton[0]='6';
		check(string,inputButton,"6");
		inputButton[0]='*';
		check(string,inputButton,"2");
		inputButton[0]='3';
		check(string,inputButton,"3");
		inputButton[0]='=';
		check(string,inputButton,"6");

		inputButton[0]='2';
		check(string,inputButton,"2");
		inputButton[0]='*';
		check(string,inputButton,"2");
		inputButton[0]='1';
		check(string,inputButton,"1");
		inputButton[0]='*';
		check(string,inputButton,"2");
		inputButton[0]='3';
		check(string,inputButton,"3");
		inputButton[0]='-';
		check(string,inputButton,"6");
		inputButton[0]='4';
		check(string,inputButton,"4");
		inputButton[0]='+';
		check(string,inputButton,"2");
		inputButton[0]='1';
		check(string,inputButton,"1");
		inputButton[0]='*';
		check(string,inputButton,"3");
		inputButton[0]='2';
		check(string,inputButton,"2");
		inputButton[0]='=';
		check(string,inputButton,"6");

		inputButton[0]='1';
		check(string,inputButton,"1");
		inputButton[0]='*';
		check(string,inputButton,"1");
		inputButton[0]='2';
		check(string,inputButton,"2");
		inputButton[0]='*';
		check(string,inputButton,"2");
		inputButton[0]='3';
		check(string,inputButton,"3");
		inputButton[0]='-';
		check(string,inputButton,"6");
		inputButton[0]='2';
		check(string,inputButton,"2");
		inputButton[0]='=';
		check(string,inputButton,"4");

		inputButton[0]='1';
		check(string,inputButton,"1");
		inputButton[0]='*';
		check(string,inputButton,"1");
		inputButton[0]='2';
		check(string,inputButton,"2");
		inputButton[0]='*';
		check(string,inputButton,"2");
		inputButton[0]='3';
		check(string,inputButton,"3");
		inputButton[0]='-';
		check(string,inputButton,"6");
		inputButton[0]='2';
		check(string,inputButton,"2");
		inputButton[0]='-';
		check(string,inputButton,"4");
		inputButton[0]='1';
		check(string,inputButton,"1");
		inputButton[0]='*';
		check(string,inputButton,"3");
		inputButton[0]='3';
		check(string,inputButton,"3");
		inputButton[0]='-';
		check(string,inputButton,"9");
		inputButton[0]='1';
		check(string,inputButton,"1");
		inputButton[0]='/';
		check(string,inputButton,"8");
		inputButton[0]='2';
		check(string,inputButton,"2");
		inputButton[0]='/';
		check(string,inputButton,"4");
		inputButton[0]='1';
		check(string,inputButton,"1");
		inputButton[0]='/';
		check(string,inputButton,"4");
		inputButton[0]='2';
		check(string,inputButton,"2");
		inputButton[0]='*';
		check(string,inputButton,"2");
		inputButton[0]='4';
		check(string,inputButton,"4");
		inputButton[0]='/';
		check(string,inputButton,"8");
		inputButton[0]='2';
		check(string,inputButton,"2");
		inputButton[0]='=';
		check(string,inputButton,"4");

		inputButton[0]='5';
		check(string,inputButton,"5");
		inputButton[0]='/';
		check(string,inputButton,"5");
		inputButton[0]='3';
		check(string,inputButton,"3");
		inputButton[0]='=';
		check(string,inputButton,"1.6666666666666667");


		inputButton[0]='-';
		check(string,inputButton,"0");
		inputButton[0]='1';
		check(string,inputButton,"-1");
		inputButton[0]='+';
		check(string,inputButton,"-1");
		inputButton[0]='3';
		check(string,inputButton,"3");
		inputButton[0]='=';
		check(string,inputButton,"2");

		inputButton[0]='-';
		check(string,inputButton,"0");
		inputButton[0]='2';
		check(string,inputButton,"-2");
		inputButton[0]='*';
		check(string,inputButton,"-2");
		inputButton[0]='3';
		check(string,inputButton,"3");
		inputButton[0]='=';
		check(string,inputButton,"-6");

		inputButton[0]='-';
		check(string,inputButton,"0");
		inputButton[0]='2';
		check(string,inputButton,"-2");
		inputButton[0]='*';
		check(string,inputButton,"-2");
		inputButton[0]='3';
		check(string,inputButton,"3");
		inputButton[0]='=';
		check(string,inputButton,"-6");

}

#endif
