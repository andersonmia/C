#include<stdio.h>
int main(){
	int age;
	int income;
	int tax_percent;
	double tax;
if (age < 60){ 
    if (income <= 250000){ 
        tax_percent = 0;  
    }else if (income >= 250001 && income <= 500000){ 
        tax_percent = 0.1; 
    }else if (income >= 500001 && income <= 1000000){ 
        tax_percent = 0.2 ;
    }else{ 
        tax_percent = 0.3; 
    }  
}else if (age >= 60 && age < 80){ 
    if (income <= 300000){ 
        tax_percent = 0; 
    }else if (income >= 300001 && income <= 500000){ 
        tax_percent = 0.1; 
    }else if (income >= 500001 && income <= 1000000){ 
        tax_percent = 0.2; 
    }else{ 
        tax_percent = 0.3; 
    }  
}else{ 
    if(income <= 500000){ 
        tax_percent = 0 ;
    }else if (income >= 500001 && income <= 1000000){ 
        tax_percent = 0.2; 
    }else{ 
        tax_percent = 0.3 ;
    }  
} 
 
tax = tax_percent * income; 
}
