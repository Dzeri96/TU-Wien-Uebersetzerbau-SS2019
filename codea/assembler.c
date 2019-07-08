#include <stdio.h>
#include <string.h>
#include "assembler.h"

void functionStart(char *name) {
	printf(".globl %s\n", name);
	printf("\t.type %s, @function\n", name);
	printf("%s:\n",name);
}

char *nextRegister(char *name) {
	char *registers[]={"rax", "r11", "r10", "r9", "r8", "rcx", "rdx", "rsi", "rdi"};
	int index, i;
	if(name==(char *)NULL) {
		index=0;
	}
	else {
		for(i=0;i<9;i++) {
			if(!strcmp(name,registers[i])) {
				index=i+1;
				break;
			}
		}
	}
	return registers[index];
}

char *getByteRegister(char *name){
	char *registers[]={"rax", "r11", "r10", "r9", "r8", "rcx", "rdx", "rsi", "rdi"};
	char *byteRegisters[]={"al", "r11b", "r10b", "r9b", "r8b", "cl", "dl", "sil", "dil"};
	int index,i;
	if(name==(char *)NULL){
		index=0;
	}
	else{
		for(i=0;i<9;i++){
			if(!strcmp(name,registers[i])){
				index=i;
				break;
			}
		}
	}
	return byteRegisters[index];
}

char *getParamRegister(int index) {
	char *registers[]={"rdi", "rsi", "rdx", "rcx", "r8", "r9"};
	return registers[index];
}

void retrn(void) {
	printf("\tret\n");
}

void move(char *src, char *dst) {
	if(strcmp(src,dst)) {
		printf("\tmovq %%%s, %%%s\n",src,dst);
	}
}

void movei(long value, char *reg){
	printf("\tmovq $%li, %%%s\n", value, reg);
}

void add(char *src, char *dst){
	printf("\taddq %%%s, %%%s\n", src, dst);
}

void addi(long value, char *dst){
	if(value != 0)
		printf("\taddq $%li, %%%s\n", value, dst);
}

void mul(char *src, char *dst){
	printf("\timulq %%%s, %%%s\n", src, dst);
}

void muli(long value, char *dst){
	if(value != 1)
		printf("\timulq $%li, %%%s\n", value, dst);
}

void or(char *fst, char *snd){
	if(strcmp(fst,snd))
		printf("\torq %%%s, %%%s\n",fst,snd);
}

void ori(long fst, char *snd){
	printf("\torq $%li, %%%s\n",fst, snd);
}

void neg(char *reg){
	printf("\tnegq %%%s\n", reg);
}

void not(char *reg){
	printf("\txorq $1, %%%s\n", reg);
}

void laroreq(char *fst, char *snd, char* dst){
	printf("\tcmp %%%s, %%%s\n", fst, snd);
	printf("\tsetge %%%s\n",getByteRegister(dst));
	printf("\tand $1, %%%s\n",dst);
}

void laroreqi(long fst, char *snd, char *dst){
	printf("\tcmp $%li, %%%s\n", fst, snd);
	printf("\tsetge %%%s\n",getByteRegister(dst));
	printf("\tand $1, %%%s\n",dst);
}

void laroreqi2(char *fst, long snd, char *dst){
	printf("\tcmp $%li, %%%s\n", snd, fst);
	printf("\tsetnge %%%s\n", getByteRegister(dst));
	printf("\tand $1, %%%s\n", dst);
}

void eq(char *fst, char *snd, char *dst){
	printf("\tcmp %%%s, %%%s\n", fst, snd);
	printf("\tsete %%%s\n",getByteRegister(dst));
	printf("\tand $1, %%%s\n",dst);
}

void eqi(long fst, char *snd, char *dst){
	printf("\tcmpq $%li, %%%s\n", fst, snd);
	printf("\tsete %%%s\n",getByteRegister(dst));
	printf("\tand $1, %%%s\n",dst);
}

void address(char *src, char *dst){
	printf("\tmovq (%%%s), %%%s\n", src, dst);
}

void addressi(long src, char *dst){
	printf("\tmovq ($%li), %%%s\n", src, dst);
}

void dotReg(char *reg){
	printf("\tleaq 8(%%r15), %%r15\n");
	printf("\tmovq %%%s, (%%r15)\n", reg);
}

void dotLon(long value){
	printf("\tleaq 8(%%r15), %%r15\n");
	printf("\tmovq $%li, (%%r15)\n", value);
}

void dotRR(char *reg1, char *reg2, char *dst){
	dotReg(reg1);
	printf("\tmovq %%r15, %%%s\n",dst);
	dotReg(reg2);
}

void dotLR(long value, char *reg, char *dst){
	dotReg(reg);
	dotLon(value);
	printf("\tmovq %%r15, %%%s\n",dst);
}

void dotRL(char *reg, long value, char *dst){
	dotLon(value);
	dotReg(reg);
	printf("\tmovq %%r15, %%%s\n",dst);
}

void dotLL(long val1, long val2, char *dst){
	dotLon(val2);
	dotLon(val1);
	printf("\tmovq %%r15, %%%s\n",dst);
}

void head(char *adr, char *dst){
	printf("\tmovq (%%%s), %%%s\n",adr,dst);
}

void tail(char *adr, char *dst){
	printf("\tmovq 8(%%%s), %%%s\n",adr,dst);
}

void signal(){
	printf("\tjmp .raisesig\n");
}

void minus(char *src, char *dst){
	printf("\tsubq %%%s, %%%s\n",src,dst);
}

void minusi(char *dst, long value){
	printf("\tsubq $%li, %%%s\n",value, dst);
}

void checkNMov(char *reg, char *dest){
	printf("\ttest $1, %%%s\n",reg);
	printf("\tjnz raisesig\n");
	move(reg,dest);
	printf("\tsarq $1, %%%s\n",dest);	
}

void checkN(char *reg, char *tmp){
	printf("\ttest $1, %%%s\n",reg);
	printf("\tjnz raisesig\n");
	printf("\tsarq $1, %%%s\n",reg);
}

void notUntagged(char *reg){
	printf("\ttest $1, %%%s\n",reg);
	printf("\tjnz raisesig\n");
	printf("\txorq $2, %%%s\n",reg);
}

void checkLMov(char *reg, char *dest){
	printf("\ttest $1, %%%s\n",reg);
	printf("\tjz raisesig\n");
	move(reg,dest);
	printf("\tdecq %%%s\n",dest);
}

void checkL(char *reg, char *tmp){
	printf("\ttest $1, %%%s\n",reg);
	printf("\tjz raisesig\n");
	printf("\tdecq %%%s\n",reg);
}


void isList(char *reg, char *dest){
	printf("\ttest $1, %%%s\n",reg);
	printf("\tsetnz %%%s\n",getByteRegister(dest));
	printf("\tandq $1, %%%s\n",dest);
}

void tagN(char *reg){
	printf("\tsalq $1, %%%s\n",reg);
}

void tagL(char *reg){
	printf("\tincq %%%s\n",reg);
}

void orUntagged(char *reg1, char *reg2){
	printf("\ttest $1, %%%s\n",reg1);
	printf("\tjnz raisesig\n");
	printf("\ttest $1, %%%s\n",reg2);
	printf("\tjnz raisesig\n");
	printf("\torq %%%s, %%%s\n", reg1, reg2);
}

