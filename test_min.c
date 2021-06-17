#include <stdio.h>
#include <assert.h>


int min(int [], int);
int min(int A[], int n)
{
    int m = A[0], temp;
    for(int i=1; i<n ; i++)
    {
        if(A[i]<=m)
            m= A[i];
    }
    return m;
}

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (min(x, 7) == -3);

  int y[] = {5};
  assert (min(y, 1) == 5);
  printf("Min: passed\n");
  }
