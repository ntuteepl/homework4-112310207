#include <stdio.h>
#include <stdlib.h>

  typedef struct {
    int start;
    int end;
}   Order;


  int compareOrders(const void *a, const void *b) {
  return ((Order *)a)->end - ((Order *)b)->end;
}

  int main() {
    Order *orders = NULL;


  int capacity = 10;


  int n = 0;


  int driverCount = 0;

    orders = (Order *)

  malloc(capacity * sizeof(Order));

    while (1) {
        int start, end;
        if (scanf("%d %d", &start, &end) == 2) {


  if (n == capacity) {
                capacity *= 2;
                orders = (Order *)

  realloc(orders, capacity * sizeof(Order));

            orders[n].start = start;
            orders[n].end = end;
            n++;
        }

        }




  break;
        }


    qsort(orders, n,



  sizeof(Order), compareOrders);




  int *drivers = (int *)malloc(n * sizeof(int));


  int currentEnd = 0;




  for (int i = 0; i < n; i++) {
        if (orders[i].start >= currentEnd) {
            drivers[driverCount] = orders[i].start;
            currentEnd = orders[i].end;
            driverCount++;
        }
    }



    printf("%d\n", driverCount);
    for (int i = 0; i < driverCount; i++) {
        printf("%d ", drivers[i]);
    }
    printf("\n");

    free(orders);


 free(drivers);

    return 0;
}
