
//alocar espaço para count elementos,
// cada um com size bytes, e zerar esse espaço

void    *ft_calloc(size_t nmemb, size_t size)
{
    char *ptr;
    if (!nmemb || !size)
        return (malloc(0));
    ptr = malloc(nmemb * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, nmemb * size);
    return (ptr);
}