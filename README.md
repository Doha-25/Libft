*This project has been created as part of the 42 curriculum by Doha Baniyaseen.*

# Libft

## Description
Libft is a foundational project in the 42 curriculum.
Its goal is to create a personal C library by reimplementing standard C library function and adding functions that can be reused in future projects.

## Detailed Library Description
The library is composed of several categories of several categories of functions :

### 1. Character and String Handling
- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_toupper
- ft_tolower
- ft_strlen
- ft_strncmp

### 2. Memory Management
- ft_memset
- ft_memcpy
- ft_memmove
- ft_memchr
- ft_bzero
- ft_calloc

### 3. Strings
Higher-level functions for dynamic string processing:
- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_striteri
- Output helpers: ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd

### 4. Linked List
- ft_lstnew
- ft_lstadd_front
- ft_lstadd_back
- ft_lstsize
- ft_lstlast
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

---

## Instructions
To compile the code, run make in the terminal. This will create a library called libft.a by make command,
then to compile the main file use cc main.c libft.a ,Finally to get the output use ./a.out.
---

## Resources
- The C Programming Language - Brian W. Kernighan & Dennis M. Ritchie
- 42 Network documentation
- YouTube tutorials for C programming concepts
- Use of AI to better understand C programming concepts
