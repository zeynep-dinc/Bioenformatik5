#include<stdio.h>
#include<string.h>
#include<conio.h>
int k=0,l=0;
main(){
	int n,m;
	printf("Satir sayisi:");
	scanf("%d",&n);
	printf("Sutun sayisi:");
	scanf("%d",&m);//dizinleri aldý
	float ilkdeger[n][n];//matrisler oluþtu
	int sira1[n],sira2[n];

	if(n==m){
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++){
			if(i<j) {
			printf("%d-%d.deger:",i+1,j+1);
			scanf("%f",&ilkdeger[i][j]);
			}
			//else if(i>j) ilkdeger[i][j]=ilkdeger[j][i];
		else ilkdeger[i][j]=0;
			}	
//printf("Matris Bu Sekilde Onaylýyor musunuz?";)
do{	
float minBul=10000;//minimum olaný bulmak icin degisken
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		if(i<j&&minBul>ilkdeger[i][j]&&ilkdeger[i][j]!=0)//i<j vardý if de
			{
			minBul=ilkdeger[i][j];
						}
						printf("%f\t",ilkdeger[i][j]);
				}	printf("\n");					
}
printf("minBul=%d\n",minBul);
float ikincideger[n][n];
printf("Ikinci Deger Tablosu\n");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){//ikinciHaller burada bulunur
if(ilkdeger[i][j]-minBul!=0 && ilkdeger[i][j]!=0)
{
ikincideger[i][j]=(float)(ilkdeger[i][j]+minBul)/2;
ilkdeger[i][j]=ikincideger[i][j];
printf("%.2f\t",ikincideger[i][j]);	

}
else{
ikincideger[i][j]=0;
ilkdeger[i][j]=0;
ilkdeger[i][j]=ikincideger[i][j];
printf("%d\t",ikincideger[i][j]);
	}

}
printf("\n");	
}

for(int i=0;i<n;i++){

	for(int j=0;j<n;j++){
		if(ikincideger[i][j]==0 && i<j)
	{
	sira1[j]=i+1;
	sira2[j]=j+1;
	}	else
		printf("\t");
	}
	
}//	printf("\n");
for(int i=0;i<n;i++)
printf("\nGenelden ozele %d.sirada %d->%d\n",i+1,sira1[i],sira2[i]);
		k++;
		l++;
		
}while(ilkdeger[k][l]==0);
}
else printf("Kare Matris olmali");
}
