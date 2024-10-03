#include<stdio.h>
#include<conio.h>

int findMajorityElement(int arr[],int size){
    int candidate=0,count=0;

    for(    int i=0;i<size ;i++){
        if(count==0){
            candidate=arr[i];
            count=1;

        }else if(arr[i]==candidate){
            count++;
        }else{
            count--;
        }
    }

    count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==candidate){
            count++;
        }
    }
    if (count>size/2){
        return candidate;
    }else{
        return -1;
    }
}

int main(){
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
int majorityElement=findMajorityElement(arr,size);
    if(majorityElement!=-1){
        printf("the majority element is:%d\n",majorityElement);
    }else{
        printf("No majority element found");
    }
    return 0;
}