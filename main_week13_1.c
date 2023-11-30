#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int student_number;
	char student_name[100];
	double student_grade;
};
int main(int argc, char *argv[]) {
	//instance 선언 
	struct student s1 = {123, "JUYEOP", 4.3};
	
	//다른값 변경
	s1.student_number = 123456;
	s1.student_name[0] = 'c';
	s1.student_grade = 0.7;
	//출력 
	printf("student_number : %i\n", s1.student_number);
	printf("student_name : %s\n", s1.student_name);
	printf("student_grade : %f\n", s1.student_grade);
	
	system("PAUSE");
	return 0;
}
