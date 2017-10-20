%{
// Flex handles ambiguity by matching longest string;
// in case of tie, it matches the first one.

#include <iostream>
#include <stack>
#include <map>
extern std::map<char, std::string> letters;
extern std::stack<char> st;
void printBackWards(std::stack<char>&);
%}

letter      [a-zA-Z0-9]
blank       [ ]

%%
{blank}      { st.push(yytext[0]);  }
{letter}     { st.push(yytext[0]);  }
.	     			 { st.push(yytext[0]);  }
\n           {
	       				printBackWards(st);
	       				std::cout << std::endl;
	     			 }
%%
int yywrap() { return 1; }

void printBackWards(std::stack<char>& stk){
  while(!stk.empty()){
    std::cout << letters[stk.top()];
    stk.pop();
  }
}
