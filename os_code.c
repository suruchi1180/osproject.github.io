#include<stdio.h> 
#include<conio.h> 
int main()
{
int totalprocess,length,j,weight,time,i,z;
int ArrivalTime[10],BurstTime[10],P[10],Priority[10],Z[10],Position[10],atime[10],btime[10],T[i];
int reverseprocess[10],rA_t[10],rB_t[10];
int finalP[10],W[10],turnaroundtime[10],fin[10]; 
int ATmax=0,comp,r_comp;
int m=1;
int avgturnaroundtime=0.0; 
int avgwaitingtime=0.0;
int h=0; 
int D=0;
int n=0;
int e=0; 
int c=0;
printf("\n total processes: "); 
scanf("%d",&totalprocess);
for(i=0;i<totalprocess;i++)
{
P[i]=i+1;
printf("\n burst time %d: ",i+1); 
scanf("%d",&BurstTime[i]);
printf("\n  Arrival time  %d: ",i+1); 
scanf("%d",&ArrivalTime[i]);
printf("\n  priority  %d: ",i+1); 
scanf("%d",&Priority[i]);

}
for(i=0;i<totalprocess;i++)
{ T[i]=P[i];
btime[i]=BurstTime[i];
atime[i]=ArrivalTime[i];
 
}
for(i=0;i<totalprocess;i++)
{
Position[i]=i+1;
}
for(i=0;i<totalprocess-1;i++)
{
for(j=0;j<totalprocess-1-i;j++)
{
if(ArrivalTime[j]>ArrivalTime[j+1])
{
int z= ArrivalTime[j];
ArrivalTime[j+1]=z; 
int k= BurstTime[j];
BurstTime[j]=BurstTime[j+1]; 
BurstTime[j+1]=k;

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
comp=ArrivalTime[e]+BurstTime[e]; 
printf("%d\n",ArrivalTime[m]);

if(ArrivalTime[m]>=comp)
{
for(i=1,m=1,e=0;i<15;i++)
{
	printf("************************************\n");
printf("%d\n",i);
if((i==comp)&&(flag=P[e]))
{
printf("now process %d is completed\n",P[e]);
finalP[c]=P[e];
fin[c]=i;
 turnaroundtime[c]=i-atime[P[e]-1];
W[c]=turnaroundtime[c]-btime[P[e]-1];
 c=c+1;
n=n+1;
 if(n==totalprocess)
{
z=i;
goto round;
}
 Priority[e]=0;
 
e=Position[m]-1;
comp=ArrivalTime[m]+BurstTime[e];
 printf("%d\n",comp);
m=m+1;
flag=P[e];
}
for( length=0;length<h;length++)
{
if((i==Z[length])&&(P[totalprocess+length+1]!=P[totalprocess+length]))
{
 


fin[c]=i;
 
printf("process is %d completed \n",P[totalprocess+length]); 
finalP[c]=P[totalprocess+length];
 
turnaroundtime[c]=i-atime[P[totalprocess+length]-1];
W[c]=turnaroundtime[c]-btime[P[totalprocess+length]-1]; 
c=c+1;
n=n+1;
if(n==totalprocess)
{
z=i;
goto round;
}
e=Position[m]-1; m=m+1;
}
}
if((i==ArrivalTime[m])&&(Priority[m]<Priority[e]))
{
if((comp-i==0)||(comp-i==BurstTime[e]))
{
if(comp-i==BurstTime[e])
{
ArrivalTime[totalprocess+h]=ArrivalTime[m]+BurstTime[P[m]-1];
BurstTime[totalprocess+h]=BurstTime[e];
Priority[totalprocess+h]=Priority[e];
P[totalprocess+h]=P[e]; 
Z[h]=ArrivalTime[totalprocess+h]+BurstTime[totalprocess+h];
e=Position[m]-1; 
comp=ArrivalTime[m]+BurstTime[e]; 
m=m+1;
h=h+1;
}
else
{
e=Position[m]-1; 
comp=ArrivalTime[m]+BurstTime[e];
m=m+1; 
flag=P[e];
}
}
else
{
 
printf("left burst time  %d is %d: \n",P[e],comp-i);
 n=n+1;
if(n==totalprocess)
{
z=i;
goto round;
} reverseprocess[D]=P[e];
rA_t[D]=i;
 rB_t[D]=comp-i;
  D=D+1; 
  e=Position[m]-1; 
  comp=i+BurstTime[e];
m=m+1; 
flag=P[e];
}
}
if((i==ArrivalTime[m])&&(Priority[m]>Priority[e])&&(Priority[e]!=0))
{
ArrivalTime[totalprocess+h]=comp; 
BurstTime[totalprocess+h]=BurstTime[m];
Priority[totalprocess+h]=Priority[m];
P[totalprocess+h]=P[m]; 
P[totalprocess+h+1]=20;
Z[h]=ArrivalTime[totalprocess+h]+BurstTime[totalprocess+h]; h=h+1;
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
printf("now process is %d completed\n",P[e]); 
finalP[c]=P[e];
fin[c]=i;
 turnaroundtime[c]=i-atime[P[e]-1];
W[c]=turnaroundtime[c]-btime[P[e]-1]; 
c=c+1;
n=n+1; 
if(n==totalprocess)
{
z=i;
goto round;
} 
Priority[e]=0;

}
 
for( length=0;length<h;length++)
{
if((i==Z[length])&&(P[totalprocess+length+1]!=P[totalprocess+length]))
{
 


fin[c]=i;
 
printf("now process is %d completed \n",P[totalprocess+length]);
finalP[c]=P[totalprocess+length];
 
turnaroundtime[c]=i-atime[P[totalprocess+length]-1];
W[c]=turnaroundtime[c]-btime[P[totalprocess+length]-1]; 
c=c+1;
n=n+1;
if(n==totalprocess)
{
z=i;
goto round;
}
e=Position[m]-1; 
m=m+1;
}
}
if((i==ArrivalTime[m])&&(Priority[m]<Priority[e]))
{
if((comp-i==0)||(comp-i==BurstTime[e]))
{
if(comp-i==BurstTime[e])
{
ArrivalTime[totalprocess+h]=ArrivalTime[m]+BurstTime[P[m]-1];
BurstTime[totalprocess+h]=BurstTime[e];
Priority[totalprocess+h]=Priority[e];
P[totalprocess+h]=P[e]; 
Z[h]=ArrivalTime[totalprocess+h]+BurstTime[totalprocess+h];
e=Position[m]-1; 
comp=ArrivalTime[m]+BurstTime[e];
 m=m+1;
h=h+1;
}
else
{
e=Position[m]-1;
 comp=ArrivalTime[m]+BurstTime[e];
m=m+1; flag=P[e];
}
}
else
{
printf(" left Burst time for process %d is %d: \n",P[e],comp-i); 
n=n+1;
if(n==totalprocess)
{
z=i;
goto round;
 
} reverseprocess[D]=P[e];
rA_t[D]=i; 
rB_t[D]=comp-i;
 D=D+1; 
 e=Position[m]-1;
comp=ArrivalTime[m]+BurstTime[e];
m=m+1; 
flag=P[e];
}
}
if((i==ArrivalTime[m])&&(Priority[m]>Priority[e])&&(Priority[e]!=0))
{
ArrivalTime[totalprocess+h]=comp; 
BurstTime[totalprocess+h]=BurstTime[m];
Priority[totalprocess+h]=Priority[m];
P[totalprocess+h]=P[m]; P[totalprocess+h+1]=20;
Z[h]=ArrivalTime[totalprocess+h]+BurstTime[totalprocess+h]; 
m=m+1;
h=h+1;

 

}
}
round:

{
 
}


for(i=0;i<D-1;i++) 
for(j=0;j<D-1-i;j++)
{
 
if(rA_t[j]>rA_t[j+1])
{
int z= rA_t[j];//sort process according to arrival time rAt[j]=rAt[j+1];
rA_t[j+1]=z;
 int k= rB_t[j];
rB_t[j]=rB_t[j+1]; 
rB_t[j+1]=k;

int r= reverseprocess[j];
 reverseprocess[j]=reverseprocess[j+1];
  reverseprocess[j+1]=r;
}
}
}
int y=0;
 int x=0; 
 int e_vod;
int max=z+1;
 int quanta;
r_comp=z+1+rB_t[y]; 
for(i=0;i<D;i++)
 
{
max=max+rB_t[i];
}
printf("%dcomp\n",r_comp); 
for(i=z+1,quanta=1,y=0;i<=max;i++)
{
printf("%d\n",i);
if((i!=r_comp)&&(quanta==1)&&(i!=z+1))
{
reverseprocess[D+x]=reverseprocess[y];
 rB_t[D+x]=r_comp-i;
  x=x+1;
y=y+1;
 r_comp=i+rB_t[y];
}
if(i==r_comp)
{
 


fin[c]=i;
 
printf(" now process %d completed \n",reverseprocess[y]);
finalP[c]=reverseprocess[y];
 
turnaroundtime[c]=i-atime[reverseprocess[y]-1];
W[c]=turnaroundtime[c]-btime[reverseprocess[y]-1];
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

for(i=0,c=0;i<totalprocess;i++)
{
printf("	TAT	WAITING TIME  of process \n");
 printf("%d	        %d       %d\n",finalP[c],turnaroundtime[c],W[c]); 
avgturnaroundtime= avgturnaroundtime+turnaroundtime[c]/3;
avgwaitingtime=avgwaitingtime+W[c]/3;
 c=c+1;
}
printf(" avg WT is %d\n",avgwaitingtime); 
printf("avg TAT is %d\n",avgturnaroundtime);
return 0;
}

