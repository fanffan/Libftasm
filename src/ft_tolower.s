section .text
global _ft_tolower

_ft_tolower:
  enter 0, 0
  mov rax, rdi
  add rax, 32
  leave
  ret

