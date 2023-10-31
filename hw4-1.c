#include <stdio.h>
#include <stdlib.h>
   int Prime(int num) {
   if (num <= 1) {
   return 0;
}


   for (int i = 2; i * i <= num; i++) {
   if (num % i == 0) {
   return 0;
}
}
   return 1;
}

   int main(){
   int n;
   scanf("%d", &n);
   if (n < 1 || n > 50) {
   return 1;
}



   int number[n];
   for (int i = 0; i < n; i++) {
   scanf("%d", &number[i]);
   }

    for (int i = 0; i < n; i++) {
     if (Prime(number[i])) {
    printf("YES\n");
}
    else {
    printf("NO\n");
}
}

}
