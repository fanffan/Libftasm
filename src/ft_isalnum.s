section .text
  global _ft_isalnum
  extern _ft_isalpha
  extern _ft_isdigit

_ft_isalnum:
  enter 0, 0
  call _ft_isalpha
  cmp rax, 0
  jg exit
  call _ft_isdigit

exit:
  leave
  ret

