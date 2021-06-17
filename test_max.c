#include <stdio.h>
#include <assert.h>


int max(int [], int);

int max(int A[], int n)
{
    int m = A[0], temp;
    for(int i=1; i<n ; i++)
    {
        if(A[i]>=m)
            m= A[i];
    }
    return m;
}

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }
