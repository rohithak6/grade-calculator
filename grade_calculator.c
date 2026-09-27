#include <stdio.h>
#include <string.h>
int main(){
    char name[50];
    char grade[3];
    int c, cpp, java, maths, english;
    int total;
    float average;
    float percentage;
    printf("Enter student name: ");
    scanf("%s", name);
    printf("Enter C marks: ");
    scanf("%d", &c);
    printf("Enter C++ marks: ");
    scanf("%d", &cpp);
    printf("Enter Java marks: ");
    scanf("%d", &java);
    printf("Enter Maths marks: ");
    scanf("%d", &maths);
    printf("Enter English marks: ");
    scanf("%d", &english);
    total = c + cpp + java + maths + english;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;
    if (percentage >= 90){
        strcpy(grade, "A+");
    }
    else if (percentage >= 80){
        strcpy(grade, "A");
    }
    else if (percentage >= 70){
        strcpy(grade, "B");
    }
    else if (percentage >= 60){
        strcpy(grade, "C");
    }
    else if (percentage >= 50){
        strcpy(grade, "D");
    }
    else{
        strcpy(grade, "F");
    }
    printf("\n----- RESULT -----\n");
    printf("Student: %s\n", name);
    printf("Total: %d/500\n", total);
    printf("Average: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %s\n", grade);
    return 0;
}