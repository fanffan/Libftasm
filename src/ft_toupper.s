section .text
global _ft_toupper

_ft_toupper:
  enter 0, 0
  mov rax, rdi
  cmp rax, 97
  jb exit
  cmp rax, 122
  jg exit
  sub rax, 32

exit:
  leave
  ret

