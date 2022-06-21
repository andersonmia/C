#include<stdio.h>
#include<math.h>
#include<stdlib.h>

typedef struct{
char name[50];
char address[15];
char dob[15];
char gender;
float p;
float r;
float t;
float emi;
float tlp;
}person;

int main(){
person p1[5];
person p2[5];
FILE *fptr;
int i;

fptr = fopen("file.bin","wb");

for(i = 0; i < 5; i++){

printf("Enter name: ");
gets(p1[i].name);
printf("\nEntered name: %s",p1[i].name);

printf("\nEnter address: ");
scanf("%s",p1[i].address);
printf("\nEntered address: %s",p1.address);

printf("\nEnter DOB in the format dd/mm/yyyy: ");
scanf("%s",p1[i].dob);
printf("\nEntered dob: %s",p1[i].dob);

printf("\nEnter gender: ");
scanf("%c",&p1[i].gender);
printf("\nEntered gender: %c",p1[i].gender);

printf("\nEnter principal amount in RwF: ");
scanf("%f",&p1[i].p);
printf("\nEntered principal amount: %2f",p1[i].p);

printf("\nEnter interest rate percent:");
scanf("%f",&p1[i].r);
printf("\nEntered interest rate percent: %1f",p1[i].r);

printf("\nEnter payment time in years: ");
scanf("%f",&p1[i].t);
printf("\nEntered time: %1f",p1[i].t);

p1.r = p1.r/(12 * 100);
p1.t = p1.t * 12;
p1.emi = (p1.p * p1.r * pow(1 + p1.r,p1.t)/(pow(1 + p1.r,p1.t)-1));
p1.tlp = (p1.emi * p1.t);

printf("\n\nBorrower basic information\n ============================");
printf("\nName: %s",p1[i].name);
printf("\nAddress: %s",p1[i].address);
printf("\nDate of birth: %s",p1[i].dob);

printf("\n\nPayment information\n=====================================");
printf("\nMonthly EMI is RwF %3f",p1[i].emi);
printf("\nTotal amount to be paid in %1f months is %3f",p1[i].t,p1[i].tlp);

}
fwrite(p1,sizeof(p1),1,fptr);
fclose(fptr);

fptr = fopen("file.bin","wb");
fread(p2,sizeof(p2),1,fptr);

for(i = 0; i < 5; i++){

printf("\nName: %s\nAddress: %s\nDate of birth: %s\nMonthly EMI is RwF %3f\nTotal amount to be paid in %1f months is %3f",p2[i].name,p2[i].address,p2[i].dob,p2[i].emi,p2[i].t,p2[i].tlp);

}
fclose(fptr);

return 0;
}
