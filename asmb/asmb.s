	.file	"frame.c"
	.text
	.globl	asmb
	.type	asmb, @function
asmb:
.LFB0:
	.cfi_startproc
	testq	%rcx, %rcx		# test n = n = 0?
	je	.L1			# if n = n = 0 end prog
	pushq	%r12			# save r12
	movq	%rcx, %rax		# n -> rax
	movq	%rdx, %rcx		# c -> rcx
	shrq	$6, %rdx		# c(rdx) =>> 6
	andq	$63, %rcx		# c(rcx) % 64
	movq	%rax, %r8		# n -> r8
	subq	$1, %r8			# n(r8) =- 1
	movq	$0, %r9			# r9 = 0 = i
.L3:	
	movq	%r9, %r10
	subq	%rdx, %r10		# init r10 = i - c
	andq	%r8, %r10		# r10 =% n-1
	movq	(%rdi,%r10,8), %r12	# r12 = a[i-c % n]
	subq	$1, %r10		# ... - 1
	andq	%r8, %r10
	movq	(%rdi,%r10,8), %r11	# r12 = a[i-c-1 % n]
	shld	%cl, %r11, %r12		# shift r12:r12 << %cl
	movq	%r12, (%rsi,%r9,8)	# r[i] = r12
	addq	$1, %r9			# r9++
	cmpq	%rax, %r9		# n == i?
	jne	.L3
.L1:
	popq	%r12			# restore r12
	rep ret
	.cfi_endproc
.LFE0:
	.size	asmb, .-asmb
	.ident	"GCC: (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
