#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
void Rout(void);
void reg(void);
int checkAscii (char array[]);
struct inf{
	char s_rollno[100];
	char s_name[200];
	char s_route[100];
	char s_stop[100];
	
} std;

struct einf{
	char emp[10];
	char e_name[20];
	char e_route[10];
	char e_stop[10];
};



int main()
{
    
    int counterg=0;
 	char name[50];
    char area[50];
    char chr, ashir[100], b=0, v=0;
    char space,space2,space3;
    int e=0;
    int l=0;
    char routenoo;
    char check[100];
    int p=0;
    int c=0;
    int ic=1;
    char word, route, stop[10], roll[50];
    FILE *ftp;
    
    
    int ch, ch2, batch,*ptr_batch;
    int rollno,*ptr_rollno, i, exit, password, routes, k, ip_route,j, code;
    int save_roll_19[5]={1234, 4567, 3423, 3242, 2342};
    int save_roll_20[5]={4534, 3453, 2348, 7567, 2942};
    int save_roll_21[5]={1235, 1236, 1237, 1238, 1239};
    int save_roll_22[5]={2185, 2143, 4098, 4208, 4783};
    int save_pass_19[5]={911,922,933,944,955};
    int save_pass_20[5]={811,822,833,844,855};   
    int save_pass_21[5]={711,722,733,744,755};
    int save_pass_22[5]={611,622,633,644,655};
    int save_code_19[5]={111,222,333,444,555};
    int save_code_20[5]={666,777,888,999,000};
    int save_code_21[5]={122,133,144,155,166};
    int save_code_22[5]={211,233,244,255,266};
    FILE *stu;
    
    
    int ip_emp, ip_emp_chance=1, cnt2=0, cnt1=0, ip_code;               // ip = input
    int ip_route_chance=1, ip_pass_chance=1, ip_code_chance=1, ip_pass;
    int emp_num[15]={124,122,123,120,121,125,126,127,128,129,130,131,132,133,134};                        
    int emp_pass[15]={500,501,502,503,504,505,506,507,508,509,510,511,522,533,544};
    int emp_code[15]={476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490};
      

    mainmenu:
    do
	{
      system("cls");
      //system("Color De");
      printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
      printf("      FAST POINT MANAGEMENT SYSTEM");
      printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
      printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  MAIN MENU  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
      printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
      printf("\n1.Student\n2.Faculty\n3.Exit");
      printf("\n\n\t\t\tENTER YOUR CHOICE");
      scanf("%d",&ch);
      
      switch (ch)
      {
           
		case 1:
        printf("\n1.Point details\n2.Registration\n3.Registered");
        printf("\n\n\t\t\tENTER YOUR CHOICE");
        scanf("%d",&ch2);
       
        switch (ch2)
        {

          case 1:  
            printf("\nEnter batch year: ");
            scanf("%d", &batch );
            ptr_batch=&batch;
            
            switch(*ptr_batch)
            {
   
                case 2019:
                
                  printf("Enter your roll number: 19k-");
                   alpha1:
                   scanf("%d",&rollno);
                   ptr_rollno=&rollno;
                   
                   for(i=0; i<5; i++)
                   {
                      
                        if(*ptr_rollno==save_roll_19[i])
                      {

                          printf("Enter the password: ");
                          ip_pass_chance=1;
                          prime1:
                          scanf("%d", &ip_pass);
                          if(ip_pass==save_pass_19[i])
                          {
                            
							  Rout();
							  printf("\n\n\nFees per semester : PKR. 30,000");
							  printf("\n\n\nEnter 0 to return to Main Menu: ");
							  scanf("%d",&ip_code);
							  if(ip_code==0)
							  {
							  	goto mainmenu;
							  }
						    
                         }
                          else
                          {
                            if(ip_pass_chance!=5)
                           {
                             printf("Wrong password!\nEnter Correct password: ");
                             ip_pass_chance=ip_pass_chance+1;
                             goto prime1;
                           }
                            else
                             ip_emp_chance=5;
                         }
					     
					 }
					}
					  if(ip_emp_chance!=5)
                    {
                        printf("Wrong Roll number!\nEnter Correct Roll number:19k-");
                        ip_emp_chance=ip_emp_chance+1;
                        goto alpha1;
                    }
                
            
                break;
               
                case 2020:
                
                   
                   printf("Enter your roll number: 20k-");
                   alpha2:
                   scanf("%d",&rollno);
                   ptr_rollno=&rollno;
                   
                   for(i=0; i<5; i++)
                   {
                      
                        if(*ptr_rollno==save_roll_20[i])
                      {

                          printf("Enter the password: ");
                          ip_pass_chance=1;
                          prime2:
                          scanf("%d", &ip_pass);
                          if(ip_pass==save_pass_20[i])
                          {
                            
							  Rout();
							  printf("\n\n\nFees per semester : PKR. 30,000");
							  printf("\n\n\nEnter 0 to return to Main Menu: ");
							  scanf("%d",&ip_code);
							  if(ip_code==0)
							  {
							  	goto mainmenu;
							  }
						       
                         }
                          else
                          {
                            if(ip_pass_chance!=5)
                           {
                             printf("Wrong password!\nEnter Correct password: ");
                             ip_pass_chance=ip_pass_chance+1;
                             goto prime2;
                           }
                            else
                             ip_emp_chance=5;
                         }
					     
					 }
					}
					  if(ip_emp_chance!=5)
                    {
                        printf("Wrong Roll number!\nEnter Correct Roll number: 20k-");
                        ip_emp_chance=ip_emp_chance+1;
                        goto alpha2;
                    }
                
               
                break;
               
                case 2021:
                
                   printf("Enter your roll number: 21k-");
                   alpha3:
                   scanf("%d",&rollno);
                   ptr_rollno=&rollno;
                   
                   for(i=0; i<5; i++)
                   {
                      
                        if(*ptr_rollno==save_roll_21[i])
                      {

                          printf("Enter the password: ");
                          ip_pass_chance=1;
                          prime3:
                          scanf("%d", &ip_pass);
                          if(ip_pass==save_pass_19[i])
                          {
                            
							  Rout();
							  printf("\n\n\nFees per semester : PKR. 30,000");
							  printf("\n\n\nEnter 0 to return to Main Menu: ");
							  scanf("%d",&ip_code);
							  if(ip_code==0)
							  {
							  	goto mainmenu;
							  }
						      
                         }
                          else
                          {
                            if(ip_pass_chance!=5)
                           {
                             printf("Wrong password!\nEnter Correct password: ");
                             ip_pass_chance=ip_pass_chance+1;
                             goto prime3;
                           }
                            else
                             ip_emp_chance=5;
                         }
					     
					 }
					}
					  if(ip_emp_chance!=5)
                    {
                        printf("Wrong Roll number!\nEnter Correct Roll number:21k-");
                        ip_emp_chance=ip_emp_chance+1;
                        goto alpha3;
                    }
                 
                   
                break;
               
                case 2022:
                
                   
               printf("Enter your roll number: 22k-");
                   alpha4:
                   scanf("%d",&rollno);
                   ptr_rollno=&rollno;
                   
                   for(i=0; i<5; i++)
                   {
                      
                        if(*ptr_rollno==save_roll_22[i])
                      {

                          printf("Enter the password: ");
                          ip_pass_chance=1;
                          prime4:
                          scanf("%d", &ip_pass);
                          if(ip_pass==save_pass_22[i])
                          {
                            
							  Rout();
							  printf("\n\n\nFees per semester : PKR. 30,000");
							  printf("\n\n\nEnter 0 to return to Main Menu: ");
							  scanf("%d",&ip_code);
							  if(ip_code==0)
							  {
							  	goto mainmenu;
							  }
						     
                         }
                          else
                          {
                            if(ip_pass_chance!=5)
                           {
                             printf("Wrong password!\nEnter Correct password: ");
                             ip_pass_chance=ip_pass_chance+1;
                             goto prime4;
                           }
                            else
                             ip_emp_chance=5;
                         }
					     
					 }
					}
					  if(ip_emp_chance!=5)
                    {
                        printf("Wrong Roll number!\nEnter Correct Roll number: 22k-");
                        ip_emp_chance=ip_emp_chance+1;
                        goto alpha4;
                    }
                
                break;
           }
           break;

       
       
            case 2:
           
             printf("\nEnter batch year: ");
             scanf("%d", &batch );
             ptr_batch=&batch;
             
              switch(*ptr_batch)
              {
   
                case 2019:
                 
                   printf("Enter your roll number: 19k-");
                   alpha:
                   scanf("%d",&rollno);
                   ptr_rollno=&rollno;
                   
                   for(i=0; i<5; i++)
                   {
                      
                        if(*ptr_rollno==save_roll_19[i])
                      {

                          printf("Enter the password: ");
                          ip_pass_chance=1;
                          Aashir1:
                          scanf("%d", &ip_pass);
                          if(ip_pass==save_pass_19[i])
                          {
                            printf("\nEnter route (press '00' to display route): ");
                            ip_route_chance=1;
						    Aaashir1:
                            scanf("%d", &ip_route);
						    if(ip_route==00)
						    {
							  Rout();
							  printf("\n\n\nEnter route: ");
							  goto Aaashir1;
						    }   
                            if(ip_route>0 && ip_route<6 && ip_route!=00)
                            {
                               printf("\n\n\nSubmit 30000PKR in any branch of HBL Bank. You may submit fee amount online through the website www.pointFAST.com.");
                               printf("\n\nIf Submitted, Enter the given code: ");
                               ip_code_chance=1;
                               Aaaashir1:
                               scanf("%d", &ip_code);
                               if(ip_code==save_code_19[i])
                               {
                                  system("CLS");
                                  printf("\t\t\t\tRegistration Form\n");
								  printf("Roll  number: ");
                                  scanf("%s", &std.s_rollno);
                                  printf("Name: ");
                                  scanf("%s", &std.s_name);
								  printf("Route no: ");
                                  scanf("%s", &std.s_route);
                                  printf("Stop: ");
                                  scanf("%s", &std.s_stop);
                                  file:
                                  //FILE *stu;
                                  stu=fopen("registrations.txt","a");
                                  if(stu==NULL)
                                  {
                                  	goto file; 
								  }
								  fputs(std.s_rollno,stu);
								  fputs(" ",stu);
								  fputs(std.s_name,stu);
								  fputs(" ",stu);
								  fputs(std.s_route,stu);
								  fputs(" ",stu);
								  fputs(std.s_stop,stu);
								  fputs("\n", stu);
                                  fclose(stu);
                                  
                                  system("CLS");
                                  printf("\n\n\n\nCONGRATULATIONS! You are registered. You can get your point card from one stop.");
                                  printf("\n\n\n\n\n\n\n\n\n\n\n\nPress '0' to go to main menu.");
                                  scanf("%d", &exit);
                                  if(exit==0)
                                  {
                                        goto mainmenu;
                                  }
                         
                               }
                               else
                               {
                                 if(ip_code_chance!=5)
                                 {
                                    printf("Wrong code!\nEnter Correct Code: ");
                                    ip_code_chance=ip_code_chance+1;
                                    goto Aaaashir1;
                                 }
                                 else
                                 ip_emp_chance=5;
                               }

                            }
                            
							else
                            {
                               if(ip_route_chance!=5)
                               {
                                   printf("Wrong route number!\nEnter Correct route number: ");
                                   ip_route_chance=ip_route_chance+1;
                                   goto Aaashir1;
                               }
                               else 
						           ip_emp_chance=5;
                            }

                        } 
                        else
                       {
                          if(ip_pass_chance!=5)
                          {
                             printf("Wrong password!\nEnter Correct password: ");
                             ip_pass_chance=ip_pass_chance+1;
                             goto Aashir1;
                          }
                          else
                             ip_emp_chance=5;
                       
                       }
                     
					  }
					}
					  if(ip_emp_chance!=5)
                    {
                        printf("Wrong Roll number!\nEnter Correct Roll number: 19k-");
                        ip_emp_chance=ip_emp_chance+1;
                        goto alpha;
                    }
                
                break;

                case 2020:
                 
                   printf("Enter your roll number: 20k-");
                   beta:
                   scanf("%d",&rollno);
                   ptr_rollno=&rollno;
                   
                   for(i=0; i<5; i++)
                   {
                      
                        if(*ptr_rollno==save_roll_20[i])
                      {

                          printf("Enter the password: ");
                          ip_pass_chance=1;
                          Aashir2:
                          scanf("%d", &ip_pass);
                          if(ip_pass==save_pass_20[i])
                          {
                            printf("\nEnter route (press '0' to display route): ");
                            ip_route_chance=1;
						    Aaashir2:
                            scanf("%d", &ip_route);
						    if(ip_route==0)
						    {
							  Rout();
							  printf("\n\n\nEnter route: ");
							  goto Aaashir2;
						    }   
                            if(ip_route>0 && ip_route<6 && ip_route!=00)
                            {
                               printf("\n\n\nSubmit 30000PKR in any branch of HBL Bank. You may submit fee amount online through the website www.pointFAST.com.");
                               printf("\n\nIf Submitted, Enter the given code: ");
                               ip_code_chance=1;
                               Aaaashir2:
                               scanf("%d", &ip_code);
                               if(ip_code==save_code_20[i])
                               {
                               	  system("CLS");
                               	  printf("\t\t\t\tRegistration Form\n");
                                  printf("Roll  number: ");
                                  scanf("%s", &std.s_rollno);
                                  printf("Name: ");
                                  scanf("%s", &std.s_name);
								  printf("Route no: ");
                                  scanf("%s", &std.s_route);
                                  printf("Stop: ");
                                  scanf("%s", &std.s_stop);
                                  file1:
                                  //FILE *stu;
                                  stu=fopen(".txt","a");
                                  if(stu==NULL)
                                  {
                                  	goto file1; 
								  }
								  fputs(std.s_rollno,stu);
								  fputs(" ",stu);
								  fputs(std.s_name,stu);
								  fputs(" ",stu);
								  fputs(std.s_route,stu);
								  fputs(" ",stu);
								  fputs(std.s_stop,stu);
								  fputs("\n", stu);
                                  fclose(stu);
                                  
                               	
                                  system("CLS");
                                  printf("\n\n\n\nCONGRATULATIONS! You are registered. You can get your point card from one stop.");
                                  printf("\n\n\n\n\n\n\n\n\n\n\n\nPress '0' to go to main menu.");
                                  scanf("%d", &exit);
                                  if(exit==0)
                                  {
                                        goto mainmenu;
                                  }
                         
                               }
                               else
                               {
                                 if(ip_code_chance!=5)
                                 {
                                    printf("Wrong code!\nEnter Correct Code: ");
                                    ip_code_chance=ip_code_chance+1;
                                    goto Aaaashir2;
                                 }
                                 else
                                 ip_emp_chance=5;
                               }

                            }
                            
							else
                            {
                               if(ip_route_chance!=5)
                               {
                                   printf("Wrong route number!\nEnter Correct route number: ");
                                   ip_route_chance=ip_route_chance+1;
                                   goto Aaashir2;
                               }
                               else 
						           ip_emp_chance=5;
                            }

                        } 
                        else
                       {
                          if(ip_pass_chance!=5)
                          {
                             printf("Wrong password!\nEnter Correct password: ");
                             ip_pass_chance=ip_pass_chance+1;
                             goto Aashir2;
                          }
                          else
                             ip_emp_chance=5;
                       
                       }
                     
					  }
					}
					  if(ip_emp_chance!=5)
                    {
                        printf("Wrong Roll number!\nEnter Correct Roll number: 20k-");
                        ip_emp_chance=ip_emp_chance+1;
                        goto beta;
                    }
                 
				break;

                case 2021:
                 
                   printf("Enter your roll number: 21k-");
                   charlie:
                   scanf("%d",&rollno);
                   ptr_rollno=&rollno;
                   
                   for(i=0; i<5; i++)
                   {
                      
                        if(*ptr_rollno==save_roll_21[i])
                      {

                          printf("Enter the password: ");
                          ip_pass_chance=1;
                          Aashir3:
                          scanf("%d", &ip_pass);
                          if(ip_pass==save_pass_21[i])
                          {
                            printf("\nEnter route (press '0' to display route): ");
                            ip_route_chance=1;
						    Aaashir3:
                            scanf("%d", &ip_route);
						    if(ip_route==0)
						    {
							  Rout();
							  printf("\n\n\nEnter route: ");
							  goto Aaashir3;
						    }   
                            if(ip_route>0 && ip_route<6 && ip_route!=00)
                            {
                               printf("\n\n\nSubmit 30000PKR in any branch of HBL Bank. You may submit fee amount online through the website www.pointFAST.com.");
                               printf("\n\nIf Submitted, Enter the given code: ");
                               ip_code_chance=1;
                               Aaaashir3:
                               scanf("%d", &ip_code);
                               if(ip_code==save_code_21[i])
                               {
                                  system("CLS");
                                   printf("\t\t\t\tRegistration Form\n");
								  printf("Roll  number: ");
                                  scanf("%s", &std.s_rollno);
                                  printf("Name: ");
                                  scanf("%s", &std.s_name);
								  printf("Route no: ");
                                  scanf("%s", &std.s_route);
                                  printf("Stop: ");
                                  scanf("%s", &std.s_stop);
                                  file2:
                                  //FILE *stu;
                                  stu=fopen("registrations.txt","a");
                                  if(stu==NULL)
                                  {
                                  	goto file2; 
								  }
								  fputs(std.s_rollno,stu);
								  fputs(" ",stu);
								  fputs(std.s_name,stu);
								  fputs(" ",stu);
								  fputs(std.s_route,stu);
								  fputs(" ",stu);
								  fputs(std.s_stop,stu);
								  fputs("\n", stu);
                                  fclose(stu);
                                  
								  
								  system("CLS");
                                  printf("\n\n\n\nCONGRATULATIONS! You are registered. You can get your point card from one stop.");
                                  printf("\n\n\n\n\n\n\n\n\n\n\n\nPress '0' to go to main menu.");
                                  scanf("%d", &exit);
                                  if(exit==0)
                                  {
                                        goto mainmenu;
                                  }
                         
                               }
                               else
                               {
                                 if(ip_code_chance!=5)
                                 {
                                    printf("Wrong code!\nEnter Correct Code: ");
                                    ip_code_chance=ip_code_chance+1;
                                    goto Aaaashir3;
                                 }
                                 else
                                 ip_emp_chance=5;
                               }

                            }
                            
							else
                            {
                               if(ip_route_chance!=5)
                               {
                                   printf("Wrong route number!\nEnter Correct route number: ");
                                   ip_route_chance=ip_route_chance+1;
                                   goto Aaashir3;
                               }
                               else 
						           ip_emp_chance=5;
                            }

                        } 
                        else
                       {
                          if(ip_pass_chance!=5)
                          {
                             printf("Wrong password!\nEnter Correct password: ");
                             ip_pass_chance=ip_pass_chance+1;
                             goto Aashir3;
                          }
                          else
                             ip_emp_chance=5;
                       
                       }
                     
					  }
					}
					  if(ip_emp_chance!=5)
                    {
                        printf("Wrong Roll number!\nEnter Correct Roll number: 21k-");
                        ip_emp_chance=ip_emp_chance+1;
                        goto charlie;
                    }
                   
                break;

                case 2022:
                 
                   printf("Enter your roll number:22k-");
                   bravo:
                   scanf("%d",&rollno);
                   ptr_rollno=&rollno;
                   
                   for(i=0; i<5; i++)
                   {
                      
                        if(*ptr_rollno==save_roll_22[i])
                      {

                          printf("Enter the password: ");
                          ip_pass_chance=1;
                          Aashir4:
                          scanf("%d", &ip_pass);
                          if(ip_pass==save_pass_22[i])
                          {
                            printf("\nEnter route (press '0' to display route): ");
                            ip_route_chance=1;
						    Aaashir4:
                            scanf("%d", &ip_route);
						    if(ip_route==0)
						    {
							  Rout();
							  printf("\n\n\nEnter route: ");
							  goto Aaashir4;
						    }   
                            if(ip_route>0 && ip_route<6 && ip_route!=00)
                            {
                               printf("\n\n\nSubmit 30000PKR in any branch of HBL Bank. You may submit fee amount online through the website www.pointFAST.com.");
                               printf("\n\nIf Submitted, Enter the given code: ");
                               ip_code_chance=1;
                               Aaaashir4:
                               scanf("%d", &ip_code);
                               if(ip_code==save_code_22[i])
                               {
                                  system("CLS");
                                  printf("\t\t\t\tRegistration Form\n");
								  printf("Roll  number: ");
                                  scanf("%s", &std.s_rollno);
                                  printf("Name: ");
                                  scanf("%s", &std.s_name);
								  printf("Route no: ");
                                  scanf("%s", &std.s_route);
                                  printf("Stop: ");
                                  scanf("%s", &std.s_stop);
                                  file3:
                                  //FILE *stu;
                                  stu=fopen("registrations.txt","a");
                                  if(stu==NULL)
                                  {
                                  	goto file3; 
								  }
								  fputs(std.s_rollno,stu);
								  fputs(" ",stu);
								  fputs(std.s_name,stu);
								  fputs(" ",stu);
								  fputs(std.s_route,stu);
								  fputs(" ",stu);
								  fputs(std.s_stop,stu);
								  fputs("\n", stu);
                                  fclose(stu);
                                  
								  
								  system("CLS");
                                  printf("\n\n\n\nCONGRATULATIONS! You are registered. You can get your point card from one stop.");
                                  printf("\n\n\n\n\n\n\n\n\n\n\n\nPress '0' to go to main menu.");
                                  scanf("%d", &exit);
                                  if(exit==0)
                                  {
                                        goto mainmenu;
                                  }
                         
                               }
                               else
                               {
                                 if(ip_code_chance!=5)
                                 {
                                    printf("Wrong code!\nEnter Correct Code: ");
                                    ip_code_chance=ip_code_chance+1;
                                    goto Aaaashir4;
                                 }
                                 else
                                 ip_emp_chance=5;
                               }

                            }
                            
							else
                            {
                               if(ip_route_chance!=5)
                               {
                                   printf("Wrong route number!\nEnter Correct route number: ");
                                   ip_route_chance=ip_route_chance+1;
                                   goto Aaashir4;
                               }
                               else 
						           ip_emp_chance=5;
                            }

                        } 
                        else
                       {
                          if(ip_pass_chance!=5)
                          {
                             printf("Wrong password!\nEnter Correct password: ");
                             ip_pass_chance=ip_pass_chance+1;
                             goto Aashir4;
                          }
                          else
                             ip_emp_chance=5;
                       
                       }
                     
					  }
					}
					  if(ip_emp_chance!=5)
                    {
                        printf("Wrong Roll number!\nEnter Correct Roll number: 22k-");
                        ip_emp_chance=ip_emp_chance+1;
                        goto bravo;
                    }
     
                break;

            
              } 
			  
			           // switch ended
              
              

          break;          // case 2 eneded
          
          
        case 3:
        	//  REGISTERED
    
				
    	
	
    	printf("Enter roll number: ");
    	scanf("%s", &check);
    	waapis:
    	ftp=fopen("registrations.txt", "r");
    	if(ftp==NULL)
    	{
    		printf("File could'nt open!");                                        
    		goto waapis;                                            
    	}	                                                       
                                                               
                                                               
                                                               
	
     	AAashir:
     	fgets(roll, 9, ftp );
    	if(!strcmp(check,roll))
    	{
    		printf("\n\t\tPRESENT\n\nRoll number: ");
    		puts(roll);
    		//fseek(fp, 0, SEEK_CUR);
    		while(c!=2)
    		{
    			name[ic]=fgetc(ftp);
    			p=ic;
    			if(name[p]==32)
    			c++;
    			if(c==2){
    			routenoo=fgetc(ftp);
    			space=fgetc(ftp);
    			while(area[l]!='\n'){
    			area[e]=fgetc(ftp);
    			l=e;
    			e++;
    			}
	     	}
		    ic=ic+1;
	    	}
	    	printf("\nName: ");
	    	for(ic=2; ic<=p; ic++)
	    	{
	    		printf("%c", name[ic]);
	     	}
	    	printf("\nRoute: %c",routenoo);
	    	printf("\nStop: ");
	    	for(e=0; e<=(l-1); e++)
	    	{
	    	printf("%c",area[e]);
	        }
        	fclose(ftp);
        	printf("\n\n\n\n\n\n\n\n\n\n\n\nPress '0' to go to main menu.");
            scanf("%d", &exit);
            if(exit==0)
            {
                goto mainmenu;
            }
                         
       }
    else
	{
	      b=0;
		  v=0;	
    	  do {
		  ashir[b] = fgetc(ftp);
		  v=b;
		  b++;
		  
             }
		 while(ashir[v] != '\n' ); 
	     
	 goto AAashir;
	}
    


        	
        	
        	  
	break;
   }
   
       case 2:
       
    
            printf("\n\n\nEnter choice:\n1. Point Details\n2. Registeration\n\nEnter here: ");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
          	        ip_emp_chance=1;
	                ip_pass_chance=1;
	                printf("Enter Employ number: ");
	                hi:
	                fflush(stdin);
	                scanf("%d", &ip_emp);
	                cnt1=0;
	                for(i=0; i<15; i++)
	                {
		                if(ip_emp==emp_num[i])
		                {
			                printf("Enter password: ");
			                hello:
			                fflush(stdin);
			                scanf("%d", &ip_pass);
			                cnt2=0;
			                for(j=0; j<5; j++)
			                {
				                if(ip_pass==emp_pass[i])
				                {
					                 printf("\n");
                                     Rout();
									printf("\n\n\nFees per month:6,000 PKR");
				                    printf("\n\n\n\n\n\nFor Main Menu press '0'");
									scanf("%d", &exit);
									if(exit==0)
									{
										goto mainmenu;
									}	
				                }
				                else
				                    cnt2  =  cnt2  +  1;
				
			                }
			                if(cnt2==5)
			                {
				                if(ip_pass_chance!=5)
				                {
				                    printf("Incorrect password!\nEnter correct password: ");
				                    ip_pass_chance  =  ip_pass_chance  +  1;
				                    goto hello;
			                    }
				                else
				                    goto mainmenu;
			                }
		  
		                }
		                
						else
	                            cnt1  =  cnt1  +  1;
	
	                }
                    if(cnt1==15)
	                {
		                if(ip_emp_chance!=5)
		                {	
		                    printf("Incorrect Employ number!\nEnter correct Employ number: ");
		                    ip_emp_chance  =  ip_emp_chance  +  1;
		                    goto hi;
	                    }
		                else
		                  goto mainmenu;
	                }
	
          	                        
          	                        
          	    case 2:
          
		            printf("Enter Employ number: ");
		            ip_emp_chance=1;
                    Aaaaashir:
                    fflush(stdin);
                    scanf("%d", &ip_emp);                    
                    for(j=0; j<15; j++)
                    {
                      if(ip_emp==emp_num[j])
                      {

                          printf("Enter the password: ");
                          ip_pass_chance=1;
                          Aashir:
                          scanf("%d", &ip_pass);
                          if(ip_pass==emp_pass[j])
                          {
                            printf("\nEnter route (press '00' to display route): ");
                            ip_route_chance=1;
						    Aaashir:
                            scanf("%d", &ip_route);
						    if(ip_route==00)
						    {
							  Rout();
							  printf("\n\n\nEnter route: ");
							  goto Aaashir;
						    }   
                            if(ip_route>0 && ip_route<6 && ip_route!=00)
                            {
                               printf("\n\n\nSubmit PKR. 30,000 in any branch of HBL Bank. You may submit fee amount online through the website www.pointFAST.com.");
                               printf("\n\nIf Submitted, Enter the given code: ");
                               ip_code_chance=1;
                               Aaaashir:
                               scanf("%d", &ip_code);
                               if(ip_code==emp_code[j])
                               {
                                  system("CLS");
                                  printf("\n\n\n\nCONGRATULATIONS! You are registered. You can get your point card from one stop.");
                                  printf("\n\n\n\n\n\n\n\n\n\n\n\nPress '0' to go to main menu.");
                                  scanf("%d", &exit);
                                  if(exit==0)
                                  {
                                        ip_emp_chance=5;
                                  }
                         
                               }
                               else
                               {
                                 if(ip_code_chance!=5)
                                 {
                                    printf("Wrong code!\nEnter Correct Code: ");
                                    ip_code_chance=ip_code_chance+1;
                                    goto Aaaashir;
                                 }
                                 else
                                 ip_emp_chance=5;
                               }

                            }
                            
							else
                            {
                               if(ip_route_chance!=5)
                               {
                                   printf("Wrong route number!\nEnter Correct route number: ");
                                   ip_route_chance=ip_route_chance+1;
                                   goto Aaashir;
                               }
                               else 
						           ip_emp_chance=5;
                            }

                        } 
                        else
                       {
                          if(ip_pass_chance!=5)
                          {
                             printf("Wrong password!\nEnter Correct password: ");
                             ip_pass_chance=ip_pass_chance+1;
                             goto Aashir;
                          }
                          else
                             ip_emp_chance=5;
                       
                       }
                     
					  }

                    }
               
			        if(ip_emp_chance!=5)
                    {
                        printf("Wrong employ number!\nEnter Correct Employ number: ");
                        ip_emp_chance=ip_emp_chance+1;
                        goto Aaaaashir;
                    }
                     
                    break;
            
			}

    
    
    
    
    
    
      
        break;

        case 3:
            
            system("cls");
            printf("\t\n\n\nA project by:\n\t\tMuhammad Ashir 22K-4504\n\t\tSahir Hasan 22K-4570\n\t\tArsalan Amir 22K-4208");  
            return 0;
    
        break;
   
     }
     
    }while(ch!=3);

}  //  -->  closure of MAIN FUNCTION



