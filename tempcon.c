#include<stdio.h>
float cels2farh(float c){
return c*1.8+32;
}
float farh2cels(float f){
return 5*(f-32)/9;
}
void main(){
	char corf;
	float temp;
	printf("C or F >> ");scanf("%c",&corf);
	printf("\ntemp >>  ");scanf("%f",&temp);
	if(corf == 'C'){
		printf("\n%f deg c in farh >> %f\n",temp,cels2farh(temp));
	}
	else if(corf == 'F'){
		printf("\n%f deg f in cels >> %f\n",temp,farh2cels(temp));
	}
	else{
		printf("\nINVALID\n");
	}
}
