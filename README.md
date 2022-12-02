# Rainbow_Crash_assembly_programming_language
#### Actually, this is pseudo formal assembly programming language that you can directly use C compiler to compile out, it's implemented by macro in C, of course it is compilable (underneath is C).
#### After include RV64i.c, then you can write your C code in assembly style like below:

```c
dword
main    (void)                                          {
        stack   (str,0x10)
        li      (VAR content1,0x6d6966203a706c6d)
        li      (VAR content2,0x000a)                   // "mlp: fim\n"
        sd      (content1,0,str)
        sh      (content2,0x8,str)
        mv      (ARG a1,(sp)str)
        call    (printf,(char*)a1)
        li      (ARG value,0)
        ret     (value)                                 }
```
#### AWESOME, COOL right?
