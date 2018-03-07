section .text
global _ft_strdup
extern _malloc
extern _ft_strlen
extern _ft_memcpy

_ft_strdup:
  mov r8, rdi
  call _ft_strlen
  mov r9, rax
  mov rdi, rax
  call _malloc
  mov [rax + r9], byte 0x00
  mov rdi, rax
  mov rsi, r8
  mov rdx, r9
  call _ft_memcpy
  leave
  ret
