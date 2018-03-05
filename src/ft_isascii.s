section	.text
global _ft_isascii

_ft_isascii:
  enter 0, 0
  cmp rdi, 0
  jb false
  cmp rdi, 127
  jg false
  mov rax, 1
  jmp exit

false:
  mov rax, 0
  
exit:
  leave
  ret
