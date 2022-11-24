# Rainbow_Crash_assembly_programming_language
#### Actually, this is pseudo formal assembly programming language that you can directly use C compiler to compile out, it's implemented by macro in C, of course it is compilable (underneath is C).
#### After include RV64i.c, then you can write your C code in assembly style like below:

```c
int
main    (void)
{
        stack   (str,0x10)
        init    (content1,0x6d6966203a706c6d)
        init    (content2,0x000a)                        // "mlp: fim\n"
        sd      (content1,0,str)
        sh      (content2,0x8,str)
#define a0      ((char*)str)
        call    (printf)                                 a0 go
                                                         #undef a0
#define rv      (0)
        ret     (rv)
}
                                                         #undef rv
```
#### AWESOME, COOL right?
