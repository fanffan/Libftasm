section .text
global _ft_tolower

_ft_tolower:
  enter 0, 0
  mov rax, rdi
  cmp rax, 65
  jb exit
  cmp rax, 90
  jg exit
  add rax, 32
exit:
  leave
  ret

