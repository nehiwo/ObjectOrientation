#include "CClass.h"
#include <stdio.h>

//private method & member.
Private int member2 = 0;
Private int sum_scaler(const int* a, const int* b);

//instance of public member.
member1 = 0;

/* define method */
void Constractor(CClass_t* class_a){
	member1 = 0;
	class_a->member1 = &member1;
	class_a->constractor = Constractor;
	class_a->destractor = Destractor;
	class_a->method_sum_vecter = sum_vecter;
	class_a->setter = setter;
	class_a->getter = getter;
	member2 = 0;
	printf("Open Consttactor!\n");
}

void setter(const int set_number) {
	printf("member2 = %d\n", member2);
	member2 = set_number;
	printf("member2 = %d\n", member2);
}

int getter(void) {
	printf("member2 = %d\n", member2);
	return member2;
}

void Destractor(CClass_t* class_a) {
	if (class_a == NULL) {
		return;
	}
	member1 = 0;
	member2 = 0;
	printf("Open Destractor!\nClosed Class!\n");
}

int* sum_vecter(int* vecter_a,int* vecter_b, int* vecter_sum) {
	printf("%d %d\n", *vecter_a, *vecter_b);
	getchar();
	if (vecter_a == NULL || vecter_b == NULL) {
		printf("NO data.\n");
		exit(1);
	}
	printf("pass!\n");
	getchar();
	size_t vecter_a_size = sizeof(vecter_a);
	size_t vecter_b_size = sizeof(vecter_b);
	printf("%d, %d\n", vecter_a_size, vecter_b_size);
	if (vecter_a_size != vecter_b_size) {
		printf("dim(vecter_a) != dim(vecter_b) !\n");
		exit(2);
	}
	printf("pass!\n");
	getchar();
	for (int dim = 0; dim < vecter_a_size; dim++) {
		*vecter_sum = sum_scaler(vecter_a, vecter_b);
		vecter_a++;
		vecter_b++;
		vecter_sum++;
	}

	return vecter_sum;
}

int sum_scaler(const int* scaler_a, const int* scaler_b) {
	if (scaler_a == NULL || scaler_b == NULL) {
		exit(1);
	}

	return *scaler_a + *scaler_b;
}