#include<stdio.h>

float g=9.8;            //global declaration

float G_force(float mass)   //function making for gravityforce
{
    float F_G=mass*g;
    return (F_G);
}
int main()
{
    float M,Force_Gravity;
    printf("Enter the mass of the object : ");
    scanf("%f",&M);
    Force_Gravity=G_force(M);    //calling the function
    printf("\nThe Gravitational Force on mass is --> %0.2fN",Force_Gravity);
    
    return 0;
    
}