/* Enter your solutions in this file */
#include <stdio.h>
#include <math.h>

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

float average(int A[], int n)
{
    int sum =0;
    float avg;
    for(int i=0; i<n; i++)
    {
        sum += A[i];
    }
    avg= sum/((float) n) ;
    return avg;
}

int mode(int A[], int n)
{
    int maxcount=0;
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(A[j]==A[i])
                ++count;
        }
        if(count>maxcount)
        {
            maxcount=count;
        }
        return A[i];
    }
}

int factors(int num,int arr[]){
	int prime=2,ref=0;
	int count=0,index=0;
	while(num!=1){
		if(num%prime==0){
			num=num/prime;
			count++;
			arr[index]=prime;
			index++;
		}
		else{
			while(1){
				prime++;
				for(int j=2;j<prime;j++){
					if(prime%j==0)
						ref++;
				}
				if(ref==0){
					break;
				}
				else{
					ref=0;
				}
			}
		}
	}
	return count;
}
