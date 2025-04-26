## Funções - Parte 1 do Projeto Libft

| Função        | Assinatura                                                                | Retorno                        | O que faz                                                                 |
|---------------|---------------------------------------------------------------------------|--------------------------------|---------------------------------------------------------------------------|
| `ft_isalpha`  | `int ft_isalpha(int c);`                                                  | 1 (se letra), 0 (caso contrário)| Verifica se `c` é uma letra (A-Z ou a-z)                                 |
| `ft_isdigit`  | `int ft_isdigit(int c);`                                                  | 1 (se dígito), 0 (caso contrário)| Verifica se `c` é um número de 0 a 9                                     |
| `ft_isalnum`  | `int ft_isalnum(int c);`                                                  | 1 ou 0                         | Verifica se `c` é letra ou número                                        |
| `ft_isascii`  | `int ft_isascii(int c);`                                                  | 1 ou 0                         | Verifica se `c` está entre 0 e 127 (tabela ASCII)                        |
| `ft_isprint`  | `int ft_isprint(int c);`                                                  | 1 ou 0                         | Verifica se `c` é imprimível (entre ' ' e '~')                          |
| `ft_strlen`   | `size_t ft_strlen(const char *s);`                                        | Número de caracteres           | Retorna o tamanho da string (sem o `\0`)                                |
| `ft_memset`   | `void *ft_memset(void *s, int c, size_t n);`                              | Ponteiro para `s`              | Preenche os `n` primeiros bytes de `s` com o valor `c`                  |
| `ft_bzero`    | `void ft_bzero(void *s, size_t n);`                                       | Nenhum (void)                  | Zera os `n` primeiros bytes da memória                                  |
| `ft_memcpy`   | `void *ft_memcpy(void *dest, const void *src, size_t n);`                 | Ponteiro para `dest`           | Copia `n` bytes de `src` para `dest` (sem tratar sobreposição)          |
| `ft_memmove`  | `void *ft_memmove(void *dest, const void *src, size_t n);`                | Ponteiro para `dest`           | Copia `n` bytes tratando sobreposição                                   |
| `ft_strlcpy`  | `size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);`          | Tamanho da `src`               | Copia string com limite de buffer e adiciona `\0` no final              |
| `ft_strlcat`  | `size_t ft_strlcat(char *dst, const char *src, size_t dstsize);`          | Tamanho total pretendido       | Concatena strings com limite de buffer e adiciona `\0` no final         |
| `ft_toupper`  | `int ft_toupper(int c);`                                                  | Maiúscula ou o próprio `c`     | Converte para maiúscula se `c` for minúsculo                            |
| `ft_tolower`  | `int ft_tolower(int c);`                                                  | Minúscula ou o próprio `c`     | Converte para minúscula se `c` for maiúsculo                            |
| `ft_strchr`   | `char *ft_strchr(const char *s, int c);`                                  | Ponteiro para 1ª ocorrência    | Procura a primeira ocorrência de `c` na string                          |
| `ft_strrchr`  | `char *ft_strrchr(const char *s, int c);`                                 | Ponteiro para última ocorrência| Procura a última ocorrência de `c` na string                            |
| `ft_strncmp`  | `int ft_strncmp(const char *s1, const char *s2, size_t n);`               | Diferença entre os bytes       | Compara até `n` caracteres entre duas strings                           |
| `ft_memchr`   | `void *ft_memchr(const void *s, int c, size_t n);`                        | Ponteiro para o byte encontrado| Procura o byte `c` nos `n` primeiros bytes                              |
| `ft_memcmp`   | `int ft_memcmp(const void *s1, const void *s2, size_t n);`                | Diferença entre os bytes       | Compara os `n` primeiros bytes de duas regiões de memória               |
| `ft_strnstr`  | `char *ft_strnstr(const char *big, const char *little, size_t len);`      | Ponteiro para início de `little`| Procura substring `little` dentro de `big`, limitada por `len`         |
| `ft_atoi`     | `int ft_atoi(const char *str);`                                           | Número inteiro (`int`)         | Converte uma string para número inteiro                                 |
| `ft_calloc`   | `void *ft_calloc(size_t nmemb, size_t size);`                             | Ponteiro para memória alocada  | Aloca memória zerada para `nmemb * size` bytes                          |
| `ft_strdup`   | `char *ft_strdup(const char *s);`                                         | Ponteiro para nova string      | Duplica a string usando malloc                                          |





Ordem | Função | Dificuldade | Resumo rápido
OK - 1 | ft_putchar_fd | Muito fácil | Escreve um único caractere no file descriptor.
OK - 2 | ft_putstr_fd | Muito fácil | Escreve uma string no file descriptor.
3 | ft_putendl_fd | Fácil | Escreve a string seguida de uma quebra de linha.
4 | ft_putnbr_fd | Fácil | Escreve um número inteiro no file descriptor.
5 | ft_strmapi | Médio | Aplica uma função a cada caractere de uma string nova.
6 | ft_striteri | Médio | Aplica uma função a cada caractere modificando a string original.
7 | ft_substr | Médio | Recorta uma parte da string a partir de um índice, com no máximo len caracteres.
8 | ft_strjoin | Médio | Junta duas strings em uma nova.
9 | ft_strtrim | Médio-difícil | Remove caracteres do início e fim da string conforme o set.
10 | ft_itoa | Difícil | Converte um número em string.
11 | ft_split | Mais difícil | Separa uma string em várias, usando um delimitador.


**File Descriptor | Arquivos abertos**

lsof --> liste todos os arquivos em processo (abertos)
/proc --> processos abertos/em andamento
ls --> listar todos os arquivos | numeros sao diretorios de processos (PID)
--cd (qualquer numero)
cat cmdline --> visualizar o comando utilizado pelo programa
cd fd ls --> listar os files descriptor 
ls -l (qualquer numero) --> dados do arquivo

