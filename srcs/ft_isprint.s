section	.text
global _ft_isprint

_ft_isprint:
  enter 0, 0
  cmp rdi, 32
  jb false
  cmp rdi, 126
  jg false
  mov rax, 1
  jmp exit

false:
  mov rax, 0
  
exit:
  leave
  ret
