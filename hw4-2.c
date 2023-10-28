#include <stdio.h>
#include <stdlib.h>
#define ROW 6


  struct Account {
  int accountNumber;

  int password;

  double balance;
};
  main(){
  struct Account accounts[ROW] ={(123,456,9000),(456,789,5000),( 789,888,6000),
  ( 336,558,10000),( 775,666,12000),( 566,221,7000)};


  int n;
  scanf ("%d",&n);

  for (int i=0;i<n ;i++){
  int accountNumber, password;
  int accountIndex = -1;

  for (int i=0;i<ROW;i++){
  if (accounts[i].accountNumber == accountNumber && accounts[i].password == password){
  break;
  }


  if (accountIndex != -1) {
  printf("%d\n", accounts[accountIndex].balance);
  }

  else {
  printf("error\n");
}
  }
  }

  }
