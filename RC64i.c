#include<stdint.h>
// ALU_addition
#define add(rd,r0,r1) rd=r0+r1;
#define addi(rd,r0,i) rd=r0+(int16_t)i;
#define mv(rd,r0) rd=r0;
#define li(rd,i) rd=i;
#define la(rd,i) rd=(uint64_t)i;
// ALU_subtraction
#define sub(rd,r0,r1) rd=r0-r1;
#define neg(rd,r0) rd=-r0;
// ALU_multiplication
#define mul(rd,r0,r1) rd=r0*r1;
#define mulh(rd,r0,r1) rd=(__uint128_t)(int64_t)r0*(int64_t)r1>>0x40;
#define mulhu(rd,r0,r1) rd=(__uint128_t)r0*r1>>0x40;
#define mulhsu(rd,r0,r1) rd=(__uint128_t)(int64_t)r0*r1>>0x40;
// ALU_division
#define div(rd,r0,r1) rd=(int64_t)r0/(int64_t)r1;
#define divu(rd,r0,r1) rd=r0/r1;
#define rem(rd,r0,r1) rd=(int64_t)r0%(int64_t)r1;
#define remu(rd,r0,r1) rd=r0%r1;
// ALU_shift
#define sll(rd,r0,r1) rd=r0<<r1;
#define slli(rd,r0,i) rd=r0<<i;
#define srl(rd,r0,r1) rd=r0>>r1;
#define srli(rd,r0,i) rd=r0>>i;
#define sra(rd,r0,r1) rd=(int64_t)r0>>r1;
#define srai(rd,r0,i) rd=(int64_t)r0>>i;
// ALU_boolean
#define and(rd,r0,r1) rd=r0&r1;
#define andi(rd,r0,i) rd=r0&(int16_t)i;
#define or(rd,r0,r1) rd=r0|r1;
#define ori(rd,r0,i) rd=r0|(int16_t)i;
#define xor(rd,r0,r1) rd=r0^r1;
#define xori(rd,r0,i) rd=r0^(int16_t)i;
#define not(rd,r0) rd=~r0;
// ALU_setif
#define slt(rd,r0,r1) rd=(int64_t)r0<(int64_t)r1;
#define slti(rd,r0,i) rd=(int64_t)r0<(int16_t)i;
#define sltu(rd,r0,r1) rd=r0<r1;
#define sltui(rd,r0,i) rd=r0<(int16_t)i;
#define seqz(rd,r0) rd=r0==0;
#define snez(rd,r0) rd=r0!=0;
// MEM_load
#define lb(rd,i,p) rd=*(int8_t*)((int16_t)i+p);
#define lbu(rd,i,p) rd=*(uint8_t*)((int16_t)i+p);
#define lh(rd,i,p) rd=*(int16_t*)((int16_t)i+p);
#define lhu(rd,i,p) rd=*(uint16_t*)((int16_t)i+p);
#define lw(rd,i,p) rd=*(int32_t*)((int16_t)i+p);
#define lwu(rd,i,p) rd=*(uint32_t*)((int16_t)i+p);
#define ld(rd,i,p) rd=*(int64_t*)((int16_t)i+p);
// MEM_store
#define sb(r0,i,p) *(uint8_t*)((int16_t)i+p)=r0;
#define sh(r0,i,p) *(uint16_t*)((int16_t)i+p)=r0;
#define sw(r0,i,p) *(uint32_t*)((int16_t)i+p)=r0;
#define sd(r0,i,p) *(uint64_t*)((int16_t)i+p)=r0;
// FLOW_jump
#define j(i) goto i;
#define call(i,args...) i(args);
#define ret(i) return i;}
// FLOW_branch
#define beq(r0,r1,i) if(r0==r1)goto i;
#define bne(r0,r1,i) if(r0!=r1)goto i;
#define blt(r0,r1,i) if((int64_t)r0<(int64_t)r1)goto i;
#define bltu(r0,r1,i) if(r0<r1)goto i;
#define bge(r0,r1,i) if((int64_t)r0>=(int64_t)r1)goto i;
#define bgeu(r0,r1,i) if(r0>=r1)goto i;
// TOOL_allocation
#define stack(p,s) {uint8_t stk[s];register uint64_t p=(uint64_t)stk;
#define string(c) []=c;
#define zero(s) [s];
#define data(args...) []={args};
// TOOL_note
#define BYTE uint8_t
#define HALF uint16_t
#define WORD uint32_t
#define DWORD uint64_t
#define $ register uint64_t
#define RV(r) r=
#define fn ;
