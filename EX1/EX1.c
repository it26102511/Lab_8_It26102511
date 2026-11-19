# include <stdio.h>
# define SIZE 10

void inputMarks( int marks[], int size);
double calculateAverage( int marks[], int size);
void displayAboveAverage( int marks[], int size, double average);

int main()
{
	int marks [SIZE];
	double average;

	inputMarks(marks, SIZE);
	
	average = calculateAverage(marks, SIZE);
	
	printf("class Average: %.1f\n", average);
	
	displayAboveAverage(marks, SIZE, average);
	
	return 0;
}

void inputMarks( int marks[], int size)
{
	int i;

	printf("Enter marks of 10 students: \n");
	for (i=0; i<SIZE; i++)
	{       printf("Student %d: ", i+1);
		scanf("%d", &marks[i]);
	}
}


double calculateAverage( int marks[], int size)
{
	int i;
	int total=0;
       
	for (i=0; i<SIZE; i++)
	{      
		total += marks[i];
	}

	return (double)total / SIZE;
}



void displayAboveAverage( int marks[], int size, double average)
{
	int i;
	printf("Students scoring above average: ");

	for(i=0; i<SIZE; i++)
	{
		if (marks[i]>average)
		{
			printf("%d", marks[i]);
		}
	}
	printf(",\n");
}









