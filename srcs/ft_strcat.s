section .text

global _ft_strcat

_ft_strcat:
	enter 0, 0
	mov r12, rdi

s1chk:
	cmp byte [rdi], 0
	je s2

s1:
	inc rdi
	cmp byte [rdi], 0
	jne s1

s2chk:
	cmp byte [rsi], 0
	je end

s2:
	mov qword [rdi], 0
	mov al, byte [rsi]
	mov byte [rdi], al
	inc rsi
	inc rdi
	cmp byte [rsi], 0
	jne s2
end:
	mov qword [rdi], 0
	mov rax, r12
	leave
	ret
