section .text
	global _ft_isalpha
  extern _ft_islower
  extern _ft_isupper

_ft_isalpha:
  enter 0, 0
  call _ft_islower
  cmp rax, 0
  jg exit
  call _ft_isupper

exit:
  leave
  ret
