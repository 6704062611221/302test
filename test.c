#include<stdio.h>
int main(){
	int n,a[100],b,c,d,e=0,f,g,h,i,j,k,l[100],sum,temp,news[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("a) ");
	for(i=0;i<4;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("b) ");
	for(i=0;i<n;i++){
		if(a[i] > a[2]){
			printf("%d ",a[i]);
		}
	}
	printf("\n");
	printf("c) ");
	for(i=0;i<n;i++){
		if(a[i] > a[2]){
			printf("%d ",i);
		}
	}
	printf("\n");
	printf("d) ");
	sum = a[2] + a[3];
	n=n+1;
	a[n-1] = sum;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("e) ");
	if(a[2] > a[4]){
		a[3] = a[2]-a[4];
	}else{
		a[3] = a[4]-a[2];
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("f) ");
	if(n>5){
		if(a[1]>a[5]){
		  printf("2");
	}else{
		printf("6");
	}
	}
	printf("\n");
	printf("g) ");
	temp = a[1];
	a[1] = a[n-1];
	a[n-1] = temp;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("h) ");
	for(i=0;i<n;i++){
		if(a[i] % 2 == 0){
			news[e] = a[i];
			e=e+1;
		}
	}
	printf("new =[");
	for(i=0;i<e;i++){
		printf("%d",news[i]);
		if(i < e-1){
			printf(" ");
		}
	}
	printf("]");
}
