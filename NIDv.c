#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int i,j,k;
char filename[100];
char input[100];
char show[1000];
FILE *fptr1;
printf("Welcome to NID registration & Management Service! \n How may I assist you? \n");
printf("1. Create an NID \n2. Update an NID \n3. Delete an NID\n4.View NID Information\n");
scanf("%d",&i);

if(i==1)
{
   printf("Enter filename : ");
   scanf ("%s",filename);
   strcat(filename,".txt");
   j=access(filename,F_OK);
     for (k=0;k<20;k++)
     {
         if(j==0)
         {
             printf("Already exists, enter another number: ");
             //printf("Enter filename : ");
             scanf ("%s",filename);
             strcat(filename,".txt");
             j=access(filename,F_OK);
         }
         else{
            printf("\n File created successfully");

            FILE *fptr;

            fptr = fopen(filename , "w");
            //printf("Enter Name:");
            //fgets(input , 1000 , stdin);
            //fprintf(fptr,"%s",input);
            //fprintf( fptr, "this is the 1st text");

            fclose(fptr);

            break;
         }

     }
     //printf("Enter Name:");
     fptr1 = fopen(filename , "a");
     printf("\nEnter Name:");
     while(getchar()!='\n');
     //fgets(input , sizeof(input) , stdin);
     scanf("%[^\n]",input);
     fprintf(fptr1,"Name: %s",input);

     printf("\nEnter Father's Name:");
     while(getchar()!='\n');
     scanf("%[^\n]",input);
     fprintf(fptr1,"\nFather's Name: %s",input);

     printf("\nEnter Mother's Name:");
     while(getchar()!='\n');
     scanf("%[^\n]",input);
     fprintf(fptr1,"\nMother's Name: %s",input);

     printf("\nEnter Date of Birth:");
     while(getchar()!='\n');
     scanf("%[^\n]",input);
     fprintf(fptr1,"\nDate of Birth: %s",input);

     printf("\nEnter Present Address:");
     while(getchar()!='\n');
     scanf("%[^\n]",input);
     fprintf(fptr1,"\nPresent Address: %s",input);

     printf("\nEnter Permanent Address:");
     while(getchar()!='\n');
     scanf("%[^\n]",input);
     fprintf(fptr1,"\nPermanent Address: %s",input);

     printf("\nEnter Phone Number:");
     while(getchar()!='\n');
     scanf("%[^\n]",input);
     fprintf(fptr1,"\nPhone Number: %s",input);


     printf("Congratulations!\nYour NID registration is complete!\nThank you for your patience.");
     fclose(fptr1);





}



