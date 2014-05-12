#include <stdio.h>

char GRADE_MAP[] = { 'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};

class Grade {
	int * percent;
	char * letter;

public:
	Grade();
	~Grade();
	void print(){
		printf("Grade: %d: %c\n", *percent, *letter);
	};
	void setByLetter(char l){
		*letter = l;
		*percent = 100 - (l - 'A') * 10 - 5;
	};
	void setByPercent(int p){
		*percent = p;
		*letter = GRADE_MAP[p / 10];
	}
};

Grade::Grade(){
	percent = new int;
	letter = new char;
}

Grade::~Grade(){
    delete percent;
    delete letter;
}

int main() {
	Grade g;
	int percent;
	
	printf("Enter two grades separated by a space. Use a percentage for the first and letter for the second: ");
	scanf("%d", &percent);
	scanf("\n");
	
	g.setByPercent(percent);
	g.print();
	
	g.setByLetter(getchar());
	g.print();

	return 0;
}
