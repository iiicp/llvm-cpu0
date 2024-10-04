#include "TargetInfo/Cpu0TargetInfo.h" 
#include "llvm/MC/TargetRegistry.h" 

using namespace llvm;

namespace llvm {
    Target &getCpu0Target() {
        static Target Cpu0Target;
        return Cpu0Target;
    }

    Target &getCpu0elTarget() {
        static Target Cpu0elTarget;
        return Cpu0elTarget;
    }
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeCpu0TargetInfo() {
    RegisterTarget<Triple::cpu0> X(getCpu0Target(), "cpu0", "32-bit RISC", "cpu0");
    RegisterTarget<Triple::cpu0el> Y(getCpu0elTarget(), "cpu0el", "32-bit little endian RISC", "cpu0el");
}