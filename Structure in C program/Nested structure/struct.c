#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student_college_detail // nested structure
{
    /* data */
    int college_id;
    char *college_name;
};

struct student_detail
{
    /* data */
    int id;
    char *name;
    float percentage;
    // Structure within Structure
    struct student_college_detail clg_data;

} stu_data;

int main()
{

    struct student_detail stu_data;
    stu_data.id = 101;
    stu_data.name = "MD. Ashiqur Rahman Bhuiyan";
    stu_data.percentage = 22.45;
    stu_data.clg_data.college_id = 995;
    stu_data.clg_data.college_name = "Brahmanbaria Govt College";
    printf("Id is : %d \n", stu_data.id);
    printf("Student Name is : %s \n", stu_data.name);
    printf("Percentage is : %f \n", stu_data.percentage);
    printf("College Id is : %d \n", stu_data.clg_data.college_id);
    printf("College Name  is : %s \n", stu_data.clg_data.college_name);
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