// defining functions



void Rout()
{
printf("Route #1");
printf("\nAslam 03171068856        Time");
printf("\n1.      Anda More        6:45");
printf("\n2.      Red house        6:47");
printf("\n3.      Al Habib         6:49");
printf("\n4.      Cafe 2Days       6:50");
printf("\n5.      Namak Bank       6:55");
printf("\n6.      Shafeeq More     6:57");
printf("\n7.      Al Noor          7:00");
printf("\n8.      Edhi Center      7:02");
printf("\n        Fast NU          7:45");  

printf("\n");
printf("\nRoute #2");
printf("\nSalman 03138629449        Time");
printf("\n1.  Munawar Chowrangi      6:45");
printf("\n2.  Sardar CNG             6:47");
printf("\n3.  NED Uni                6:49");
printf("\n4.  Karachi University     6:50");
printf("\n5.  Johar Complax          6:55");
printf("\n6.  Safora Chowrangi       6:57");
printf("\n7.  HydrantStopRaceCourse  7:00");
printf("\n        Fast NU            7:45");
printf("\n");
printf("\nRoute #3");
printf("\nNadeem 0341-8249598       Time");
printf("\n1.   Fariya Chowke        6:35");
printf("\n2.   KDA                  6:37");
printf("\n3.   Madras Chowke        6:40");
printf("\n4.   Roado Center Johar   6:45");
printf("\n5.   Darul-Sehat          6:48");
printf("\n6.   JDC                  6:50");
printf("\n     Fast NU              7:45");

printf("\n");
printf("\nRoute #4");
printf("\nShafeeq 0301-0004871      Time");
printf("\n1.   Donisal              6:40");
printf("\n2.   Landikotal           6:45");
printf("\n3.   Tahir Villas         6:50");
printf("\n4.   Shadab Masjid        6:52");
printf("\n5.   Naseer abad          6:55");
printf("\n     Fast NU              7:45");

printf("\n");

printf("\nRoute #5");
printf("\nSunny 0311-2838990     Time");
printf("\n1.   Ayesha Manzil     6:40");
printf("\n2.   GulshanMotiMahal  6:50");
printf("\n3.   Lasanta           6:55");
printf("\n4.   Askri-4           7:00");
printf("\n     Fast NU           7:45");
}
