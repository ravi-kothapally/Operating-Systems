#include<stdio.h>
#include "fifo.c"
#include "sjf.c"
#include "srtf.c"
#include "priority.c"
#include "preemptive.priority.c"
#include "hrrn.c"
#include "longest_remain_time_first.c"
void main()
{
	int o,w,min;
	int n,i,a[10][10],b[10][10],p[10],last[10],algo[10],j,time=0,pr[10][10];
	printf("enter no of queues     :");
	scanf("%d",&n);
	printf("priority of queues     :");
	for(i=0;i<n;i++)
	scanf("%d",&p[i]);
	for(i=0;i<n;i++)
	{   
		printf("no of processes in q%d  :",i+1);	scanf("%d",&last[i]);
		printf("arriaval times         :");	for(j=0;j<last[i];j++) scanf("%d",&a[i][j]);
		printf("burst times            :");  for(j=0;j<last[i];j++) scanf("%d",&b[i][j]);
		
		printf("\nselect scheduling algo\n1.fcfs\n2.sjf   \n3.srtf  \n4.priority     \n5.prempt priority    \n6.hrrn    \n7.lrtf \n");
		scanf("%d",&algo[i]);
		if(algo[i]==4||algo[i]==5)
		{   
			printf("priorities         :");	for(j=0;j<last[i];j++) scanf("%d",&pr[i][j]);
		}
	}
	j=0;
	int op,q,newb;
	printf("\n\nperforming algos\n",i+1);
	while(j<n)
	{
		//addind processes dynamically
		printf("\nwanna addd processes at time=%d to any queue??? 1/0:",time);
		scanf("%d",&op);
		if(op==1)
		{
			printf("enter q number      :");
			scanf("%d",&q);q=q-1;
			printf("enter burst time    :");
			scanf("%d",&newb);
			a[q][last[q]]=time; b[q][last[q]]=newb;
			if(algo[q]==4||algo[q]==5)
			{
				printf("enter priority      :");scanf("%d",pr[q][last[q]]);
			}
			last[q]++;
		}
		j++;
		min=999;
		for(w=0;w<n;w++)
		{
			if(min>p[w])
			{
				min=p[w];i=w;
			}
		}
		p[i]=999;
		printf("\nqueue%d\n%d",i+1,time);
		switch(algo[i])
		{
			case 1:time=fcfs(time,a[i],b[i],last[i]);break;
			case 2:time=sjf(time,a[i],b[i],last[i]);break;
			case 3:time=srtf(time,a[i],b[i],last[i]);break;
			case 4:time=priority(time,a[i],b[i],last[i],pr[i]);break;
			case 5:time=premptivepriority(time,a[i],b[i],last[i],pr[i]);break;
			case 6:time=hrrn(time,a[i],b[i],last[i]);break;
			case 7:time=lrtf(time,a[i],b[i],last[i]);break;
			/*case 8:chart8(i);break;*/
		}
	}
}
