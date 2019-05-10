section .text
  global _ft_memset


_ft_memset:
	enter 0,0
	mov r12, rdi
	cmp rdx, 0
	jbe exit
	mov al, sil
	mov rcx, rdx
	repne stosb
exit:
	mov rax, r12
	leave
	ret
