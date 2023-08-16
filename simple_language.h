#define a0 rax
#define a1 rdi
#define a2 rsi
#define a3 rdx
#define a4 rcx
#define shamt_full rcx
#define a5 r8
#define a6 r9
#define a7 r10
#define ra r11
#define s1 r12
#define s2 r13
#define s3 r14
#define s4 r15
#define s5 rbx
#define s0 rbp
#define fp rbp
#define sp rsp
#define a0_byte al
#define a1_byte dil
#define a2_byte sil
#define a3_byte dl
#define a4_byte cl
#define shamt cl
#define a5_byte r8b
#define a6_byte r9b
#define a7_byte r10b
#define ra_byte r11b
#define s1_byte r12b
#define s2_byte r13b
#define s3_byte r14b
#define s4_byte r15b
#define s5_byte bl
#define s0_byte bpl
#define fp_byte bpl
#define sp_byte spl
#define a0_half ax
#define a1_half di
#define a2_half si
#define a3_half dx
#define a4_half cx
#define a5_half r8w
#define a6_half r9w
#define a7_half r10w
#define ra_half r11w
#define s1_half r12w
#define s2_half r13w
#define s3_half r14w
#define s4_half r15w
#define s5_half bx
#define s0_half bp
#define fp_half bp
#define sp_half sp
#define a0_word eax
#define a1_word edi
#define a2_word esi
#define a3_word edx
#define a4_word ecx
#define a5_word r8d
#define a6_word r9d
#define a7_word r10d
#define ra_word r11d
#define s1_word r12d
#define s2_word r13d
#define s3_word r14d
#define s4_word r15d
#define s5_word ebx
#define s0_word ebp
#define fp_word ebp
#define sp_word esp
#define ahead add
#define back sub
#define compare cmp
#define negate neg
#define invert not
#define cast mov
#define write mov
#define read mov
#define left shl
#define right shr
#define arith sar
#define jump jmp
#define place lea
#define carry adc
#define borrow sbb
#define return jmp r11
#define system syscall
#define exit sysret
#define branch(o) j ## o
#define recast(o) cmov ## o
#define link(o) lea r11, 5[rip]; jmp o;
#define swap(r0,r1) xor r0, r1; xor r1, r0; xor r0, r1
#define clean(o) xor o, o
#define absolute(o) OFFSET FLAT:o
#define relative(o) o[rip]
#define base_a0(o) o[rax]
#define base_a1(o) o[rdi]
#define base_a2(o) o[rsi]
#define base_a3(o) o[rdx]
#define base_a4(o) o[rcx]
#define base_a5(o) o[r8]
#define base_a6(o) o[r9]
#define base_a7(o) o[r10]
#define base_ra(o) o[r11]
#define base_s1(o) o[r12]
#define base_s2(o) o[r13]
#define base_s3(o) o[r14]
#define base_s4(o) o[r15]
#define base_s5(o) o[rbx]
#define base_s0(o) o[rbp]
#define base_fp(o) o[rbp]
#define base_sp(o) o[rsp]
#define begin _start
#define execute text
#define block bss
#define half value
#define word long
#define doub quad
#define ON 1
#define OFF 0
#define ENABLE 1
#define DISABLE 0
#define VALID 1
#define INVALID 0
#define TRUE 1
#define FALSE 0
#define NIL 0
#define NULL 0
#define NONE 0
#define ZERO 0
.intel_syntax noprefix
/*
    ahead   a0, a1
    ahead   a0, 1
    carry   a0, a0
    back    a0, a1
    compare a0, a1
    compare a0, 1
    borrow  a0, a1
    negate  a0
    cast    a0, a1
    cast    a0, absolute(lable)
    place   a0, relative(lable)
    recast  (z) a0, a1
    recast  (nz) a0, a1
    recast  (l) a0, a1
    recast  (ge) a0, a1
    recast  (b) a0, a1
    recast  (ae) a0, a1
    left    a0, 1
    right   a0, 1
    arith   a0, 0x20
    and     a0, a1
    and     a0, 0xFF
    or      a0, a1
    or      a0, 1
    xor     a0, a1
    xor     a0, 1
    invert  a0
    read    a0, relative(lable+8)
    read    a0, base_a0(lable-8)
    write   relative(lable), a0
    write   base_sp(lable-0x10), a0
    jump    lable
    jump    ra
    link    (lable)
    branch  (z) lable
    branch  (nz) lable
    branch  (l) lable
    branch  (ge) lable
    branch  (b) lable
    branch  (ae) lable
    system
    exit
*/
