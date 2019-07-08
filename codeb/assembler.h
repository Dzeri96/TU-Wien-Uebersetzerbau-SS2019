#ifndef __ASSEMBLER_H__
#define __ASSEMBLER_H__

void functionStart(char *name);
char *nextRegister(char *name);
char *getParamRegister(int number);
void retrn(void);
void move(char *src, char *dst);
void movei(long value, char *dst);
void add(char *scr, char *dst);
void addi(long value, char *dst);
void mul(char *scr, char *dst);
void muli(long value, char *dst);
void neg(char *reg);
void not(char *reg);
void laroreq(char *fst, char *snd, char* dst);
void laroreqi(long value, char *fst, char *dst);
void laroreqi2(char *fst, long snd, char *dst);
void eq(char *fst, char *snd, char *dst);
void eqi(long value, char *fst, char *dst);
void or(char *fst, char *snd);
void ori(long fst, char *snd);
void address(char *src, char *dst);
void addressi(long value, char *dst);

char *getRegByNr(short);
void jump(char *reg, int target);

void islist();
void head(char *adr, char *dst);
void tail(char *adr, char *dst);
void signal();
void minus(char *src, char *dst);
void minusi(char *dst, long value);
void checkNMov(char *reg, char *dest);
void checkLMov(char *reg, char *dest);
void isList(char *reg, char *dest);
void dotRR(char *reg1, char *reg2, char *dst);
void dotLR(long value, char *reg, char *dst);
void dotRL(char *reg, long value, char *dst);
void dotLL(long val1, long val2, char *dst);
void tagL(char *reg);
void tagN(char *reg);
void checkN(char *reg);
void checkL(char *reg);
void notUntagged(char *reg);
void orUntagged(char *reg1, char *reg2);

#endif
