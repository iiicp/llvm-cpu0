add_llvm_component_library(LLVMCpu0Info
    Cpu0TargetInfo.cpp 

    LINK_COMPONENTS 
    MC 
    Support

    ADD_TO_COMPONENT
    Cpu0
)