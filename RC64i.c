// ALU_addition
#define add(rd,r0,r1) rd=r0+r1;
#define addi(rd,r0,imm) rd=r0+(int16_t)imm;
#define mv(rd,r0) rd=r0;
#define li(rd,imm) rd=imm;
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
#define slli(rd,r0,imm) rd=r0<<imm;
#define srl(rd,r0,r1) rd=r0>>r1;
#define srli(rd,r0,imm) rd=r0>>imm;
#define sra(rd,r0,r1) rd=(int64_t)r0>>r1;
#define srai(rd,r0,imm) rd=(int64_t)r0>>imm;
// ALU_boolean
#define and(rd,r0,r1) rd=r0&r1;
#define andi(rd,r0,imm) rd=r0&(int16_t)imm;
#define or(rd,r0,r1) rd=r0|r1;
#define ori(rd,r0,imm) rd=r0|(int16_t)imm;
#define xor(rd,r0,r1) rd=r0^r1;
#define xori(rd,r0,imm) rd=r0^(int16_t)imm;
#define not(rd,r0) rd=~r0;
// ALU_setif
#define slt(rd,r0,r1) rd=(int64_t)r0<(int64_t)r1;
#define slti(rd,r0,imm) rd=(int64_t)r0<(int16_t)imm;
#define sltu(rd,r0,r1) rd=r0<r1;
#define sltui(rd,r0,imm) rd=r0<(int16_t)imm;
#define seqz(rd,r0) rd=r0==0;
#define snez(rd,r0) rd=r0!=0;
// MEM_load
#define lb(rd,imm,p) rd=*(int8_t*)((int16_t)imm+p);
#define lbu(rd,imm,p) rd=*(uint8_t*)((int16_t)imm+p);
#define lh(rd,imm,p) rd=*(int16_t*)((int16_t)imm+p);
#define lhu(rd,imm,p) rd=*(uint16_t*)((int16_t)imm+p);
#define lw(rd,imm,p) rd=*(int32_t*)((int16_t)imm+p);
#define lwu(rd,imm,p) rd=*(uint32_t*)((int16_t)imm+p);
#define ld(rd,imm,p) rd=*(int64_t*)((int16_t)imm+p);
// MEM_store
#define sb(r0,imm,p) *(uint8_t*)((int16_t)imm+p)=r0;
#define sh(r0,imm,p) *(uint16_t*)((int16_t)imm+p)=r0;
#define sw(r0,imm,p) *(uint32_t*)((int16_t)imm+p)=r0;
#define sd(r0,imm,p) *(uint64_t*)((int16_t)imm+p)=r0;
// FLOW_jump
#define j(imm) goto imm;
#define call(f) f(
#define go );
#define ret(rv) return rv;
// FLOW_branch
#define beq(r0,r1,imm) if(r0==r1)goto imm;
#define bne(r0,r1,imm) if(r0!=r1)goto imm;
#define blt(r0,r1,imm) if((int64_t)r0<(int64_t)r1)goto imm;
#define bltu(r0,r1,imm) if(r0<r1)goto imm;
#define bge(r0,r1,imm) if((int64_t)r0>=(int64_t)r1)goto imm;
#define bgeu(r0,r1,imm) if(r0>=r1)goto imm;
// TOOL_local
#define init(rd,exp) register uint64_t rd=exp;
#define arg register uint64_t
#define stack(sp,s) uint8_t sp[s];
// TOOL_global
#define string(c) []=c;
#define zero(s) [s];
#define data []={
#define end };
#define func ;
// TOOL_addressing
#define m8(imm,p) *(uint8_t*)((int16_t)imm+p)
#define m8s(imm,p) *(int8_t*)((int16_t)imm+p)
#define m16(imm,p) *(uint16_t*)((int16_t)imm+p)
#define m16s(imm,p) *(int16_t*)((int16_t)imm+p)
#define m32(imm,p) *(uint32_t*)((int16_t)imm+p)
#define m32s(imm,p) *(int32_t*)((int16_t)imm+p)
#define m64(imm,p) *(uint64_t*)((int16_t)imm+p)
#define m64s(imm,p) *(int64_t*)((int16_t)imm+p)
// TOOL_type
#define byte uint8_t
#define half uint16_t
#define word uint32_t
#define dword uint64_t
#define qword __uint128_t
#define gp uint64_t
#define sp uint64_t
#define s int64_t
#define XLEN 0x40
