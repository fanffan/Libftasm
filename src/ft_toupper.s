section .text
global _ft_toupper

_ft_toupper:
  enter 0, 0
  mov rax, rdi
  sub rax, 32
  leave
  ret

