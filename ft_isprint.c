#include "libft.h"
int ft_isprint(int c){
    return (c>= 32 && c<=126);
}
/*#include <stdio.h>
int main(){
    printf("%d .. %d",ft_isprint(97),ft_isprint(128));
}*/