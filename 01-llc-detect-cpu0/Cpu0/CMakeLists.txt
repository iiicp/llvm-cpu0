add_llvm_component_group(Cpu0)

set(sources Cpu0TargetMachine.cpp) 

add_llvm_target(Cpu0CodeGen
    ${sources}

    ADD_TO_COMPONENT 
    Cpu0
)

add_subdirectory(MCTargetDesc)
add_subdirectory(TargetInfo)