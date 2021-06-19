/* Enter your solutions in this file */
#include <stdio.h>
#include <math.h>

int max(int arr[],int n)
{
for(int i=1;i<n;++i)
{
if(arr[0]<arr[i]){
arr[0]=arr[i];
}
}
return arr[0];
}

int min(int arr[],int n)
{
for(int i=1;i<n;i++)
{
if(arr[i]<arr[0]){
arr[0]=arr[i];
}
}
return arr[0];
}

float average(int arr[], int n)
{
float sum=0.0;
 for(int i=0;i<n;++i){
 sum=sum+arr[i];
 }
float average=sum/n;
 
 return average;
 }
 
 int mode(int arr[], int n){
int maxcount=0;
for(int i=0;i<n;++i){
int counts=0;

for(int j=0;j<n;++j){
if(arr[j]==arr[i])
++counts;
}
if(counts>maxcount){
maxcount=counts;
}
return arr[i];
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
