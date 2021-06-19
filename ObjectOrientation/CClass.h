#ifndef CCLASS_H
#define CCLASS_H

#define Public extern
#define Private static

#define VECTOR_DIMENTION 5
typedef int vec[VECTOR_DIMENTION];

/* define Class */
typedef struct CClass CClass_t;

typedef struct CClass {

	//Constractor.
	void (*constractor)(CClass_t *class_a);
	//Destractor.
	void (*destractor)(CClass_t *calss_a);
	//public member1.
	int* member1;
	//public method1.
	void (*method_sum_vector)(vec vrcter_a, vec vector_b, vec vector_sum);
	//setter.
	void (*setter)(const int set_number);
	//getter.
	int (*getter)(void);

}CClass_t;
/* end defining Class*/

/* public method function & value */
Public void Constractor(CClass_t *class_a);
Public void Destractor(CClass_t *class_a);
Public int member1;
Public void sum_vector(vec vector_a, vec vector_b, vec vector_sum);
Public void setter(const int set_number);
Public int getter(void);

#endif/*:CCLASS_H*/
