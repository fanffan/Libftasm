section	.text
global _ft_isupper

_ft_isupper:
  enter 0, 0
  cmp rdi, 65
  jb false
  cmp rdi, 90
  jg false
  mov rax, 1
  jmp exit

false:
  mov rax, 0
  
exit:
  leave
  ret
