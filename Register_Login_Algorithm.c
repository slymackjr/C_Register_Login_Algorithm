#include <stdio.h>
#include <stdlib.h> // for system("cls")-cls for windows 
#include <string.h>
// design input for various info of different variation of people.
/*design a software a person can input there login in credentials and other requirements for the system*/

struct users {
	char firstName[20];
	char middleName[20];
	char surName[20];
	char setPassword[20];
	char setPasswordConfirm[20];
	char setUsername[20];
	char setEmail[30];
	char password[20];
	char username[20];
	char email[30];	
	char birthDate[20];
	int choice;
}user[100];


int main(){

	int i;
	printf("\t\t\t\tWELCOME TO DEVELOPERS SITE OF IDEAS AND PRACTICE\n");
	printf("\t\t\t\t************************************************\n");
	for(i=0;i<100;i++)
	{
	printf("1.Register \n ");
	scanf("%d",&user[i].choice);
	system("cls");

	
	switch(user[i].choice){
		
		case 1:
			printf("\t\t\t\tWELCOME TO DEVELOPERS SITE OF IDEAS AND PRACTICE\n");
			printf("\t\t\t\t************************************************\n");
			printf("Enter your Firstname: ");
			scanf("%s",user[i].firstName);
			system("cls");
			printf("\t\t\t\tWELCOME TO DEVELOPERS SITE OF IDEAS AND PRACTICE\n");
			printf("\t\t\t\t************************************************\n");
			printf("Enter your Middlename: ");
			scanf("%s",user[i].middleName);
			system("cls");
			printf("\t\t\t\tWELCOME TO DEVELOPERS SITE OF IDEAS AND PRACTICE\n");
			printf("\t\t\t\t************************************************\n");
			printf("Enter your Surname: ");
			scanf("%s",user[i].surName);
			system("cls");
			printf("\t\t\t\tWELCOME TO DEVELOPERS SITE OF IDEAS AND PRACTICE\n");
			printf("\t\t\t\t************************************************\n");
			printf("Enter your Birthdate: ");
			scanf("%s",user[i].birthDate);
			system("cls");
			printf("\t\t\t\tWELCOME TO DEVELOPERS SITE OF IDEAS AND PRACTICE\n");
			printf("\t\t\t\t************************************************\n");
			printf("Enter your Email: ");
			scanf("%s",user[i].email);
			system("cls");
			printf("\t\t\t\tWELCOME TO DEVELOPERS SITE OF IDEAS AND PRACTICE\n");
			printf("\t\t\t\t************************************************\n");
			printf("Enter your username: ");
			scanf("%s",user[i].setUsername);
			system("cls");
			printf("\t\t\t\tWELCOME TO DEVELOPERS SITE OF IDEAS AND PRACTICE\n");
			printf("\t\t\t\t************************************************\n");
			printf("Enter your password: ");
			scanf("%s",user[i].setPassword);
			system("cls");
			 while(1)
			{
				printf("\t\t\t\tWELCOME TO DEVELOPERS SITE OF IDEAS AND PRACTICE\n");
				printf("\t\t\t\t************************************************\n");
				printf("Confirm your password: ");
				scanf("%s",user[i].setPasswordConfirm);
				system("cls");
				int verify= strcmp(user[i].setPassword,user[i].setPasswordConfirm);
				if(verify==0)break;
			}
			break;
			default:
				printf("\t\t\t\tWELCOME TO DEVELOPERS SITE OF IDEAS AND PRACTICE\n");
				printf("\t\t\t\t************************************************\n");
				printf("Invalid choice");
				system("cls");
			
	}
	printf("\t\t\t\tWELCOME TO DEVELOPERS SITE OF IDEAS AND PRACTICE\n");
	printf("\t\t\t\t************************************************\n");	
	printf("WELCOME TO LOGIN TO OUR SITE\n");
	while(1){
			printf("Enter you username: ");
			scanf("%s",user[i].username);
			system("cls");
			printf("\t\t\t\tWELCOME TO DEVELOPERS SITE OF IDEAS AND PRACTICE\n");
			printf("\t\t\t\t************************************************\n");
			printf("WELCOME TO LOGIN TO OUR SITE\n");
			printf("Enter your password: ");
			scanf("%s",user[i].password);
			system("cls");
			int confirm=strcmp(user[i].password,user[i].setPassword);
			int confirmUsername=strcmp(user[i].username,user[i].setUsername);
			
			if(confirm==0 && confirmUsername==0){
				printf("WELCOME TO OUR SERVICE SYSTEM!!\n");
				//system("cls");
				break;
			}
			else{
			printf("Invalid username or password\n");
			//system("cls");
			continue;
			}
	}
	
	
}
	
	
	
}

void storeCredential(){
	// create a file system to store and check valid information from users
}  
