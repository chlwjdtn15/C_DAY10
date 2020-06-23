// 배열에 10개의 양의 정수를 입력 받아서 저장하고, 저장된 정수 중 짝수 정수의 합을 출력하시오.
#include <stdio.h>



// void my_scan(int a, int* b) {
  

//   *b = a;
// }



int main(void) {


  // int arr[6] = {9,5,7,2,4,0};


  // for (int i = 0; i < 6; i++) {

  //   printf("%d\n", arr[i]);
  // }
  


  // v1 아래 배열의 값중 짝수의 합만 출력.
  // int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  // int sum = 0;
  // int size = sizeof(arr) / sizeof(arr[0]);

  // printf("%d\n", size);
  // for (int i = 0; i < size; i++) {
    
  //   if (arr[i] % 2 == 0) {
      

  //     sum += arr[i];
  //   }
  // }

  // printf("%d", sum);




  // int b = 0;
  
  // printf("my_scan() 사용 전 : %d\n", b);


  // // scanf("%d", &b);

  // my_scan(123, &b);
  
  // printf("my_scan() 사용 후 : %d\n", b); // 출력 : 123


  
  // int arr[10];
  // int size = sizeof(arr) / sizeof(arr[0]);
  // int sum = 0;
  // int b;
  // for (int i = 0; i < size; i ++) {
  //   scanf("%d", &b);

  //   arr[i] = b;

  //   if(arr[i] % 2 == 0) {
      

  //     sum += arr[i];
  //   }
  // }


  // printf("%d\n", sum);



  //문제3. 숫자 다섯 개를 사용자에게 입력받아 입력받은 순서와 반대로 출력하는 프로그램을 만드시오.
  int arr[5];
  int size = sizeof(arr) / sizeof(arr[0]);
  int b = 0;

  for( int i = 0; i < size; i++) {
    scanf("%d", &b);
    
    arr[i] = b;
  }

  for ( int t = size - 1; t >= 0; t--) {
    printf("%d\n", arr[t]);
  }








  return 0;
}