else if(i==2)
{
    printf("wait");
    //printf("Enter your NID no: ");
    //scanf("%s",filename);
    //strcpy(filename, ".txt");
    //j=access(filename, F_OK);

    //printf("Enter filename : ");
    //scanf ("%s",filename);
    //strcat(filename,".txt");
    //j=access(filename,F_OK);

    for(k=0;k<10;k++)

    {
        printf("Enter filename : ");
        scanf ("%s",filename);
        strcat(filename,".txt");
        j=access(filename,F_OK);
        if(j!=0)
        {
            printf("Wrong NID number. Please Try Again.\n");
        }
        else
        {
            fptr1=fopen(filename, "w" );
            printf("\nEnter Name:");
            while(getchar()!='\n');
            //fgets(input , sizeof(input) , stdin);
            scanf("%[^\n]",input);
            fprintf(fptr1,"Name: %s",input);

            printf("\nEnter Father's Name:");
            while(getchar()!='\n');
            scanf("%[^\n]",input);
            fprintf(fptr1,"\nFather's Name: %s",input);

            printf("\nEnter Mother's Name:");
            while(getchar()!='\n');
            scanf("%[^\n]",input);
            fprintf(fptr1,"\nMother's Name: %s",input);

            printf("\nEnter Date of Birth:");
            while(getchar()!='\n');
            scanf("%[^\n]",input);
            fprintf(fptr1,"\nDate of Birth: %s",input);

            printf("\nEnter Present Address:");
            while(getchar()!='\n');
            scanf("%[^\n]",input);
            fprintf(fptr1,"\nPresent Address: %s",input);

            printf("\nEnter Permanent Address:");
            while(getchar()!='\n');
            scanf("%[^\n]",input);
            fprintf(fptr1,"\nPermanent Address: %s",input);

            printf("\nEnter Phone Number:");
            while(getchar()!='\n');
            scanf("%[^\n]",input);
            fprintf(fptr1,"\nPhone Number: %s",input);


            printf("Congratulations!\nYour NID has been updated!\nThank you for your patience.");
            fclose(fptr1);
            break;


        }
    }

    //if(j==0)
    //{
      //fptr1=fopen(filename, "w" );
       //printf("\nEnter Name:");
       //while(getchar()!='\n');
       //fgets(input , sizeof(input) , stdin);
       //scanf("%[^\n]",input);
       //fprintf(fptr1,"Name: %s",input);

       //printf("\nEnter Father's Name:");
       //while(getchar()!='\n');
       //scanf("%[^\n]",input);
       //fprintf(fptr1,"\nFather's Name: %s",input);

       //printf("\nEnter Mother's Name:");
       //while(getchar()!='\n');
       //scanf("%[^\n]",input);
       //fprintf(fptr1,"\nMother's Name: %s",input);

       //printf("\nEnter Date of Birth:");
       //while(getchar()!='\n');
       //scanf("%[^\n]",input);
       //fprintf(fptr1,"\nDate of Birth: %s",input);

       //printf("\nEnter Present Address:");
       //while(getchar()!='\n');
       //scanf("%[^\n]",input);
       //fprintf(fptr1,"\nPresent Address: %s",input);

       //printf("\nEnter Permanent Address:");
       //while(getchar()!='\n');
       //scanf("%[^\n]",input);
       //fprintf(fptr1,"\nPermanent Address: %s",input);

       //printf("\nEnter Phone Number:");
       //while(getchar()!='\n');
       //scanf("%[^\n]",input);
       //fprintf(fptr1,"\nPhone Number: %s",input);


       //printf("Congratulations!\nYour NID has been updated!\nThank you for your patience.");
       //fclose(fptr1);



    //}

    //else{
        //printf("Wrong NID number.");
   // }




}


else if(i==3)
{
    for(k=0;k<10;k++)
    {
       printf("Enter filename : ");
       scanf ("%s",filename);
       strcat(filename,".txt");
       j=access(filename,F_OK);

       if(j!=0)
       {
           printf("This File Doesn't Even Exist! Please Try Again.\n");
       }

       else
       {
           remove(filename);
           printf("File Removed Successfully.");
           break;
       }

    }
    //printf("Enter filename : ");
    //scanf ("%s",filename);
    //strcat(filename,".txt");
    //j=access(filename,F_OK);

    //if(j==0)
    //{
        //remove(filename);
        //printf("File Removed Successfully.");

    //}
    //else
   // {
        //printf("This File Doesn't Even Exist!");
    //}
    //remove(filename);
    //printf("File Removed Successfully.");
}





else if(i==4)
{
    for(k=0;k<10;k++)
    {
       printf("Enter filename : ");
       scanf ("%s",filename);
       strcat(filename,".txt");
       j=access(filename,F_OK);

       if(j!=0)
       {
           printf("This File Doesn't Even Exist! Please Try Again.\n");
       }

       else
       {

           fptr1=fopen(filename,"r");
           //char show[1000];
           while(fgets(show,1000,fptr1))
            {
              printf("%s",show);
            }
            fclose(fptr1);
            break;





           //remove(filename);
           //printf("File Removed Successfully.");
           //break;
       }

    }
    //printf("wrong input");
}

else
{
    printf("Wrong Input. Sorry, please try again...");
}







//FILE *fptr;

//fptr = fopen("12345.txt" , "w");

//fprintf( fptr, "this is the 1st text");

//fclose(fptr);

return 0;

}
