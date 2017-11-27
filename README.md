# Python Interpreter:

## Repo Details:
This is the source code repository for Python Interpreter using **Flex** *(lexical analyzer)* and **Bison** *(parser)*, Using the power of Regular and Context-free grammars to check the language syntax and added semanticactions to the parser. The Scanner(FLEX) and the Parser(BISON) are written in **C++** and we will be using the power of *Object Oriented Programming* for adding the semantic actions to the Parser.

## Directory Details(Assignments):
Each repository consists of directories which are assignments of my Computer Science course at Clemson University - **Translation of Programming Languagues course(CPSE - 8270)**.

## Assignment Contents:
Each Assignment consists of a main.cpp file which calls Scanner(scan.l) and Parser(parse.y) to identify and add semantic actions to the Python Code. There is a Makefile, which is used for the compiling. The Cases directory has Python files which has test cases. There is a python file which is used for running all excecutable files and compares the results of our Python interpreter against Statndard Python(Python 2.7).

## Running Testcases:
To run the test cases first compile the code with the following command: 
```
python test.py
```
