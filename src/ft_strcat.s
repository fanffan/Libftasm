section .text

global _ft_strcat

_ft_strcat:
  enter 0, 0

s1:
  inc rdi
  cmp byte [rdi], 0
  jne s1

s2:
  mov al, [rsi]
  mov [rdi], al
  inc rsi
  inc rdi
  cmp byte [rsi], 0
  jne s2
  mov [rdi], BYTE 0x00
  leave
  ret
