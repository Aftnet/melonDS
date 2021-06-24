#ifndef ARMJIT_COMPILER_H
#define ARMJIT_COMPILER_H

#if defined(__x86_64__) || defined(_M_X64)
#include "ARMJIT_x64/ARMJIT_Compiler.h"
#elif defined(__aarch64__) || defined(_M_ARM64)
#include "ARMJIT_A64/ARMJIT_Compiler.h"
#else
#error "The current target platform doesn't have a JIT backend"
#endif

namespace ARMJIT
{
extern Compiler* JITCompiler;
}

#endif
