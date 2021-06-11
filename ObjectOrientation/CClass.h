#ifndef CCLASS_H
#define CCLASS_H

#define Public extern
#define Private static


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
	int* (*method_sum_vecter)(int* vrcter_a, int* vecter_b, int* vecter_sum);
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
Public int* sum_vecter(int* vecter_a, int* vecter_b, int* vecter_sum);
Public void setter(const int set_number);
Public int getter(void);

#endif/*:CCLASS_H*/
