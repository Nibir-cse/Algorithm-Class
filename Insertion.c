#include <stdio.h>
int main()
{
  int n,array[1000],c,d,t,flag=0;

  printf("Enter number of elements: ");
  scanf("%d",&n);

  printf("Enter %d integers: ", n);
  for(c=0;c<n;c++)
    scanf("%d",&array[c]);

  for(c=1;c<=n-1;c++) {
    t=array[c];

    for(d=c-1;d>=0;d--) {
      if(array[d]>t) {
        array[d+1]=array[d];
        flag=1;
      }
      else
        break;
    }
    if(flag)
      array[d+1]=t;
  }
  printf("Sorted list in ascending order: ");
  for(c=0;c<=n-1;c++) {
    printf("%d\n", array[c]);
  }
  return 0;
}




   ##Worst Case Complexity: O(n^2)
Suppose, an array is in ascending order, and you want to sort it in descending order.
 In this case, worst case complexity occurs.
Each element has to be compared with each of the other elements so, for every nth element,
 (n-1) number of comparisons are made.The total number of comparisons = n*(n-1) ~ n^2

  ##Best Case Complexity: O(n)
When the array is already sorted, the outer loop runs for n number of times whereas the inner loop
does not run at all. So, there are only n number of comparisons. Thus, complexity is linear.

  ##Average Case Complexity: O(n^2)
It occurs when the elements of an array are in jumbled order (neither ascending nor descending).
