#include <stdio.h>

// 定义一个结构体来表示任务订单
  typedef struct {
    int start;
    int end;
} Order;

  int compare_orders(const void *a, const void *b) {
    // 按照结束时间升序排序
  return ((Order*)a)->end - ((Order*)b)->end;
}

  int main() {
    Order orders[100];  // 假设最多有100个任务订单

  int n = 0;
// 读取输入
  while (scanf("%d %d", &orders[n].start, &orders[n].end) == 2) {n++;
  }
// 根据任务订单的结束时间升序排序

  sizeof(Order), compare_orders);

  int passenger_count = 1;

  int current_end_time = orders[0].end;

    // 打印第一个任务订单

  printf("%d %d ", orders[0].start, orders[0].end);

// 打印时间表

  for (int i = 1; i < n; i++) {
    if (orders[i].start >= current_end_time) {

// 可以派同一个旅客继续执行

  printf("%d %d ", orders[i].start, orders[i].end);
            current_end_time = orders[i].end;
        }
   else {
  passenger_count++;
// 需要新的旅客


  printf("\n%d %d ", orders[i].start, orders[i].end);
            current_end_time = orders[i].end;
        }
    }


// 打印最少旅客需求数
    printf("\n%d\n", passenger_count);

return 0;
}
