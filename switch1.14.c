#include <stdio.h>
#include <stdlib.h>

//Switch - Case Structure
//Switch - Case Yapısı 

int main(){
	float a;                  // a : avarage / ortalama (0-100)
	printf("a: ");
	scanf("%f",&a);
	
	switch((int)a/10){        // The value of "switch" must be an integer, so (int) is used .    
		case 10:              //"switch" değeri tam sayı olmalıdır, bu nedenle (int) kullanıldı .
		case 9: 
		 printf("AA");        // 90 <= avarage <= 100 : AA
		break; 
	        case 8:
		case 7: 
		 printf("BB");        // 65 <= avarage < 90 : BB

		break;
                case 6:
        	if(a>=65){
			printf("BB");	   
		    } 
		    else{
		    printf("CC");     // 60 <= avarage < 65  : CC 
 		    }
		break;
		case 5:
		 printf("DD");        // 50 <= avarage < 60 : DD    
		break;
		case 4:
		case 3:
		case 2:
		case 1:
		case 0: 	
		 printf("FF");        // 0 <= avarage < 50 : FF  
		break;     	 
	}
	return 0;
}
