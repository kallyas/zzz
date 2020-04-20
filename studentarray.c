/*you a programming student and you are required to write a program that will 
capture the following (a)first names (b)Age for any no of students in class 
where each student will receive their age
2.Tell the average age of all students in the class
(b)tell the youngest student
(c)tell oldest student in class
(d)print the list of all students in class
(e)print the list of all students and their ages in class
(f)print the total age of all students in class*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct studentsdata{
	int age;
	char names;
};
int studentNumber;
int main(){
	struct studentsdata student[studentNumber];
	int i;
	int counter=1;
	puts("\t\tStudents Data");
	printf("Enter the number of students in class: ");
	scanf("%d",&studentNumber);
	printf("Student's Data:");
	//populate the array of students data 
	for (i=0;i<studentNumber;i++)
	{
		printf("studentdata at address:%d\n",counter++);
		scanf("%s",student[i].names);
		printf("Age of %s:\n",student[i].names);
		scanf("%d",&student[i].age);
	}
	//information in the array
	for (i=0;i<studentNumber;i++)
	{
		printf("Name:%s\t",student[i].names);
		printf("Age:%d\t",student[i].age);
	}
	return 0;
}