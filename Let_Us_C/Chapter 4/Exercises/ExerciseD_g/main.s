	.file	"main.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 8
.LC0:
	.ascii "Enter the values of Red, Green,Blue\0"
.LC1:
	.ascii "%f%f%f\0"
.LC3:
	.ascii "c=0 m=0 y=0 k=1\0"
	.align 8
.LC6:
	.ascii "Values of CMYK are\12 C=%f\12 M=%f\12 Y=%f\12 K=%f\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$96, %rsp
	.seh_stackalloc	96
	.seh_endprologue
	call	__main
	leaq	.LC0(%rip), %rcx
	call	puts
	leaq	-36(%rbp), %rcx
	leaq	-32(%rbp), %rdx
	leaq	-28(%rbp), %rax
	movq	%rcx, %r9
	movq	%rdx, %r8
	movq	%rax, %rdx
	leaq	.LC1(%rip), %rcx
	call	scanf
	movss	-28(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jp	.L2
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jne	.L2
	movss	-32(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jp	.L2
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jne	.L2
	movss	-36(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jp	.L2
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jne	.L2
	leaq	.LC3(%rip), %rcx
	call	puts
	jmp	.L6
.L2:
	movss	-32(%rbp), %xmm0
	movss	.LC4(%rip), %xmm1
	divss	%xmm1, %xmm0
	cvtss2sd	%xmm0, %xmm2
	movss	-28(%rbp), %xmm0
	movss	.LC4(%rip), %xmm1
	divss	%xmm1, %xmm0
	cvtss2sd	%xmm0, %xmm0
	movapd	%xmm2, %xmm1
	call	fmax
	cvtsd2ss	%xmm0, %xmm4
	movss	%xmm4, -4(%rbp)
	movss	-28(%rbp), %xmm0
	movss	.LC4(%rip), %xmm1
	divss	%xmm1, %xmm0
	movaps	%xmm0, %xmm1
	movss	-8(%rbp), %xmm0
	subss	%xmm1, %xmm0
	divss	-8(%rbp), %xmm0
	movss	%xmm0, -12(%rbp)
	movss	-32(%rbp), %xmm0
	movss	.LC4(%rip), %xmm1
	divss	%xmm1, %xmm0
	movaps	%xmm0, %xmm1
	movss	-8(%rbp), %xmm0
	subss	%xmm1, %xmm0
	divss	-8(%rbp), %xmm0
	movss	%xmm0, -16(%rbp)
	movss	-36(%rbp), %xmm0
	movss	.LC4(%rip), %xmm1
	divss	%xmm1, %xmm0
	cvtss2sd	%xmm0, %xmm1
	cvtss2sd	-4(%rbp), %xmm0
	call	fmax
	cvtsd2ss	%xmm0, %xmm5
	movss	%xmm5, -8(%rbp)
	movss	-36(%rbp), %xmm0
	movss	.LC4(%rip), %xmm1
	divss	%xmm1, %xmm0
	movaps	%xmm0, %xmm1
	movss	-8(%rbp), %xmm0
	subss	%xmm1, %xmm0
	divss	-8(%rbp), %xmm0
	movss	%xmm0, -20(%rbp)
	movss	.LC5(%rip), %xmm0
	subss	-8(%rbp), %xmm0
	movss	%xmm0, -24(%rbp)
	cvtss2sd	-24(%rbp), %xmm0
	cvtss2sd	-20(%rbp), %xmm3
	cvtss2sd	-16(%rbp), %xmm2
	cvtss2sd	-12(%rbp), %xmm1
	movq	%xmm3, %rax
	movq	%rax, %rdx
	movq	%rdx, %r8
	movq	%rax, %xmm5
	movq	%xmm2, %rax
	movq	%rax, %rdx
	movq	%rdx, %rcx
	movq	%rax, %xmm4
	movq	%xmm1, %rax
	movq	%rax, %rdx
	movsd	%xmm0, 32(%rsp)
	movq	%r8, %xmm3
	movq	%xmm5, %r9
	movq	%rcx, %xmm2
	movq	%xmm4, %r8
	movq	%rdx, %xmm1
	movq	%rax, %rdx
	leaq	.LC6(%rip), %rcx
	call	printf
.L6:
	movl	$0, %eax
	addq	$96, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 4
.LC4:
	.long	1132396544
	.align 4
.LC5:
	.long	1065353216
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	puts;	.scl	2;	.type	32;	.endef
	.def	scanf;	.scl	2;	.type	32;	.endef
	.def	fmax;	.scl	2;	.type	32;	.endef
	.def	printf;	.scl	2;	.type	32;	.endef
