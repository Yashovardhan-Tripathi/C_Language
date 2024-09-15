#include<stdio.h>
    float avg(float s)
    {
        float Avg=(s)/3;
        return (Avg);
    }
float sum (float a,float b,float c)
{
    return(a+b+c);
}
int main()
{
    float a,b,c;
    printf("Enter the Numbers");
    scanf("%f %f %f",&a,&b,&c);
    float s=sum(a,b,c);
    printf("%0.0f\n",s);
    float Avg=avg(s);
    printf("%0.1f",Avg);
    return 0;
}
// // // #include<stdio.h>

// //     float avg(int s)
// //     {5
// //         float Avg=s/3;
// //         return (Avg);
// //     }

// //     int sum(int a,int b, int c)
// //     {
// //         int Sum=a+b+c;
// //         return (Sum);
// //     }
// //     int main()
// //     {
// //         int a,b,c,Sum;
// //         printf("Enter the Numbers\n");
// //         scanf("%d %d %d",&a,&b,&c);
// //         int s=sum(a,b,c);
// //         printf("%d is the Sum\n",s);
// //         float Avg=avg(s);
// //         printf("%0.2f is the average",Avg);
// //         return 0;
// //     }
// #include<stdio.h>
// int main()
// {
//     printf("%d",3/3);
//     return 0;
// }