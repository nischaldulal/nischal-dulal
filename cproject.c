#include<stdio.h>
int main(){
    int n;

    

    
    printf("\nenter 0 for sum of two number");
    printf("\nenter 1 for simple interest");
    printf("\nenter 2 for sum of two number");
    printf("\nenter 3 for finnding odd or even ");
     printf("\nenter 4 for finnding positive or negative number ");
     printf("\nenter 5 for sum of input given ");
     printf("\nenter 6for sum of n number ");
     printf("\nenter 7 for factorial finding ");
     printf("\nenter 8 for electricity bill ");
     printf("\nenter 9 for hcf lcm ");
         printf("\nenter 10 for  fibnacii series ");
           printf("\nenter 11 for  number of digits");
           printf("\nenter 12 for  reverse f digit ");
   printf("\nenter 13 for  prime factor");
   printf("\nenter 14 to if number is greater than n1, less than n2 and divisible by 7.   ");
   printf("\nenter 15 for  prime number");
   printf("\nenter any greater number to break");
   printf("\nenter your choice");


    scanf("%d",&n);
    switch(n){
        case 0:{

        int a,b;
        printf("enter the number");
        scanf("%d %d",&a,&b);
        printf("the sum is %d",a+b);
        break;}

        case 1:{

         float p,t,r;
        printf("enter the number");
        scanf("%f %f %f",&p,&t,&r);
        printf("the simple interest is %f",p*t*r*0.01);
        break;}

        case 2:

     {   int z;
        printf("enter the number");
        scanf("%d",&z);
        if (z<0)
        printf("the number is negative");
        else
        printf("the number is positive");
        break; }

        case 3:

      {  int W;
        printf("enter the number");
        scanf("%d",&W);
        if (W%2==0)
        printf("the number is even");
        else
        printf("the number is odd");
        break;}

        case 4:

      {  int d,e,f;
        printf("enter the number");
        scanf("%d %d %d",&d,&e,&f);
        if (d>e && d>f)
        printf("the greatest is %d",d);
        else if (e>d && e>f)
        printf("the greatest is %d",e);
        else
        printf("the greatest is %d",f);
        break;}

        case 5:
       { int O,A,B=0;
        printf("enter the number of input you want to store");
         scanf("%d",&A);
        for(int i=1;i<=A;i++){
         printf("enter the number");
        scanf("%d",&O);
        B=B+O;}

        printf("the sum is %d",B);
        break;}

        case 6:
       { int Q,s=0;
         printf("enter the number");
        scanf("%d",&Q);
        for (int i=1;i<=Q;i++)
            s=s+i;
        printf("%d",s);
        break;}

        case 7:
      {  int J,prod=1;
        printf("enter the number");
        scanf("%d",&J);
        for (int i=1;i<=J;i++)
        prod=prod*i;
        printf("the factorial is is %d",prod);
        break;}

        case 8:

      {  int T;
        printf("enter the unit of electricity");
        scanf("%d",&T);
        if (T<=80)
         printf("the electricity bill is  %d",T*20);
        else if (T<=100) 
         printf("the electricity bill is  %d",(T-80)*8+(80*20));
         else
         printf("the electricity bill is  %d",(20*80)+(8*20)+((T-100)*10));
         break;}

        case 9:
   { int x1, y1, hcf, lcm;

  printf("Enter two integers: ");
  scanf("%d%d", &x1, &y1);
   int a8=x1;
   int b8=y1;
  while (y1 != 0) {
    int temp = y1;
    y1 = x1 % y1;
    x1 = temp;
  }
  hcf = x1;
    if ( (a8*b8)/hcf==0)
    lcm=a8*b8;
    else 
    lcm=(a8*b8)/hcf;

  

  printf("HCF: %d\n", hcf);
  printf("LCM: %d\n", lcm);


        
        break;}

        case 10:
      {
    int n, first = 0, second = 1, next;

    printf("Enter the number of finonacci terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
    
          break;}

       case 11:

      {  int a1,b1=0;
        printf("enter the number");
        scanf("%d",&a1);
        while(a1!=0){
            a1=a1/10;
            b1=b1+1;
         }
         printf("the number of digits is %d",b1);
        
         break;}
         
        case 12:

        
       { int a2,b2,c2=0;
        printf("enter the number");
        scanf("%d",&a2);
        while(a2!=0){
            c2=a2%10;
            b2=b2*10+c2;
            a2=a2/10;
        }
        printf("the reverse of digits is %d",b2);
        break;}

        case 13:
       { int num;
        printf("enter the number");
        scanf("%d",&num);
        for(int i=2; num>1;i++){
            while(num%i==0){
            printf("%d",i);
            num=num/i;
            }
        }
            break;}

        case 14:
      {  int n1,n2,n3;
        printf("enter the n1 ,n2 and you number");
        scanf("%d %d %d",&n1,&n2 ,&n3); 
       if(n3>n1)
         printf("the number is greater than n1\n");
        else 
        printf("the number is not greater than n1\n");
         if(n3<n2)
         printf("the number is less than n2\n");
         else 
         printf("the number is not less than n2\n");
         if (n3%7==0)
         printf("the number is divisible by 7\n");
         else 
          printf("the number is not divisible by 7\n");
        
       

        break;}
        case 15:
        {
        int a;p=0;
        printf("enter the number");
        scanf("%d",&a);
        for(int i=2;i<a;i++)
{ if(a%i==0){
    p=1;
break;}
if (a==1)
printf(" prime");
else
printf("not prime");
break;}



      

        default:
        printf("out of range");
        break;




        

        
        


    
  return 0;
}}
