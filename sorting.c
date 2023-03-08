# bubble-sort

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
 //   printf("Hello world");
//trying
int t;
printf("Enter the Size of Array :");
scanf("%d",&t);
int a[t];
printf("Enter the Values inside the array:\n");

for(int i=0;i<t;i++){
    printf("Value %d :",i+1);
    scanf("%d",&a[i]);
}
int temp;

for(int x=0;x<t;x++){
    for(int j=x+1;j<t;j++){
        
        if(a[j]<a[x]){
         temp =a[x];
         a[x]=a[j];
         a[j]= temp;
        }
    }
}


printf("Printing Sorted List:\n");
for(int x=0;x<t;x++){
    printf("%d\n",a[x]);
}

    return 0;
}
