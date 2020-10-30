	.file	"test.c"
	.section	.rodata
	.LC0:
	.string	"%s"
	.text
	.globl	main
	.type	main, @function
main:
	.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movabsq	$5197202827057587528, %rax
	movq	%rax, -32(%rbp)
	movabsq	$7957707101262998639, %rax
	movq	%rax, -24(%rbp)
	movb	$0, -16(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L2
	call	__stack_chk_fail
	.L2:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.4) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
