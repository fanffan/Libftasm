section .text
  global _ft_memset

_ft_memset:
  enter 0,0
loop:
  mov [rdi], rsi
  inc rdi
  dec rdx
  cmp rdx, 0
  ja loop
  leave
  ret
