#include<stdio.h>

// int count_before_one(int n){
//     int arr[n];
// int count = 0;
// for(int i = 0; i < n; i++){
//     if(arr[i] == 1){
//         break;
//     } else{
//         count++;
//     }
// }

// return count;

// }




int main(){

    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
int count = 0;
for(int i = 0; i < n; i++){
    if(arr[i] == 1){
        break;
    } else{
        count++;
    }
}

//  count_before_one();
printf("%d",count);
return 0;
}