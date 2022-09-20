#include <stdio.h>

void input (long*, float*, float*, float*);
void sum_marks (float, float, float, float*);
void compute_grade (float, char*);
void print_all (long, float, char);
void print_matrix_grade(long, char);


int main ()
{
  float t1, t2, tf, sum;
  long matrix;
  char sel, grade;
  do {
      input (&matrix, &t1, &t2, &tf);

      sum_marks (t1, t2, tf, &sum);

      compute_grade (sum, &grade);

      print_all (matrix, sum, grade );

      print_matrix_grade (matrix, grade);



      printf("\n\nDo you want to continue? (y/n): ");
      getchar();
      scanf("%c", &sel);
     }

   while (sel=='Y' || sel=='y');

return 0;
}


//Input Data (Mark & etc.)
void input (long *Matrix , float *test_1, float *test_2, float *test_final)
{
    printf ("\nInsert matrix no. of the student :");
    scanf ("%ld", Matrix);
    printf ("\nInsert marks for Test 1 (Total of 25) :");
    scanf ("%f", test_1);
    printf ("\nInsert marks for Test 2 (Total of 25):");
    scanf ("%f", test_2);
    printf ("\nInsert marks for Final Test (Total of 50):");
    scanf ("%f", test_final);
}

//sum up all marks
void sum_marks (float test1, float test2, float testfinal, float *sum)
{
     *sum = test1 + test2 + testfinal;
     return sum;
}

//Grading of marks
void compute_grade (float sum, char *grade)
{
    if (sum >= 80)
    *grade = 'A';
    else if (sum >= 65)
    *grade = 'B';
    else if (sum >= 50)
    *grade = 'C';
    else if (sum >= 40)
    *grade = 'D';
    else if (sum >= 25)
    *grade = 'E';
    else
    *grade = 'F';
}

// PrintAll
void print_all (long matrix , float sum, char grade)
{
    printf("\n\n\tTotal marks for %ld is %.2f and the grade is %c",matrix ,sum, grade );
}

// Print_Matrix_Grade
void print_matrix_grade(long matrix, char grade)
{
    printf("\n\tMatrix number: %ld",matrix);
    printf("\n\tGrade: %c",grade);
}
