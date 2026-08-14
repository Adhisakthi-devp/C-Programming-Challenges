#include <stdio.h>

int main()
{
    float temp;
    int i, j;
    float val[100], sum = 0, avg, num;
    float highest, smallest;
    int count = 0;
    printf("START READING VALUES\n");

    FILE *file = fopen(
        "D:/STM/C Programming Assignment/Assignment set-1/Temperature Data Analysis/tempData.txt.txt",
        "r"
    );
    if(file == NULL)
    {
        printf("File opening failed..!\n");
        return 1;
    }
    for(i = 0; i < 100; i++){
        if(fscanf(file, "%f,", &val[i]) != 1){
            printf("Error reading temperature data\n");
            fclose(file);
            return 1;
        }
        sum += val[i];
    }
    avg = sum / 100;
    // Finding above average
    for(i = 0; i < 100; i++){
        if(val[i] > avg)
            count++;
    }
    // Sorting - Bubble Sort
    for(i = 0; i < 99; i++){
        for(j = 0; j < 99 - i; j++){
            if(val[j] > val[j + 1]){
                num = val[j];
                val[j] = val[j + 1];
                val[j + 1] = num;
            }
        }
    }
    // Assigning values
    smallest = val[0];
    highest = val[99];

    printf("\nHighest Temperature : %.2f\n", highest);
    printf("Lowest Temperature  : %.2f\n", smallest);
    printf("Average Temperature : %.2f\n", avg);
    printf("Above Average Count : %d\n", count);
    printf("\nAscending Order:\n");

    for(i = 0; i < 100; i++)
    {
        printf("%.2f ", val[i]);
        if(i%10==0) printf("\n");
    }

    fclose(file);

    return 0;
}