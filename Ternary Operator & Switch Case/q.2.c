#include<stdio.h>
#include<conio.h>

void main()
{
	int choice;
	printf("VI Call Center\n");
	printf("Press 1 For English\n");
	printf("Press 2 For Hindi\n");
	printf("Press 3 For Gujarati\n\n");
	
	printf("Enter Your Choice =");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :printf("Press 1 For internet Recharge\n");
		
	            printf("Press 2 For top Up Recharge\n");
	            
                printf("Press 3 For special Recharge\n\n");
               
               printf("Enter Your Choice =");
               scanf("%d",&choice);
               
               switch(choice)
               {
               	case 1 :printf("You have successfully done a internet Recharge.");
               	break;
               	case 2 :printf("You have successfully done a top Up Recharge.");
               	break;
               	case 3 :printf("You have successfully done a special Recharge.");
               	break;
               	default :printf("Enter Valid Input");
               	
			   }
		
		break;
		case 2 :printf("Internet Recharge ke liye 1 dabaiye\n");
		
                printf("Top Up Recharge ke liye 2 dabaiye\n");
                
                printf("Special Recharge ke liye 3 dabaiye\n\n");
               
               printf("Apki Choice Bataiye : ");
               scanf("%d",&choice);
               
               switch(choice)
               {
               	case 1 :printf("Aapne safaltapurvak Internet Recharge kar liya he.");
               	break;
               	
               	case 2 :printf("Aapne safaltapurvak Top Up Recharge kar liya he.");
               	break;
               	
               	case 3 :printf("Aapne safaltapurvak Special Recharge kar liya he.");
               	break;
               	
               	default : printf("Enter Valid Input");
			   }
		break;
		case 3 :printf("Internet Recharge mate 1 dabavo\n");
		
	    		printf("Top Up Recharge mate 2 dabavo\n");
	    		
				printf("Special Recharge mate 3 dabavo\n\n");
				
				printf("Tamari Chocie Batavo : ");
				scanf("%d",&choice);
				
				switch(choice)
				{
					case 1 :printf("Tame safaltapurvak Internet Recharge karyu chhe.");
					break;
					
					case 2 :printf("Tame safaltapurvak Top Up Recharge karyu chhe.");
					break;
					
					case 3 :printf("Tame safaltapurvak Special Recharge karyu chhe.");
					break;
					
					default : printf("Enter Valid Input");	
				}
		break;
		default :printf("Enter Valid Input");	   
	}
	
}