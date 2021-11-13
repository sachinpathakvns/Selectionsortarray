#include <stdio.h>

int main()
 { int a[]={98,34,67,1,3,13}; //input array
  int i,j,minpos,temp;
  int n=sizeof(a)/sizeof(a[0]); // size of array
  printf("\nOriginal Array\n,");
  for ( i = 0; i <=n-1; i++) // Function to print original array.
  {
      printf("%d,",a[i]);
  }
//   One by one move boundary of unsorted subarray. 
  for ( i = 0; i <=n-2; i++)
  {
    //   Find the minimum element in unsorted array.
      minpos=i;
      for(j=i+1;j<=n-1;j++)
    //   To sort in descending order,change sign >.
    // Select the minimum element in each loop. 
      if(a[j]<a[minpos])
      minpos=j;

      temp=a[minpos];
      a[minpos]=a[i];//Swap minpos and ith element
      a[i]=temp;
  
  }
  printf("\nSorted Array\n,");
  for ( i = 0; i <n; i++) // Function to print an array.
  {
      printf("%d,",a[i]);
  }
  printf("\n");

}