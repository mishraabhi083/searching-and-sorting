#include<header.h>

void printOptions(){
printf("options :-\n\
1.set new array\n\
2.linear search\n\
3.binary search\n\
4.mergesort\n\
5.quicksort\n\
6.heapsort\n\
7.see options\n\
0.exit\n");
}

int main(int argc,char** argv){
    printOptions();
    int opt,n,*arr;
    bool INIT=false;
    while(true){
        printf(">>> ");
        scanf("%d",&opt);
        switch(opt){
            case 1:
                printf("Enter num of elements: ");
                scanf("%d",&n);
                arr = (int*)malloc(sizeof(int)*n);
                printf("feed data : ");
                for(int i=0;i<n;i++){
                    scanf("%d",&arr[i]);
                }
                printArray(arr,n);
                INIT=true;
                break;
            case 2:
                if(INIT){
                    int ele;
                    printf("Enter element to search:");
                    scanf("%d",&ele);
                    linearSearch(arr,n,ele);
                }
                break;                          
            case 3:

                if(INIT){
                    int ele;
                    printf("Enter element to search:");
                    scanf("%d",&ele);
                    binSearch(arr,n,ele);
                }
                
                break;              
            case 4:
                if(INIT){
                    mergeSort(arr,0,n+1);
                }
                printArray(arr,n);
                break;              
            case 5:
                if(INIT){
                    quickSort(arr,0,n+1);
                }
                printArray(arr,n);
                break;              
            case 6:
                break;
            case 7:
                printOptions();
                break;
            default:
                    printf("Exit---\n");
                    return;
                break;
        }

    }
}