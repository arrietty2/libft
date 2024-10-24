#include "libft.h"
int  ft_isalnum(int c){
    return (ft_isalpha(c) || ft_isdigit(c));
}
/*#include <stdio.h>
int main(){
    printf("%d .. %d",ft_isalnum(55),ft_isalnum(9));
}*/