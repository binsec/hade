# Killing Symbolic Deobfuscation For Free
## Hardened Challenge

We evaluated two protections, FOR (k=5) and Virtualization, with three symbolic execution engines, [KLEE](http://klee.github.io), [Binsec](https://binsec.github.io/) and [Triton](https://triton.quarkslab.com/). 
KLEE uses LLVM IR whereas Binsec and Triton works with executable code. C source, LLVM IR and binary code are available for each of the ten programs used for evaluation.
