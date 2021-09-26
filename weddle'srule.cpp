#include<stdio.h>
#include<math.h>
float y(float x){
    return (pow(2.718281828459045,x))/(1+pow(x,4)); //function of which integration is to be calculated
}
int main(){
    float a,b,h,sum;
    int i,n,m;
 
    printf("Enter lower interval:");
    scanf("%f",&a);
    printf("Enter upper interval:");
    scanf("%f",&b);
    printf("Enter the subinterval:");
    scanf("%d",&n);
    h = (b-a)/n;
    sum=0;
 
        if(n%6==0){
            sum=sum+((3*h/10)*(y(a)+y(a+2*h)+5*y(a+h)+6*y(a+3*h)+y(a+4*h)+5*y(a+5*h)+y(a+6*h)));
            a=a+6*h;
 
        printf("Value of integral is %f\n", sum);
        }
        else{
            printf("Sorry ! Weddle rule is not applicable");
   		}
   }
