# Rainbow_Crash_assembly_programming_language
#### Actually, this is pseudo formal assembly programming language that you can directly use C compiler to compile out, it's implemented by macro in C, of course it is compilable (underneath is C).
#### After include RV64i.c, then you can write your C code in assembly style like below:

```c
DWORD
main    (void)
        stack   (str, 0x10)
        li      ($ content0, 0x6D6966203A706C6D)
        li      ($ content1, 0x000A)                  // "mlp: fim\n"
        sd      (content0, 0, str)
        sh      (content1, 0x8, str)
        mv      ($ a0, str)
        call    (printf, (char*)a0)
        li      (a0, 0)
        ret     (a0)
```
#### AWESOME, COOL right?
