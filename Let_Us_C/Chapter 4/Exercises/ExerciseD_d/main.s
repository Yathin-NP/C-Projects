	.file	"main.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "Enter the sides of a triangle\0"
.LC1:
	.ascii "%d%d%d\0"
.LC2:
	.ascii "Triangle is valid\0"
.LC3:
	.ascii "Triangle is not valid\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$64, %rsp
	.seh_stackalloc	64
	.seh_endprologue
	call	__main
	leaq	.LC0(%rip), %rcx
	call	puts
	leaq	-20(%rbp), %rcx
	leaq	-16(%rbp), %rdx
	leaq	-12(%rbp), %rax
	movq	%rcx, %r9
	movq	%rdx, %r8
	movq	%rax, %rdx
	leaq	.LC1(%rip), %rcx
	call	scanf
	movl	-16(%rbp), %eax
	cvtsi2sd	%eax, %xmm1
	movl	-12(%rbp), %eax
	cvtsi2sd	%eax, %xmm0
	call	fmax
	cvttsd2si	%xmm0, %eax
	movl	%eax, -4(%rbp)
	movl	-20(%rbp), %eax
	cvtsi2sd	%eax, %xmm1
	cvtsi2sd	-4(%rbp), %xmm0
	call	fmax
	cvttsd2si	%xmm0, %eax
	movl	%eax, -8(%rbp)
	movl	-12(%rbp), %edx
	movl	-16(%rbp), %eax
	addl	%edx, %eax
	cmpl	%eax, -8(%rbp)
	jl	.L2
	movl	-16(%rbp), %edx
	movl	-20(%rbp), %eax
	addl	%edx, %eax
	cmpl	%eax, -8(%rbp)
	jl	.L2
	movl	-12(%rbp), %edx
	movl	-20(%rbp), %eax
	addl	%edx, %eax
	cmpl	%eax, -8(%rbp)
	jge	.L3
.L2:
	leaq	.LC2(%rip), %rcx
	call	puts
	jmp	.L4
.L3:
	leaq	.LC3(%rip), %rcx
	call	puts
.L4:
	movl	$0, %eax
	addq	$64, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	puts;	.scl	2;	.type	32;	.endef
	.def	scanf;	.scl	2;	.type	32;	.endef
	.def	fmax;	.scl	2;	.type	32;	.endef
