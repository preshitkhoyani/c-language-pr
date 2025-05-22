#include<stdio.h>
#include<string.h>

struct student
{
	int rollno;
	char name[100];
	int chem;
	int math;
	int phy;
	int total;
	float per;
};

int main()
{
	int f;
	printf("Enter student namber : ");
	scanf("%d",&f);
	printf("\n\n");
	
	
	struct student s[f];
	for(int i=0; i<f; i++)
	{
		printf("Enter Detail of Student %d\n", i+1);
		printf("Roll No => ");
		scanf("%d", &s[i].rollno);  //[do not put space , puit _(under scor)]
		printf("Name => ");
		scanf("%s", &s[i].name);
		gets(student[i].name);
		printf("Chemistry => ");
		scanf("%d",&s[i].chem);
		printf("Mathematics =>");
		scanf("%d",&s[i].math);
		printf("Physics => ");
		scanf("%d",&s[i].phy);
		printf("\n");
		printf("\n");
	    s[i].total = (s[i].chem + s[i].math + s[i].phy);
	    s[i].per = (s[i].total/3);
	}
	printf("\n");
	for(int i=0; i<f; i++)
	{
		printf("Roll No => %d\n", s[i].rollno);
		printf("Name => %s\n", s[i].name);
		printf("Chemistry => %d\n", s[i].chem);
		printf("Mathematics => %d\n", s[i].math);
		printf("Physics => %d\n", s[i].phy);
		printf("Total => %d / 300\n", s[i].total);
		printf("Percent => %.2f\n", s[i].per);
		printf("\n\n");
	}
	printf("\n");

}
/*

		Roll No => 121
		Name => po
		Chemistry => 99
		Mathematics => 65
		Physics => 68
		Total => 232 / 300
		Percent => 77.00
	
		Roll No => 525
		Name => hukong
		Chemistry => 66
		Mathematics => 88
		Physics => 77
		Total => 231 / 300
		Percent => 77.00
	
		Roll No => 262
		Name => Alock
		Chemistry => 99
		Mathematics => 98
		Physics => 98
		Total => 295 / 300
		Percent => 98.00
		
		Roll No => 44
		Name => kely
		Chemistry => 98
		Mathematics => 87
		Physics => 99
		Total => 284 / 300
		Percent => 94.00

*/