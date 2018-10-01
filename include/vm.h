#ifndef VM_H
#define VM_H

#include "chunk.h"
#include "value.h"

#define STACK_MAX 256

typedef struct
{
  Chunk *chunk;
  Byte *ip;
  Value stack[STACK_MAX];
  Value *stackTop;
  Obj *objects;
} VM;

typedef enum
{
  INTERPRET_OK,
  INTERPRET_COMPILE_ERROR,
  INTERPRET_RUNTIME_ERROR
} InterpretResult;

extern VM vm;

void VMInit();
void VMFree();
InterpretResult interpret(const char* source);
void push(Value value);
Value pop();

#endif // VM_H
