#include "libft.h"
int  ft_isalpha(int c){
    return ((c>='a' && c<='z') || (c>='A' && c<='Z'));
}
/*#include <stdio.h>
int main(){
    printf("%d .. %d",ft_isalpha(97),ft_isalpha(9));
}*/