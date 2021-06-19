#include "CClass.h"
#include <stdio.h>

//private method & member.
Private int member2 = 0;
Private int sum_scaler(const vec a, const vec b, const int* dim);

//instance of public member.
member1 = 0;

/* define method */
void Constractor(CClass_t* class_a){
	member1 = 0;
	class_a->member1 = &member1;
	class_a->constractor = Constractor;
	class_a->destractor = Destractor;
	class_a->method_sum_vector = sum_vector;
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

void sum_vector(vec vector_a,vec vector_b, vec vector_sum) {
	if (vector_a == NULL || vector_b == NULL) {
		printf("NO data.\n");
		exit(1);
	}

	for (int dim = 0; dim < VECTOR_DIMENTION; dim++) {
		vector_sum[dim] = sum_scaler(vector_a, vector_b, &dim);
	}

	return;
}

int sum_scaler(const vec scaler_a, const vec scaler_b, const int* dim) {
	if (scaler_a == NULL || scaler_b == NULL) {
		exit(1);
	}

	return scaler_a[*dim] + scaler_b[*dim];
}