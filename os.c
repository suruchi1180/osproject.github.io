#include<stdio.h> 
#include<conio.h> 
int main()
{
int n_p,l,j,w,t,i,z;
int A_t[10],B_t[10],P[10],Priority[10],Z[10],Position[10],a_t[10],b_t[10],q[i];
int r_P[10],rA_t[10],rB_t[10];
int f_P[10],W[10],t_at[10],fin[10]; 
int ATmax=0,comp,r_comp;
int m=1;
int av_tat=0.0; 
int av_wait=0.0;
int h=0; 
int d=0;
int n=0;
int e=0; 
int c=0;
printf("\nEnter the no. of processes: "); 
scanf("%d",&n_p);
printf("-----------------------------------------------\n");
for(i=0;i<n_p;i++)
{
P[i]=i+1;
printf("\n enter the burst time of process %d: ",i+1); 
scanf("%d",&B_t[i]);
printf("\n enter the Arrival time of process %d: ",i+1); 
scanf("%d",&A_t[i]);
printf("\n enter the priority of process %d: ",i+1); 
scanf("%d",&Priority[i]);

}
for(i=0;i<n_p;i++)//for matching in final step
{ q[i]=P[i];
b_t[i]=B_t[i];
a_t[i]=A_t[i];
 
}
for(i=0;i<n_p;i++)
{
Position[i]=i+1;
}
for(i=0;i<n_p-1;i++)
{
for(j=0;j<n_p-1-i;j++)
{
if(A_t[j]>A_t[j+1])
{
int z= A_t[j];//sort process according to arrival time A_t[j]=A_t[j+1];
A_t[j+1]=z; 
int k= B_t[j];
B_t[j]=B_t[j+1]; 
B_t[j+1]=k;

int r= P[j];
 P[j]=P[j+1];
  P[j+1]=r;

int s=Priority[j]; 
Priority[j]=Priority[j+1];
 Priority[j+1]=s;
}
}
}
int flag= P[e]; 
comp=A_t[e]+B_t[e]; 
printf("%d\n",A_t[m]);

if(A_t[m]>=comp)
{
for(i=1,m=1,e=0;i<15;i++)
{
	printf("-----------------------------------------------\n");
printf("%d\n",i);
if((i==comp)&&(flag=P[e]))
{
printf("process %d Done\n",P[e]);
f_P[c]=P[e];
fin[c]=i;
 t_at[c]=i-a_t[P[e]-1];
W[c]=t_at[c]-b_t[P[e]-1];
 c=c+1;
n=n+1;
 if(n==n_p)
{
z=i;
goto round;
}
 Priority[e]=0;
 
e=Position[m]-1;
comp=A_t[m]+B_t[e];
 printf("%d\n",comp);
m=m+1;
flag=P[e];
}
for( l=0;l<h;l++)
{
if((i==Z[l])&&(P[n_p+l+1]!=P[n_p+l]))
{
 


fin[c]=i;
 
printf("Process %d done \n",P[n_p+l]); 
f_P[c]=P[n_p+l];
 
t_at[c]=i-a_t[P[n_p+l]-1];
W[c]=t_at[c]-b_t[P[n_p+l]-1]; 
c=c+1;
n=n+1;
if(n==n_p)
{
z=i;
goto round;
}
e=Position[m]-1; m=m+1;
}
}
if((i==A_t[m])&&(Priority[m]<Priority[e]))
{
if((comp-i==0)||(comp-i==B_t[e]))//just arrived or just finished
{
if(comp-i==B_t[e])
{
A_t[n_p+h]=A_t[m]+B_t[P[m]-1];
B_t[n_p+h]=B_t[e];
Priority[n_p+h]=Priority[e];
P[n_p+h]=P[e]; 
Z[h]=A_t[n_p+h]+B_t[n_p+h];
e=Position[m]-1; 
comp=A_t[m]+B_t[e]; 
m=m+1;
h=h+1;
}
else
{
e=Position[m]-1; 
comp=A_t[m]+B_t[e];
m=m+1; 
flag=P[e];
}
}
else
{
 
printf("Burst time left for process %d is %d: \n",P[e],comp-i);
 n=n+1;
if(n==n_p)
{
z=i;
goto round;
} r_P[d]=P[e];
rA_t[d]=i;
 rB_t[d]=comp-i;
  d=d+1; 
  e=Position[m]-1; 
  comp=i+B_t[e];
m=m+1; 
flag=P[e];
}
}
if((i==A_t[m])&&(Priority[m]>Priority[e])&&(Priority[e]!=0))
{
A_t[n_p+h]=comp; 
B_t[n_p+h]=B_t[m];
Priority[n_p+h]=Priority[m];
P[n_p+h]=P[m]; 
P[n_p+h+1]=20;
Z[h]=A_t[n_p+h]+B_t[n_p+h]; h=h+1;
}
}
}

else
{
for(i=1,m=1,e=0;i<15;i++)
{
printf("%d\n",i);
if((i==comp)&&(flag=P[e]))
{
printf("process %d Done\n",P[e]); 
f_P[c]=P[e];
fin[c]=i;
 t_at[c]=i-a_t[P[e]-1];
W[c]=t_at[c]-b_t[P[e]-1]; 
c=c+1;
n=n+1; 
if(n==n_p)
{
z=i;
goto round;
} 
Priority[e]=0;

}
 
for( l=0;l<h;l++)
{
if((i==Z[l])&&(P[n_p+l+1]!=P[n_p+l]))
{
 


fin[c]=i;
 
printf("Process %d done \n",P[n_p+l]);
f_P[c]=P[n_p+l];
 
t_at[c]=i-a_t[P[n_p+l]-1];
W[c]=t_at[c]-b_t[P[n_p+l]-1]; 
c=c+1;
n=n+1;
if(n==n_p)
{
z=i;
goto round;
}
e=Position[m]-1; 
m=m+1;
}
}
if((i==A_t[m])&&(Priority[m]<Priority[e]))
{
if((comp-i==0)||(comp-i==B_t[e]))
{
if(comp-i==B_t[e])
{
A_t[n_p+h]=A_t[m]+B_t[P[m]-1];
B_t[n_p+h]=B_t[e];
Priority[n_p+h]=Priority[e];
P[n_p+h]=P[e]; 
Z[h]=A_t[n_p+h]+B_t[n_p+h];
e=Position[m]-1; 
comp=A_t[m]+B_t[e];
 m=m+1;
h=h+1;
}
else
{
e=Position[m]-1;
 comp=A_t[m]+B_t[e];
m=m+1; flag=P[e];
}
}
else
{
printf("Burst time left for process %d is %d: \n",P[e],comp-i); 
n=n+1;
if(n==n_p)
{
z=i;
goto round;
 
} r_P[d]=P[e];
rA_t[d]=i; 
rB_t[d]=comp-i;
 d=d+1; 
 e=Position[m]-1;
comp=A_t[m]+B_t[e];
m=m+1; 
flag=P[e];
}
}
if((i==A_t[m])&&(Priority[m]>Priority[e])&&(Priority[e]!=0))
{
A_t[n_p+h]=comp; 
B_t[n_p+h]=B_t[m];
Priority[n_p+h]=Priority[m];
P[n_p+h]=P[m]; P[n_p+h+1]=20;
Z[h]=A_t[n_p+h]+B_t[n_p+h]; 
m=m+1;
h=h+1;

 

}
}
round:

{
 
}


for(i=0;i<d-1;i++) 
for(j=0;j<d-1-i;j++)
{
 
if(rA_t[j]>rA_t[j+1])
{
int z= rA_t[j];//sort process according to arrival time rAt[j]=rAt[j+1];
rA_t[j+1]=z;
 int k= rB_t[j];
rB_t[j]=rB_t[j+1]; 
rB_t[j+1]=k;

int r= r_P[j];
 r_P[j]=r_P[j+1];
  r_P[j+1]=r;
}
}
}
int y=0;
 int x=0; 
 int e_vod;
int max=z+1;
 int quanta;
r_comp=z+1+rB_t[y]; 
for(i=0;i<d;i++)
 
{
max=max+rB_t[i];
}
printf("%dcomp\n",r_comp); 
for(i=z+1,quanta=1,y=0;i<=max;i++)
{
printf("%d\n",i);
if((i!=r_comp)&&(quanta==1)&&(i!=z+1))
{
r_P[d+x]=r_P[y];
 rB_t[d+x]=r_comp-i;
  x=x+1;
y=y+1;
 r_comp=i+rB_t[y];
}
if(i==r_comp)
{
 


fin[c]=i;
 
printf("process %d done\n",r_P[y]);
f_P[c]=r_P[y];
 
t_at[c]=i-a_t[r_P[y]-1];
W[c]=t_at[c]-b_t[r_P[y]-1];
 c=c+1;
y=y+1;
 r_comp=i+rB_t[y];
}
quanta=quanta+1;
 if(quanta==3)
{
quanta=1;
}
}

for(i=0,c=0;i<n_p;i++)
{
printf("Process	TAT	WAITING TIME\n");
 printf("%d	        %d       %d\n",f_P[c],t_at[c],W[c]); 
av_tat= av_tat+t_at[c]/3;
av_wait=av_wait+W[c]/3;
 c=c+1;
}
printf("Average waiting time is %d\n",av_wait); 
printf("Average turn around time is %d\n",av_tat);
return 0;
}

