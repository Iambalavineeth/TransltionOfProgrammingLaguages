#include <iostream>
#include <typeinfo>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include "ast.h"
#include "symbolTable.h"

const Literal* IdentNode::eval() const {
  const Literal* val = SymbolTable::getInstance().getValue(ident);
  return val;
}

AsgBinaryNode::AsgBinaryNode(Node* left, Node* right) :
  BinaryNode(left, right) {
  const Literal* res = right->eval();
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  SymbolTable::getInstance().setValue(n, res);
}

const Literal* AsgBinaryNode::eval() const {
  if (!left || !right) {
    throw "error";
  }
  const Literal* res = right->eval();

  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  SymbolTable::getInstance().setValue(n, res);
  return res;
}

//AsgPlus Constructor
AsgPlusBinaryNode::AsgPlusBinaryNode(Node* left, Node* right) :
  BinaryNode(left, right) {
  const Literal* res = (*left->eval() + *right->eval());
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  SymbolTable::getInstance().setValue(n, res);
}

//eval() - Function used in parser for "+="
const Literal* AsgPlusBinaryNode::eval() const{
  if (!left || !right) {
    throw "error";
  }
  const Literal* res = right->eval();
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  SymbolTable::getInstance().setValue(n, res);
  return res;
}

//AsgMinus Constructor
AsgMinusBinaryNode::AsgMinusBinaryNode(Node* left, Node* right) :
  BinaryNode(left, right) {
  const Literal* res = (*left->eval() - *right->eval());
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  SymbolTable::getInstance().setValue(n, res);
}

//eval() - Function used in parser for "-="
const Literal* AsgMinusBinaryNode::eval() const {
  if (!left || !right) {
    throw "error";
  }
  const Literal* res = right->eval();

  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  SymbolTable::getInstance().setValue(n, res);
  return res;
}

//AsgMult Constructor
AsgMultBinaryNode::AsgMultBinaryNode(Node* left, Node* right) :
  BinaryNode(left, right) {
  const Literal* res = ((*left->eval()) * (*right->eval()));
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  SymbolTable::getInstance().setValue(n, res);
}

//eval() - Function used in parser for "*="
const Literal* AsgMultBinaryNode::eval() const {
  if (!left || !right) {
    throw "error";
  }
  const Literal* res = right->eval();

  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  SymbolTable::getInstance().setValue(n, res);
  return res;
}

//AsgDiv Constructor
AsgDivBinaryNode::AsgDivBinaryNode(Node* left, Node* right) :
  BinaryNode(left, right) {
  const Literal* res = ((*left->eval()) / (*right->eval()));
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  SymbolTable::getInstance().setValue(n, res);
}

//eval() - Function used in parser for "/="
const Literal* AsgDivBinaryNode::eval() const {
  if (!left || !right) {
    throw "error";
  }
  const Literal* res = right->eval();

  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  SymbolTable::getInstance().setValue(n, res);
  return res;
}

//AsgMod Constructor
AsgModBinaryNode::AsgModBinaryNode(Node* left, Node* right) :
  BinaryNode(left, right) {
  const Literal* res = ((*left->eval()) % (*right->eval()));
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  SymbolTable::getInstance().setValue(n, res);
}

//eval() - Function used in parser for "%="
const Literal* AsgModBinaryNode::eval() const {
  if (!left || !right) {
    throw "error";
  }
  const Literal* res = right->eval();

  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  SymbolTable::getInstance().setValue(n, res);
  return res;
}

//AsgDdiv Constructor
AsgDdivBinaryNode::AsgDdivBinaryNode(Node* left, Node* right) :
  BinaryNode(left, right) {
  const Literal* res = ((*left->eval()).doubleslash(*right->eval()));
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  SymbolTable::getInstance().setValue(n, res);
}

//eval() - Function used in parser for "//="
const Literal* AsgDdivBinaryNode::eval() const {
  if (!left || !right) {
    throw "error";
  }
  const Literal* res = right->eval();

  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  SymbolTable::getInstance().setValue(n, res);
  return res;
}

//AsgDoubleStar Constructor
AsgDoubleStarBinaryNode::AsgDoubleStarBinaryNode(Node* left, Node* right) :
  BinaryNode(left, right) {
  const Literal* res = ((*left->eval()).power(*right->eval()));
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  SymbolTable::getInstance().setValue(n, res);
}

//eval() - Function used in parser for "**="
const Literal* AsgDoubleStarBinaryNode::eval() const {
  if (!left || !right) {
    throw "error";
  }
  const Literal* res = right->eval();

  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  SymbolTable::getInstance().setValue(n, res);
  return res;
}

const Literal* PlusUnaryNode::eval() const {
  if(!node){
    throw "error";
  }
  const Literal* n = node->eval();
  return n;
}

const Literal* MinusUnaryNode::eval() const{
  if(!node){
    throw "error";
  }
  const Literal* n = node->eval();
  return (*n).minus();
}

const Literal* AddBinaryNode::eval() const {
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  //return (*x+*y);
  return (*x).operator+(*y);
}

const Literal* SubBinaryNode::eval() const {
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)-(*y));
}

const Literal* MulBinaryNode::eval() const {
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)*(*y));
}

const Literal* DivBinaryNode::eval() const {
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)/(*y));
}

const Literal* ModBinaryNode::eval() const {
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)%(*y));
}

const Literal* DoubleDivBinaryNode::eval() const {
  if(!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x).doubleslash(*y));
}

const Literal* PowBinaryNode::eval() const {
  if(!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x).power(*y));
}
