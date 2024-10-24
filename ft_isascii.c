#include "libft.h"
int ft_isascii(int c){
    return (c>= 0 && c<=127);
}
/*#include <stdio.h>
int main(){
    printf("%d .. %d",ft_isascii(97),ft_isascii(128));
}*/