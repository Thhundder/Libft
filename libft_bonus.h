/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Evan <Evan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 15:47:00 by Evan              #+#    #+#             */
/*   Updated: 2025/03/04 18:56:06 by Evan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_BONUS_H
# define LIBFT_BONUS_H

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);
void				*ft_memcpy(void *dest, const void *src, unsigned int n);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_substr(const char *s, unsigned int start,
						unsigned int len);
char				*ft_strtrim(const char *s1, const char *set);
char				*ft_strrchr(const char *s, int c);
char				*ft_strnstr(const char *haystack, const char *needle,
						unsigned int len);
int					ft_strncmp(const char *s1, const char *s2, int n);
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int					ft_strlen(const char *s);
int					ft_strlcpy(char *dst, const char *src, int dstsize);
int					ft_strlcat(char *dst, const char *src, int dstsize);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strdup(const char *s);
char				*ft_strchr(const char *s, int c);
void				ft_putstr_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putchar_fd(char c, int fd);
void				*ft_memset(void *s, int c, unsigned int n);
void				*ft_memmove(void *dest, const void *src, unsigned int n);
int					ft_memcmp(const void *s1, const void *s2, unsigned int n);
void				*ft_memchr(const void *s, int c, unsigned int n);
char				*ft_itoa(int n);
int					ft_isprint(int c);
int					ft_isdigit(int c);
int					ft_isascii(int c);
int					ft_isalpha(int c);
int					ft_isalnum(int c);
void				*ft_calloc(unsigned int count, unsigned int size);
void				ft_bzero(void *s, unsigned int n);
void				ft_lstadd_back(t_list **lst, t_list *new_elem);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstnew(void *content);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
t_list				*ft_lstlast(t_list *lst);
void				ft_lstiter(t_list *lst, void (*f)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstadd_front(t_list **lst, t_list *new_elem);
char				**ft_split(const char *str, char delim);
char				*ft_strjoin(char const *s1, char const *s2);

#endif
