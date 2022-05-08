#include<stdio.h>
#define N 10

int QKPass(int r[],int low,int high){
	int x=r[low];
	while(low<high){
		while(low<high&&r[high]<=x){	//r[high]>=x 改为 r[high]<=x 
			high--;
		}
		if(low<high){
			r[low]=r[high];
			low++;
		}
		
		while(low<high&&r[low]>x){  	//r[low]<x 改为 r[low]>x 
			low++;
		}
		if(low<high){
			r[high]=r[low];
			high--;
		}