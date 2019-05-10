section .data
f: db "%s",10,0

section .text
  global _ft_memset
  extern _printf


_ft_memset:
  enter 0,0

loop:
  cmp rdx, 0
  jb exit
  mov byte[rdi], sil
  inc rdi
  dec rdx
  cmp rdx, 0
  ja loop
exit:
  leave
  ret
