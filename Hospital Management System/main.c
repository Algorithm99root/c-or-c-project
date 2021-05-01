#include <stdio.h>
#include <stdlib.h>
#include <conio.h>   // use for delay(),getch(),etc;
#include <string.h>  // use for strcmp(),strcpy(),strlen(),etc;
#include <ctype.h>   // use for toupper(), tolower(),etc;
#include <windows.h> // gotoxy()

char ans = 0;
int ok;
int b, valid = 0;
int main_exit;

// Function decleation

void WelcomeScreen(void); // WelcomeScreen Function decleation
void Title(void);         // Tile Function decleation
void MainMenu(void);      // MainMenu Function decleation
void LoginScreen(void);   // LoginScreen Function decleation
void add_rec(void);       // add_rec Function decleation
void func_list(void);     // func_list Function decleation
void Search_rec(void);    // Search_list Function decleation
void Edit_rec(void);      // Edit_rec Function decleation
void Dlt_rec(void);       // Dlt_rec Function decleation
void ex_it(void);         // ex_it Function decleation

void gotoxy(short x, short y)
{
    COORD pos = {x, y}; //sets the co-ordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

// list of global variable

struct patient
{
    int age;
    char Gender;
    char First_Name[20];
    char Last_Name[20];
    char Contact_no[15];
    char Address[30];
    char Email[30];
    char Doctor[20];
    char Problem[20];
};

struct patient p, temp_c;

void main()
{
    WelcomeScreen();
    Title();
    LoginScreen();
}

void WelcomeScreen(void)
{
    printf("\n\n\n");
    printf("\t\t\t\t ************************************************\n");
    printf("\t\t\t\t *                                              *\n");
    printf("\t\t\t\t *        HOSPITAL MANAGMENT SYSTEM             *\n");
    printf("\t\t\t\t *                                              *\n");
    printf("\t\t\t\t *     Create by MD. Ashiqur Rahman Bhuiyan     *\n");
    printf("\t\t\t\t *                                              *\n");
    printf("\t\t\t\t *                                              *\n");
    printf("\t\t\t\t ************************************************\n");
    printf("\n\n\n");
    printf("Press any key to Continue..............\n");
    getch();
    system("cls");
}

void Title(void) // Tile Screen
{

    printf("\n\n");
    printf("\t\t\t\t **************************************************\n");
    printf("\t\t\t\t *                                                *\n");
    printf("\t\t\t\t *   Dhaka Medical Hospital  Managment System     *\n");
    printf("\t\t\t\t *                                                *\n");
    printf("\t\t\t\t **************************************************\n");
    printf("\n\n\n");
}

void MainMenu(void)
{
    int choice;
ashik_login:
    system("color 09");
    printf("\n\n\n\t\t\t\t DHAKA MEDICAL HOSPITAL MANAGMENT SYSTEM");
    printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t1.Add Patients Record ");
    printf("\n\n\t\t2.List Patients Record ");
    printf("\n\n\t\t3.Search Patients Record ");
    printf("\n\n\t\t4.Edit Patients Record ");
    printf("\n\n\t\t5.Delete Patients Record ");
    printf("\n\n\t\t6.Exit ");
    printf("\n\n\n\nEnter your choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        add_rec();
        break;
    case 2:
        func_list();
        break;
    case 3:
        Search_rec();
        break;
    case 4:
        Edit_rec();
        break;
    case 5:
        Dlt_rec();
        break;
    case 6:
        ex_it();
        break;
    default:

        system("cls");
        printf("\n\n\n");
        printf("\t\t\t Invalid Entry. Please Enter the right opition (1-6)..???");
        Sleep(5000);
        system("cls");
        goto ashik_login;
    }
}

void ex_it(void)
{
    system("cls");
    system("color 07");
    printf("\n\n\n\t\t\t Thanks for Using this Sowftare! ");
    printf("\n\n\t\t\tNever Give Up , You can do anything .");
    printf("\n\n\t\t\tLast thing I believe that <- Revange is the purrest of emotion ->");
    printf("\n\n\t\t\t -> Bye");
    for (int i = 0; i <= 8; i++)
    {
        /* code */
        Sleep(1000);
        printf(".");
    }
}

void LoginScreen(void)
{
    const int max_password_length = 15;
    char password[max_password_length + 1];
    char password_system[20] = "ashik";
    char user_name[20];
    char user[20] = "ashik";
    char ch;
    int character_position = 0;
    printf("\t\t\tEnter the user name : ");
    scanf("%s", &user_name);
    printf("\n");
    printf("\t\t\tEnter the password : ");

    while (1)
    {
        /* code */
        ch = getch();
        if (ch == 13) // Enter_keyword ASCII code is 13
        {
            /* code */
            break;
        }
        else if (ch == 8) // Backspace_keyword ASCII code is 8
        {
            /* code */
            if (character_position > 0)
            {
                /* code */
                character_position--;
                password[character_position] = '\0';
                printf("\b \b");
            }
        }
        else if (ch == 32 || ch == 9) // Space_keyword ASCII code is 32 and tab_keyword ASCII code is 9
        {
            /* code */
            continue;
        }
        else
        {

            if (character_position < max_password_length)
            {
                /* code */
                password[character_position] = ch;
                character_position++;
                printf("*");
            }
            else
            {
                //printf("\n Your Input Exceeds maximum password length of %d . So , Only First %d characters will be considered", max_password_length, max_password_length);
                break;
            }
        }
    }

    password[character_position] = '\0';
    printf("\n");
    if (strlen(password) == 0)
    {
        /* code */
        printf("No password Entered");
    }

    if ((strcmp(password, password_system) == 0) && (strcmp(user, user_name) == 0))
    {
        /* code */
        printf("\n\n Password match ! \n Loading");
        for (int i = 0; i <= 6; i++)
        {
            /* code */
            Sleep(1000);
            printf(".");
        }
        system("cls");
        MainMenu();
        Sleep(1000);
    }
    else
    {

        printf("\n\nWrong password!!\a\a\a");
    login_try:
        printf("\nEnter 1 to try again and 0 to exit:");
        scanf("%d", &main_exit);
        if (main_exit == 1)
        {

            system("cls");
            main();
        }

        else if (main_exit == 0)
        {
            system("cls");
            ex_it();
        }
        else
        {
            printf("\nInvalid!");
            Sleep(2000);
            system("cls");
            goto login_try;
        }
    }
}

void add_rec(void)
{
    system("cls");
    printf("\n\n\n\t\t\t!!!!!!!!!!!!!!!!!!!!!!! Add Patients Record !!!!!!!!!!!!!!!!!!!!!!!!\n");
    char ans;
    FILE *ek;
    ek = fopen("Record2.dat", "a"); // open file in write mode

    // *************************************** First Name ************************************//

A:
    printf("\n\t\t\tFirst Name : ");
    scanf("%s", p.First_Name);
    p.First_Name[0] = toupper(p.First_Name[0]);
    if (strlen(p.First_Name) > 20 || strlen(p.First_Name) < 2)
    {
        /* code */
        system("cls");
        printf("\n\n\n");
        printf("\n\t\t Invalid : ( \t The max range for first name is 20 and minimum range is 2");
        Sleep(5000);
        system("cls");
        goto A;
    }
    else
    {
        for (b = 0; b < strlen(p.First_Name); b++)
        {
            /* code */
            if (isalpha(p.First_Name[b]))
            {
                /* code */
                valid = 1;
            }
            else
            {
                valid = 0;
                break;
            }
        }

        if (!valid)
        {
            /* code */
            system("cls");
            printf("\n\n\n");
            printf("\n\t\t Invalid : ( \t First Name contain Invalid character .   please Enter Again :)");
            Sleep(5000);
            system("cls");
            goto A;
        }
    }

    //****************************************** Last Name  *********************************************//

B:
    printf("\n\t\t\tLast Name : ");
    scanf("%s", p.Last_Name);
    p.Last_Name[0] = toupper(p.Last_Name[0]);
    if (strlen(p.Last_Name) > 20 || strlen(p.Last_Name) < 2)
    {
        /* code */
        system("cls");
        printf("\n\n\n");
        printf("\n\t\t Invalid : ( \t The max range for first name is 20 and minimum range is 2");
        Sleep(5000);
        system("cls");
        goto B;
    }
    else
    {
        for (b = 0; b < strlen(p.Last_Name); b++)
        {
            /* code */
            if (isalpha(p.Last_Name[b]))
            {
                /* code */
                valid = 1;
            }
            else
            {
                valid = 0;
                break;
            }
        }

        if (!valid)
        {
            /* code */
            system("cls");
            printf("\n\n\n");
            printf("\n\t\t Invalid : ( \t Last Name contain Invalid character .   please Enter Again :)");
            Sleep(5000);
            system("cls");
            goto B;
        }
    }

    fflush(stdin);

    //******************************************* Gender ********************************************//

C:

    printf("\n\t\t\tGender[F/M]: ");
    scanf("%c", &p.Gender);
    if (toupper(p.Gender) == 'M' || toupper(p.Gender) == 'F')
    {
        /* code */
        ok = 1;
    }
    else
    {
        /* code */
        ok = 0;
    }
    if (!ok)
    {
        /* code */
        system("cls");
        printf("\n\n\n");
        printf("\n\t\t Gender contain Invalid Character :(   Enter either F or M :)");
        Sleep(5000);
        system("cls");
        goto C;
    }
    //**************************************** Age ******************************************//

    printf("\n\t\t\tAge: ");
    scanf("%d", &p.age);

    //**************************************** Address ******************************************//

    do
    {
        /* code */

    D:
        printf("\n\t\t\tAddress : ");
        scanf("%s", p.Address);
        p.Address[0] = toupper(p.Address[0]);
        if (strlen(p.Address) > 20 || strlen(p.Address) < 4)
        {
            /* code */
            system("cls");
            printf("\n\n\n");
            printf("\n\t\t Invalid : ( \t The max range for first name is 20 and minimum range is 4");
            Sleep(5000);
            system("cls");
            goto D;
        }

    } while (!valid);

    //***************************************** Contact no. ****************************************//

    do
    {
        /* code */
    E:
        printf("\n\t\t\t Contact no : ");
        scanf("%s", p.Contact_no);
        if (strlen(p.Contact_no) > 12 || strlen(p.Contact_no) < 10)
        {
            /* code */
            system("cls");
            printf("\n\n\n");
            printf("\n\t\t :(  Invalid. Contact no. must contain 11 number   :) Enter  Again ->..!");
            Sleep(5000);
            system("cls");
            goto E;
        }
        else
        {
            for (b = 0; b < strlen(p.Contact_no); b++)
            {
                /* code */
                if (!isalpha(p.Contact_no[b]))
                {
                    /* code */
                    valid = 1;
                }
                else
                {
                    valid = 0;
                    break;
                }
            }
            if (!valid)
            {
                /* code */
                system("cls");
                printf("\n\n\n");
                printf("\n\t\t  :(  Invalid. Contact no.  contain Character   :) Enter  Again ->..!");
                Sleep(5000);
                system("cls");
                goto E;
            }
        }

    } while (!valid);

    //************************************** Email ********************************//

    do
    {

    F:
        /* code */
        printf("\n\t\t\tEmail : ");
        scanf("%s", p.Email);
        if (strlen(p.Email) > 30 || strlen(p.Email) < 8)
        {
            /* code */
            system("cls");
            printf("\n\n\n");
            printf("\n\t\t :(  Invalid. The max range of email is 30 and minimum range of email is 8   :) Enter  Again ->..!");
            Sleep(5000);
            system("cls");
            goto F;
        }

    } while (strlen(p.Email) > 30 || strlen(p.Email) < 8);

    //************************************ Problem **************************************//

G:
    printf("\n\t\t\tProblem : ");
    scanf("%s", p.Problem);
    p.Problem[0] = toupper(p.Problem[0]);
    if (strlen(p.Problem) > 15 || strlen(p.Problem) < 3)
    {
        /* code */
        system("cls");
        printf("\n\n\n");
        printf("\n\t\t Invalid : ( \t The max range for first name is 15 and minimum range is 3");
        Sleep(5000);
        system("cls");
        goto G;
    }
    else
    {
        for (b = 0; b < strlen(p.Problem); b++)
        {
            /* code */
            if (isalpha(p.Problem[b]))
            {
                /* code */
                valid = 1;
            }
            else
            {
                valid = 0;
                break;
            }
        }

        if (!valid)
        {
            /* code */
            system("cls");
            printf("\n\n\n");
            printf("\n\t\t Invalid : ( \t Problem name  contain Invalid character .   please Enter Again ->  :)");
            Sleep(5000);
            system("cls");
            goto G;
        }
    }

H:
    printf("\n\t\t\tPrescribed Doctor : ");
    scanf("%s", p.Doctor);
    p.Doctor[0] = toupper(p.Doctor[0]);
    if (strlen(p.Doctor) > 30 || strlen(p.Doctor) < 3)
    {
        /* code */
        system("cls");
        printf("\n\n\n");
        printf("\n\t\t Invalid : ( \t The max range for first name is 30 and minimum range is 3");
        Sleep(5000);
        system("cls");
        goto H;
    }
    else
    {
        for (b = 0; b < strlen(p.Doctor); b++)
        {
            /* code */
            if (isalpha(p.Doctor[b]))
            {
                /* code */
                valid = 1;
            }
            else
            {
                valid = 0;
                break;
            }
        }

        if (!valid)
        {
            /* code */
            system("cls");
            printf("\n\n\n");
            printf("\n\t\t Invalid : ( \t Last Name contain Invalid character .   please Enter Again :)");
            Sleep(5000);
            system("cls");
            goto H;
        }
    }

    fprintf(ek, " %s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, p.Gender, p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor);
    printf("\n\n\n\t\t\t\t..........Information Record Successful............... ->  :) ");
    fclose(ek); // ek file is closed
sd:
    getch();
    fflush(stdin);
    printf("\n\n\t\t\tDo you want to add more[Y/N] ??  ");
    scanf("%c", &ans);
    if (toupper(ans) == 'Y')
    {
        /* code */
        add_rec();
    }
    else if (toupper(ans) == 'N')
    {
        /* code */
        printf("\n\t\t Thank you  :) :) ");
        getch();
        system("cls");
        MainMenu();
    }
    else
    {
        /* code */
        printf("\n\t\t Invalid Input\n");
        goto sd;
    }
}

// *********************************** View Record *************************************//

void func_list()
{
    int row;
    system("cls");
    Title();
    FILE *ek;
    ek = fopen("Record2.dat", "r");
    printf("\t\t\t###########################  List Patients Record  ###############################\n");
    gotoxy(1, 13);
    printf("Full Name");
    gotoxy(20, 13);
    printf("Gender");
    gotoxy(32, 13);
    printf("Age");
    gotoxy(37, 13);
    printf("Address");
    gotoxy(49, 13);
    printf("Contact no");
    gotoxy(64, 13);
    printf("Email");
    gotoxy(88, 13);
    printf("Problem");
    gotoxy(98, 13);
    printf("Prescribed Doctor\n");
    printf("==========================================================================================================================");
    row = 17;
    while (fscanf(ek, " %s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, &p.Gender, &p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor) != EOF)
    {
        /* code */
        gotoxy(1, row);
        printf("%s %s", p.First_Name, p.Last_Name);
        gotoxy(20, row);
        printf("%c", p.Gender);
        gotoxy(32, row);
        printf("%i", p.age);
        gotoxy(37, row);
        printf("%s", p.Address);
        gotoxy(49, row);
        printf("%s", p.Contact_no);
        gotoxy(64, row);
        printf("%s", p.Email);
        gotoxy(88, row);
        printf("%s", p.Problem);
        gotoxy(98, row);
        printf("%s", p.Doctor);
        row++;
    }
    fclose(ek);
    getch();
    system("cls");
    MainMenu();
}

void Search_rec(void)
{
    char name[20];
    system("cls");
    Title(); // Call Title function
    FILE *ek;
    ek = fopen("Record2.dat", "r");
    printf("\n\n\t\t\t################################## Search Patients Record ##############################\n");
    gotoxy(12, 8);
    printf("\n Enter Patient Name to be viewed : ");
    scanf("%s", name);
    fflush(stdin);
    name[0] = toupper(name[0]);
    int row = 15;
    printf("\n\n\n");
    while (fscanf(ek, " %s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, &p.Gender, &p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor) != EOF)
    {
        /* code */
        if (strcmp(p.First_Name, name) == 0)
        {
            /* code */
            gotoxy(1, 13);
            printf("Full Name");
            gotoxy(20, 13);
            printf("Gender");
            gotoxy(32, 13);
            printf("Age");
            gotoxy(37, 13);
            printf("Address");
            gotoxy(49, 13);
            printf("Contact no");
            gotoxy(64, 13);
            printf("Email");
            gotoxy(88, 13);
            printf("Problem");
            gotoxy(98, 13);
            printf("Prescribed Doctor\n");
            printf("===============================================================================================================");
            gotoxy(1, row);
            printf("%s %s", p.First_Name, p.Last_Name);
            gotoxy(20, row);
            printf("%c", p.Gender);
            gotoxy(32, row);
            printf("%i", p.age);
            gotoxy(37, row);
            printf("%s", p.Address);
            gotoxy(49, row);
            printf("%s", p.Contact_no);
            gotoxy(64, row);
            printf("%s", p.Email);
            gotoxy(88, row);
            printf("%s", p.Problem);
            gotoxy(98, row);
            printf("%s", p.Doctor);
            printf("\n");
            break;
        }
    }

    if (strcmp(p.First_Name, name) != 0)
    {
        /* code */
        gotoxy(10, 15);
        printf("Record not found !");
        getch();
    }

    fclose(ek);

L:
    getch();
    fflush(stdin);
    printf("\n\n\t\t\tDo you want to view more[Y/N] ??");
    scanf("%c", &ans);
    if (toupper(ans) == 'Y')
    {
        /* code */
        Search_rec();
    }
    else if (toupper(ans) == 'N')
    {
        /* code */
        printf("\n\t\t Thank you  :) :) ");
        getch();
        system("cls");
        MainMenu();
    }
    else
    {
        printf("\n\t Invalid Input . \n");
        goto L;
    }
}

void Edit_rec(void)
{

    FILE *ek, *ft;
    int i, b, valid = 0;
    char ch;
    char name[20];
    system("cls");
    Title();
    ft = fopen("temp2.dat", "w+");
    ek = fopen("Record2.dat", "r");

    if (ek == NULL)
    {
        /* code */
        printf("\n\t Can not open file !! ");
        getch();
        system("cls");
        MainMenu();
    }

    printf("\n\n\t\t\t############################# Edit Patients Record #######################################\n\n\n");
    gotoxy(12, 13);
    printf("Enter the First Name of the Patient  : ");
    scanf("%s", name);
    fflush(stdin);
    name[0] = toupper(name[0]);
    gotoxy(12, 15);
    if (ft == NULL)
    {
        /* code */
        printf("\n Can not open file ");
        getch();
        system("cls");
        MainMenu();
    }

    while (fscanf(ek, " %s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, &p.Gender, &p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor) != EOF)
    {
        /* code */
        if (strcmp(p.First_Name, name) == 0)
        {
            valid = 1;
            gotoxy(25, 17);
            printf("################### Existing Record #####################");
            gotoxy(10, 19);
            printf("%s \t%s \t%c \t%i \t%s \t%s \t%s \t%s \t%s\n", p.First_Name, p.Last_Name, p.Gender, p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor);
            gotoxy(12, 22);
            printf("Enter the New First Name : ");
            scanf("%s", p.First_Name);
            gotoxy(12, 24);
            printf("Enter the Last Name : ");
            scanf("%s", p.Last_Name);
            gotoxy(12, 26);
            fflush(stdin);
            printf("Enter Gender : ");
            scanf("%c", &p.Gender);
            p.Gender = toupper(p.Gender);
            gotoxy(12, 28);
            printf("Enter age : ");
            scanf("%i", &p.age);
            gotoxy(12, 30);
            printf("Enter Address :");
            scanf("%s", p.Address);
            p.Address[0] = toupper(p.Address[0]);
            gotoxy(12, 32);
            fflush(stdin);
            printf("Enter Contact no : ");
            scanf("%s", p.Contact_no);
            gotoxy(12, 34);
            fflush(stdin);
            printf("Enter New Email : ");
            scanf("%s", p.Email);
            gotoxy(12, 36);
            fflush(stdin);
            printf("Enter problem :");
            scanf("%s", p.Problem);
            p.Problem[0] = toupper(p.Problem[0]);
            gotoxy(12, 38);
            fflush(stdin);
            printf("Enter Doctor Name :");
            scanf("%s", p.Doctor);
            p.Doctor[0] = toupper(p.Doctor[0]);
            printf("\n Press U character for Updating oparation : ");
            fflush(stdin);
            ch = getche();
            if (ch == 'u' || ch == 'U')
            {
                /* code */

                fprintf(ft, " %s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, p.Gender, p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor);
                printf("\n\n\n\t\t\t\t Patient record update successfully  ->  :) ");
            }
        }
        else
        {

            fprintf(ft, " %s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, p.Gender, p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor);
        }
    }
    if (!valid)
    {
        /* code */
        printf("\n\t\t No Record Found ......");
    }
    fclose(ft);
    fclose(ek);
    remove("Record2.dat");
    rename("temp2.dat", "Record2.dat");
    getch();
    system("cls");
    MainMenu();
}

void Dlt_rec()
{
    char name[20];
    int found = 0;
    system("cls");
    //Title();
    FILE *ek, *ft;
    ft = fopen("temp_file2.dat", "w+");
    ek = fopen("Record2.dat", "r");
    printf("\n\n\n\t################################ Delete Patients Record ######################################\n");
    printf("\n");
    printf("\n\n\tEnter the Patient Name to delete : ");
    fflush(stdin);
    gets(name);
    name[0] = toupper(name[0]);
    printf("\n\n");

    while (fscanf(ek, " %s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, &p.Gender, &p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor) != EOF)
    {
        /* code */
        if (strcmp(p.First_Name, name) != 0)
        {
            fprintf(ft, " %s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, p.Gender, p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor);
        }
        else
        {
            printf(" %s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, p.Gender, p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor);
            found = 1;
        }
    }
    if (found == 0)
    {
        /* code */

        printf("\n\n\nt\t\t\t Record Not found.....!!!");
        getch();
        system("cls");
        MainMenu();
    }
    else
    {
        fclose(ek);
        fclose(ft);
        remove("Record2.dat");
        rename("temp2.dat", "Record2.dat");
        printf("\n\n\n\t\t\t Record Deleted Successfully...");
        getch();
        system("cls");
        MainMenu();
    }
}