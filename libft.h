/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:10:46 by aweaver           #+#    #+#             */
/*   Updated: 2021/11/30 11:44:04 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# ifndef __FT_ISALPHA_H__
#  define __FT_ISALPHA_H__

int		ft_isalpha(int c);

# endif

# ifndef __FT_ISDIGIT_H__
#  define __FT_ISDIGIT_H__

int		ft_isdigit(int c);

# endif

# ifndef __FT_ISALNUM_H__
#  define __FT_ISALNUM_H__

int		ft_isalnum(int c);

# endif

# ifndef __FT_ISASCII_H__
#  define __FT_ISASCII_H__

int		ft_isascii(int c);

# endif

# ifndef __FT_ISPRINT_H__
#  define __FT_ISPRINT_H__

int		ft_isprint(int c);

# endif

# ifndef __FT_STRLEN_H__
#  define __FT_STRLEN_H__

size_t	ft_strlen(const char *s);

# endif

# ifndef __FT_MEMSET_H__
#  define __FT_MEMSET_H__

void	*ft_memset(void *s, int c, size_t n);

# endif

# ifndef __FT_BZERO_H__
#  define __FT_BZERO_H__

void	ft_bzero(void *s, size_t n);

# endif

# ifndef __FT_MEMCPY_H__
#  define __FT_MEMCPY_H__

void	*ft_memcpy(void *dest, const void *src, size_t n);

# endif

# ifndef __FT_MEMMOVE_H__
#  define __FT_MEMMOVE_H__

void	*ft_memmove(void *dest, const void *src, size_t n);

# endif

# ifndef __FT_STRLCPY_H__
#  define __FT_STRLCPY_H__

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

# endif

# ifndef __FT_STRLCAT_H__
#  define __FT_STRLCAT_H__

size_t	ft_strlcat(char *dst, const char *src, size_t size);

# endif

# ifndef __FT_TOUPPER_H__
#  define __FT_TOUPPER_H__

int		ft_toupper(int c);

# endif

# ifndef __FT_TOLOWER_H__
#  define __FT_TOLOWER_H__

int		ft_tolower(int c);

# endif

# ifndef __FT_STRCHR_H__
#  define __FT_STRCHR_H__

char	*ft_strchr(const char *s, int c);

# endif

# ifndef __FT_STRRCHR_H__
#  define __FT_STRRCHR_H__

char	*ft_strrchr(const char *s, int c);

# endif

# ifndef __FT_STRNCMP_H__
#  define __FT_STRNCMP_H__

int		ft_strncmp(const char *s1, const char *s2, size_t n);

# endif

# ifndef __FT_MEMCHR_H__
#  define __FT_MEMCHR_H__

void	*ft_memchr(const void *s, int c, size_t n);

# endif

# ifndef __FT_MEMCMP_H__
#  define __FT_MEMCMP_H__

int		ft_memcmp(const void *s1, const void *s2, size_t n);

# endif

# ifndef __FT_STRNSTR_H__
#  define __FT_STRNSTR_H__

char	*ft_strnstr(const char *big, const char *little, size_t len);

# endif

# ifndef __FT_ATOI_H__
#  define __FT_ATOI_H__

int		ft_atoi(const char *nptr);

# endif

# ifndef __FT_CALLOC_H__
#  define __FT_CALLOC_H__

void	*ft_calloc(size_t nmemb, size_t size);

# endif

# ifndef __FT_STRDUP_H__
#  define __FT_STRDUP_H__

char	*ft_strdup(const char *s);

# endif

# ifndef __FT_SUBSTR_H__
#  define __FT_SUBSTR_H__

char	*ft_substr(char const *s, unsigned int start, size_t len);

# endif

# ifndef __FT_STRJOIN_H__
#  define __FT_STRJOIN_H__

char	*ft_strjoin(char const *s1, char const *s2);

# endif

# ifndef __FT_STRTRIM_H__
#  define __FT_STRTRIM_H__

char	*ft_strtrim(char const *s1, char const *set);

# endif

# ifndef __FT_SPLIT_H__
#  define __FT_SPLIT_H__

char	**ft_split(char const *s, char c);

# endif

# ifndef __FT_ITOA_H__
#  define __FT_ITOA_H__

char	*ft_itoa(int n);

# endif

# ifndef __FT_STRMAPI_H__
#  define __FT_STRMAPI_H__

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

# endif

# ifndef __FT_STRITERI_H__
#  define __FT_STRITERI_H__

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

# endif

# ifndef __FT_PUTCHAR_FD_H__
#  define __FT_PUTCHAR_FD_H__

void	ft_putchar_fd(char c, int fd);

# endif

# ifndef __FT_PUTSTR_FD_H__
#  define __FT_PUTSTR_FD_H__

void	ft_putstr_fd(char *s, int fd);

# endif

# ifndef __FT_PUTENDL_FD_H__
#  define __FT_PUTENDL_FD_H__

void	ft_putendl_fd(char *s, int fd);

# endif

# ifndef __FT_PUTNBR_FD_H__
#  define __FT_PUTNBR_FD_H__

void	ft_putnbr_fd(int n, int fd);

# endif

#endif
