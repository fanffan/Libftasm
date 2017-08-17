section	.text
  global ft_isdigit

ft_isdigit:
  enter 0, 0
  cmp rdi, 0
  jb false
  cmp rdi, 9
  jg false
  mov rax, 1
  jmp exit

false:
  mov rax, 0
  
exit:
  leave
  ret
