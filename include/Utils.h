#ifndef UTILS_H
#define UTILS_H

#include "llvm/IR/Instructions.h"

using namespace llvm;

std::string toString(Value *I);

std::vector<Instruction *> getPredecessors(Instruction *I);

bool isDef(Instruction *I);

#endif // UTILS_H
