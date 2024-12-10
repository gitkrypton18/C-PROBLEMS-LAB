// The annual examination results of 10 students are tabulated as follows:
// Roll No. Subject1 Subject2 Subject3
#include <stdio.h>
float swap(float a,float b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    

}
int main()
{
    float arrstudent[5][5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the roll no follwed by marks of student %d\n", i + 1);
        for (int j = 0; j < 4; j++)
        {
            scanf("%f", &arrstudent[i][j]);
        }
        arrstudent[i][4] = arrstudent[i][1] + arrstudent[i][2] + arrstudent[i][3];
    }

    printf("Roll_No \t Subject_1\t Subject_2\t Subject_3\t Total\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%.1f\t\t ", arrstudent[i][j]);
        }
        printf("\n");
    }
    float max[0][0]  ;  for (int i = 1; i < 5; i++)
    {
        if (arrstudent[i-1][4]>arrstudent[i][4])
        {
           swap(arrstudent[i-1][4],arrstudent[i][4]);
        }
        
    }
    printf("The highest marks are obtained by %d roll no and his marks id %d",);
    

    return 0;
}