/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapark <yapark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 22:01:46 by yapark            #+#    #+#             */
/*   Updated: 2020/04/05 19:41:56 by yapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int				ft_atoi(char *str);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strrchr(char *str, int character);
char			*ft_strnstr(const char *s1, const char *s2, size_t n);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
size_t			ft_strlen(const char *str);
int				ft_strcmp(char *s1, char *s2);
char			*ft_strchr(char *str, int character);
void			*ft_memset(void *ptr, int value, size_t num);
void			*ft_memmove(void *dest, const void *src, size_t num);
void			*ft_memcpy(void *dest, const void *src, size_t num);
int				ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
void			*ft_memchr(const void *ptr, int value, size_t num);
void			*ft_memccpy(void *dest, const void *src, int c, size_t num);
int				ft_isprint(int arg);
int				ft_isdigit(int arg);
int				ft_isascii(int c);
int				ft_isalpha(int c);
int				ft_isalnum(int argument);
void			*ft_calloc(size_t elt_count, size_t elt_size);
void			ft_bzero(void *ptr, size_t num);
int				ft_strncmp(const char *str1, const char *str2, size_t num);
char			*ft_itoa(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			**ft_split(char const *s, char c);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strdup(const char *s);

#endif
