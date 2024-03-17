	.file	"2DARRAY.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 4
LC0:
	.ascii "\12enter the values in 2x3 matrix: \0"
LC1:
	.ascii "%d\0"
	.align 4
LC2:
	.ascii "\12The elements in 2D array are: \0"
LC3:
	.ascii " %d\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$48, %esp
	call	___main
	movl	$LC0, (%esp)
	call	_printf
	movl	$0, 44(%esp)
	jmp	L2
L5:
	movl	$0, 40(%esp)
	jmp	L3
L4:
	leal	16(%esp), %ecx
	movl	44(%esp), %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	movl	40(%esp), %edx
	addl	%edx, %eax
	sall	$2, %eax
	addl	%ecx, %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	addl	$1, 40(%esp)
L3:
	cmpl	$2, 40(%esp)
	jle	L4
	addl	$1, 44(%esp)
L2:
	cmpl	$1, 44(%esp)
	jle	L5
	movl	$LC2, (%esp)
	call	_printf
	movl	$0, 44(%esp)
	jmp	L6
L9:
	movl	$0, 40(%esp)
	jmp	L7
L8:
	movl	44(%esp), %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	movl	40(%esp), %edx
	addl	%edx, %eax
	movl	16(%esp,%eax,4), %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	addl	$1, 40(%esp)
L7:
	cmpl	$2, 40(%esp)
	jle	L8
	addl	$1, 44(%esp)
L6:
	cmpl	$1, 44(%esp)
	jle	L9
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
