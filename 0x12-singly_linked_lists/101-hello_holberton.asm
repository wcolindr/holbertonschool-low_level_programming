	.file	"test.c"
	.globl	s
	.data
	.align 16
	.type	s, @object
	.size	s, 17
s:
	.string	"Hello, Holberton"
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
	movl	$s, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.4) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
