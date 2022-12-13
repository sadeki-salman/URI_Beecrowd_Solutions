#include<stdio.h>
int main() 
{ 
  double N;
  int n100,n50,n20,n10,n5,n2,n1,m50,m25,m10,m5,m1;
  scanf("%lf",&N);
 
  n100 = N/100.0;
  N = N-n100*100;
  n50 = N/50;
  N = N-n50*50;
  n20 = N/20.0;
  N = N-n20*20;
  n10 = N/10.0;
  N = N-n10*10.0;
  n5 = N/5.0;
  N = N-n5*5;
  n2 = N/2.0;
  N = N-n2*2;
  n1 = N/1.0;
  N = N-n1*1;
  
  m50 = N/0.5000;
  N = N-m50*.5;
  m25 = N/0.25000;
  N = N-m25*.25;
  m10 = N/0.1000;
  N = N-m10*.10;
  m5 = N/0.05000;
  N = N-m5*.05;
  m1 = N/0.01000;
  printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",n100,n50,n20,n10,n5,n2,n1,m50,m25,m10,m5,m1);
 
  return 0; 
}