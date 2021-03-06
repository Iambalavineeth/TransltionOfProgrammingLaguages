#include <iostream>
#include <stack>
#include <map>
int yylex();
std::stack<char> st;
std::map<char, std::string> letters;
//Filling the map
void fillLetters(std::map<char, std::string>& letters){
  letters['a'] = u8"\u0250";
  letters['b'] = u8"\u0071";
  letters['c'] = u8"\u0254";
  letters['d'] = u8"\u0070";
  letters['e'] = u8"\u01DD";
  letters['f'] = u8"\u025F";
  letters['g'] = u8"\u0253";
  letters['h'] = u8"\u0265";
  letters['i'] = u8"\u1D09";
  letters['j'] = u8"\u027E";
  letters['k'] = u8"\u029E";
  letters['l'] = u8"\u006C";
  letters['m'] = u8"\u026F";
  letters['n'] = u8"\u0075";
  letters['o'] = u8"\u006F";
  letters['p'] = u8"\u0064";
  letters['q'] = u8"\u0062";
  letters['r'] = u8"\u0279";
  letters['s'] = u8"\u0073";
  letters['t'] = u8"\u0287";
  letters['u'] = u8"\u006E";
  letters['v'] = u8"\u028C";
  letters['w'] = u8"\u028D";
  letters['x'] = u8"\u0078";
  letters['y'] = u8"\u028E";
  letters['z'] = u8"\u007A";
  letters['A'] = u8"\u2200";
  letters['B'] = u8"\u0412";
  letters['C'] = u8"\u0186";
  letters['D'] = u8"\u15E1";
  letters['E'] = u8"\u018E";
  letters['F'] = u8"\u2132";
  letters['G'] = u8"\u2141";
  letters['H'] = u8"\u0048";
  letters['I'] = u8"\u0049";
  letters['J'] = u8"\u017F";
  letters['K'] = u8"\u22CA";
  letters['L'] = u8"\u2142";
  letters['M'] = u8"\u0057";
  letters['N'] = u8"\u004E";
  letters['O'] = u8"\u004F";
  letters['P'] = u8"\u0500";
  letters['Q'] = u8"\u038C";
  letters['R'] = u8"\u1D1A";
  letters['S'] = u8"\u0053";
  letters['T'] = u8"\u22A5";
  letters['U'] = u8"\u2229";
  letters['V'] = u8"\u039B";
  letters['W'] = u8"\u004D";
  letters['X'] = u8"\u0058";
  letters['Y'] = u8"\u2144";
  letters['Z'] = u8"\u005A";
  letters['1'] = u8"\u21C2";
  letters['2'] = u8"\u218A";
  letters['3'] = u8"\u218B";
  letters['4'] = u8"\u07C8";
  letters['5'] = u8"\u03DA";
  letters['6'] = u8"\u0039";
  letters['7'] = u8"\u3125";
  letters['8'] = u8"\u0038";
  letters['9'] = u8"\u0036";
  letters['0'] = u8"\u0030";
  letters[','] = "'";
  letters['.'] = u8"\u02D9";
  letters['?'] = u8"\u00BF";
  letters['!'] = u8"\u00A1";
  letters['"'] = u8"\u201E";
  letters['\''] = u8"\u002C";
  letters['`'] = u8"\u02D9";
  letters['('] = ")";
  letters[')'] = "(";
  letters['['] = "]";
  letters[']'] = "[";
  letters['{'] = "}";
  letters['}'] = "{";
  letters['<'] = ">";
  letters['>'] = "<";
  letters['&'] = u8"\u214B";
  letters['_'] = u8"\u203E";
  letters[';'] = u8"\u061B";
  letters[':'] = ":";
  letters['-'] = "-";
  //letters[','] = u8"\u0027";
  letters[' '] = " ";
}
int main() {
  fillLetters(letters);
  //Go through the lex
  yylex();
  std::cout << "Translation complete" << std::endl;
  letters.clear();
  return 0;
}
