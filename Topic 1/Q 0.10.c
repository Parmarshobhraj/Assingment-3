// find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
int main(){
	double w,l,h,a;
	printf("enter width value :");
	scanf("%lf",&w);
	
	printf("enter lenth value :");
	scanf("%lf",&l);
	
	printf("enter hight value :");
	scanf("%lf",&h);
	
	a=2*(w*l+h*l+h*w);
	printf("area of rectangular prism :%.1lf",a);
}
