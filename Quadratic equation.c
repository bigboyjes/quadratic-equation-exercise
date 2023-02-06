# include <stdio.h>
# include <math.h>
int main(){
float x1,x2,ip,rp,d,a,b,c;   //ip-imaginary part
printf("a=");                //rp-real part and d-determinant
scanf("%f", &a);
printf("\nb=");
scanf("%f",&b);
printf("c=");
scanf("%f", &c);

d=(b*b)-4*a*c;  //determant=(b value squared)-4 *a value *c value
if (d>0){
x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);
printf("x1= %.1f and x2= %.1f", x1,x2);
}
else if(d==0){
x1=(-b)/(2*a);
printf("x1=x2= %.1f",x1);
}
else {
rp=-b/(2*a);        //real part= -b value/ 2*a value
ip=sqrt(d)/(2*a);   //imaginary part=squareroot oof d/2*a value
printf("%.1f + %.1fi",rp,ip); //i represents imaginary part
printf("\n%.1f - %.1fi",rp,ip);
}
return 0;
}

