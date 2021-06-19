#include <stdio.h>
#include <assert.h>


int factors(int, int []);

int factors(int n, int A[])
{
    int i=0, count =0;
    while (n%2==0)
    {
        count++;
        A[i++]=2;
    }
     while (n%3==0)
    {
        count++;
        A[i++]=3;
    }
     while (n%5==0)
    {
        count++;
        A[i++]=5;
    }
     while (n%11==0)
    {
        count++;
        A[i++]=11;
    }
     while (n%13==0)
    {
        count++;
        A[i++]=13;
    }
    return count;
}


int main(void) {
  int ret[100] = {0};
  int count = factors(180, ret);
  assert (count == 5);
  assert (ret[0] == 2);
  assert (ret[1] == 2);
  assert (ret[2] == 3);
  assert (ret[3] == 3);
  assert (ret[4] == 5);


  count = factors(143, ret);
  assert (count == 2);
  assert (ret[0] == 11);
  assert (ret[1] == 13);
  printf("Factors: passed\n");
}
