	.file	"bsp1.c"
	.text
	.globl	asma
	.type	asma, @function
asma:
.LFB0:
	.cfi_startproc
	movq	%rdx, %rcx
	andq	$63, %rcx
	shrq	$6, %rdx
	movq	%rdx, %rax
	andl	$1, %eax
	movq	(%rdi,%rax,8), %rax
	movq	%rax, (%rsi)
	notq	%rdx
	andl	$1, %edx
	movq	(%rdi,%rdx,8), %rax
	movq	%rax, 8(%rsi)
	movq	(%rsi), %rax
	movq	8(%rsi), %r9
	shld	%cl, %r9, (%rsi)
	shld	%cl, %rax, 8(%rsi)
	ret
	.cfi_endproc
.LFE0:
	.size	asma, .-asma
	.ident	"GCC: (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
