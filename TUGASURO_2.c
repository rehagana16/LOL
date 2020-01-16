#include <stdio.h>

int main() {
    char operator;
    double first,second;
    int p, i;
    printf("Enter an operator (+, -, *, d): \n"); /* note d= derivative*/
    scanf("%c", &operator);

    if (operator == 'd') {
        printf("Pangkat berapa: \n");
        scanf("%d", &p);
        int angka[p],o;
        for(i=0; i <= p; i=i+1)
        {
        	printf("koefisien dari pangkat ke %d= ", i);
        	scanf("%d", &angka[i]);
        }
    }
}
