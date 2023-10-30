#include <stdio.h>
#include <string.h>

// 創建帳戶資訊的二維陣列
char account_info[][3] = {
    {"123", "456", "9000"},
    {"456", "789", "5000"},
    {"789", "888", "6000"},
    {
   
"336", "558", "10000"},
    {
   
"775", "666", "12000"},
    {"566", "221", "7000"}
};

int check_balance(char *username, char *password) {
    
   
for (int i = 0; i < sizeof(account_info) / sizeof(account_info[0]); i++) {
        if (strcmp(account_info[i][0], username) == 0 && strcmp(account_info[i][1], password) == 0) {
            return atoi(account_info[i][2]);
        }
    }
    return -1;
}

int main() {
    int N;
    printf("請輸入測試案例數目N: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        char username[20];
        char password[20];

        printf("請輸入帳號: ");
        scanf("%s", username);
        printf("請輸入密碼: ");
        scanf("%s", password);

        int balance = check_balance(username, password);
        if (balance != -1) {
            printf("帳戶餘額為: $%d\n", balance);
        } else {
            printf("error\n");
        }
    }

    return 0;
}
