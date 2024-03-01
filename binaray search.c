#include<stdio.h>
int binarysearch( int a[10],int n ,int x){
int low; int mid ;int high;int t=0;
low=0;
high=n-1;
mid=n/2;
while(low<=high){
    mid=(low+high)/2;
    if(a[mid]==x){
        t=mid+1;
        break;
    } else if( a[mid]<x){
       low=mid+1;
    } else{
    high = mid-1;
    }
}
    }
int main(){
int a[10],i,n,t,x,mid,low,high;
  printf("enter the size of arr\n");
  scanf("%d\n",&n);

  printf("enter the nom\n");
  for(i=0; i<n; i++){
    scanf("%d",&a[i]);

  } printf("enter the num to be searched \n");
  scanf("%d",&x);
 if (t==0){
   printf("not found");

   }
   else{
    printf("found postion %d",t);
   }
}
