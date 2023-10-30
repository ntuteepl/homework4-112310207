#include <stdio.h>

  int main() {
  int n;
    scanf("%d", &n);
  int boy[n][n];
  int girl[n][n];

    // 输入好感度矩阵
  for (int i = 0; i < n; i++) {


  for (int j = 0; j < n; j++) {
    scanf("%d", &boy[i][j]);
    }
    }
  for (int i = 0; i < n; i++) {


  for (int j = 0; j < n; j++) {
    scanf("%d", &girl[i][j]);
    }
    }

  int boy_order[n];
  int girl_order[n];

// 初始化男生和女生的初始顺序

  for (int i = 0; i < n; i++) {
        boy_order[i] = i;
        girl_order[i] = i;
    }
// 对男生的顺序进行排序，从高到低
  for (int i = 0; i < n; i++) {
  for (int j = i + 1; j < n; j++) {


  if (boy[i][boy_order[j]] < boy[i][boy_order[i]]) {
  int temp = boy_order[i];
                boy_order[i] = boy_order[j];
                boy_order[j] = temp;
            }
        }
    }

// 对女生的顺序进行排序，从高到低
  for (int i = 0; i < n; i++) {
  for (int j = i + 1; j < n; j++) {
  if (girl[i][girl_order[j]] < girl[i][girl_order[i]]) {
  int temp = girl_order[i];
                girl_order[i] = girl_order[j];
                girl_order[j] = temp;
            }
        }
    }

// 输出最佳情侣配对
    for (int i = 0; i < n; i++) {
    printf("boy %d pair with girl %d\n", boy_order[i] + 1, girl_order[i] + 1);
    }
return 0;
  }
