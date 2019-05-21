#ifndef LIBFTASM_H
# define LIBFTASM_H
# include <strings.h>
# include <stdio.h>

int     ft_isdigit(int c);
int     ft_tolower(int c);
int     ft_toupper(int c);
int     ft_islower(int c);
int     ft_isupper(int c);
int     ft_isalpha(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
void    ft_bzero(char *str, int size);
char    *ft_strcat(char *s1, char *s2);
void    ft_puts(char *str);
void    ft_putchar(int c);
int     ft_strlen(char *str);
void    *ft_memset(void *s, int c, size_t n);
void    *ft_memcpy(void *s1, void *s2, size_t n);
char    *ft_strdup(char *str);
char    *ft_cat(int fd);
void	*ft_memalloc(size_t size);
void	*ft_strnew(size_t size);
char	*ft_strcpy(char *s1, const char *s2);
char	*ft_cjoin(char *s1, char c);

# endif
