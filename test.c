//C program to sort the elements of an array in ascending order
#include<stdio.h>

int main(){

int arr[] = {9,2,8,7,1};
int temp = 0;
int length = sizeof(arr)/sizeof(arr[0]);


printf("our initial array looks like\n");
for(int i = 0; i<length ; i++){
    printf("%d\n",arr[i]);
}



for(int i = 0; i<length ; i++){
    for(int j = i+1; j<length; j++){
        if(arr[i] > arr[j]){
            temp = arr[i];// arr[i] = null
            arr[i] = arr[j];  // 2, arr[j] =null
            arr[j] = temp;
        }
    }

}
printf("\n");
printf("after swapping the array\n");
for(int i = 0; i<length ; i++){
    printf("%d\n",arr[i]);
}

}




