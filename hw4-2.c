#include <stdio.h>

// 帳戶資訊的二維陣列：[帳號, 密碼, 餘額]
int accounts[][3] = {
    {123, 456, 9000},

    {
456, 789, 5000},
    {

789, 888, 6000},
    {336, 558, 10000},

    {
775, 666, 12000},

    {
566, 221, 7000}
};

int main() {


int N;
    scanf("%d", &N);



for (int i = 0; i < N; i++){


int accountNumber, password;


scanf("%d %d", &accountNumber, &password);



int found = 0;
        int balance = 0;



for (int j = 0; j < 6; j++) {
            if (accounts[j][0] == accountNumber && accounts[j][1] == password) {
                found = 1;
                balance = accounts[j][2];


break;
            }
        }








if (found) {


printf("%d\n", balance);
        }
        else {


printf("error\n");
        }

}
}
