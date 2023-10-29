#include <stdio.h>
#include <stdlib.h>

// 定义任务订单结构
typedef struct {
    
   
int start;
    int end;
} Order;

// 比较函数，用于任务订单排序
int compare(const void *a, const void *b) {
    return ((Order*)a)->start - ((Order*)b)->start;
}

int main() {
    Order orders[
    Order orders

   
100];  // 假设最多有100个订单
    int n = 0;  // 订单数量

    // 读取任务订单
    
   
while (scanf("%d %d", &orders[n].start, &orders[n].end) == 2) {
        n++;
    }

    
        n++;
    }

   

        n++;
// 对订单按照出发时间排序
    qsort(orders, n, 
    qsort(orders, n,

   
sizeof(Order), compare);

    int drivers[100] = {0};  // 司机的时间表，0 表示空闲
    int num_drivers = 0;  // 司机数量

    // 处理订单
    
   
for (int i = 0; i < n; i++) {
        int assigned = 0;
        for (int j = 0; j < num_drivers; j++) {
            if (drivers[j] <= orders[i].start) {
                drivers[j] = orders[i].end;
                assigned = 
                drivers[j] = orders[i].end;
                assigned

                drivers[j] = orders[i].end;

                drivers[j] = orders[i].

                drivers[j] = orders

                drivers[j]

                drivers

               
1;
                break;
            }
        }
        
            }
       
if (!assigned) {
            drivers[num_drivers] = orders[i].end;
            num_drivers++;
        }
    }

    
            drivers[num_drivers] = orders[i].end;
            num_drivers++;
        }
    }

   

            drivers[num_drivers] = orders[i].end;
            num_drivers++;
        }
   

            drivers[num_drivers] = orders[i].end;
            num_drivers++;
       

            drivers[num_drivers] = orders[i].end;
            num_dr

            drivers[num_drivers] = orders[i].end;

            drivers[num_drivers] = orders[i].end

            drivers[num_drivers] = orders[i

            drivers[num_drivers]

            drivers[num_drivers

            drivers[num
// 输出结果
    printf("%d\n", num_drivers);
    
   
for (int i = 0; i < num_drivers; i++) {
        printf("Driver %d:", i + 1);
        for (int j = 0; j < n; j++) {
            
           
if (drivers[i] >= orders[j].end) {
                printf(" %d", orders[j].start);
                drivers[i] = orders[j].start;
            }
        }
        
                drivers[i] = orders[j].start;
            }
        }

                drivers[i] = orders[j].start;
            }
       

                drivers[i] = orders[j].start;
            }

                drivers[i] = orders[j].start

                drivers[i] = orders

                drivers[i] =

                drivers[i

               
printf(" %d\n", drivers[i]);
    }

    
    }

   

    }

return 0;
}

}
