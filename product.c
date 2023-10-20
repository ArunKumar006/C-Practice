#include <stdio.h>
int sum(a,b){
    return a*b;
};
int main() {
    // Write C code here
    int a;
    int b;
    int s;
    scanf("%d%d",&a,&b);
    s=sum(a,b);
    printf("%d",s);

    return 0;
}
