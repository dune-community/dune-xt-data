// This file is taken from
// http://people.sc.fsu.edu/~jburkardt%20/cpp_src/triangle_fekete_rule/triangle_fekete_rule.html
// License: LGPL

int fekete_degree(int rule);
int fekete_order_num(int rule);
void fekete_rule(int rule, int order_num, double xy[], double w[]);
int fekete_rule_num();
int* fekete_suborder(int rule, int suborder_num);
int fekete_suborder_num(int rule);
void fekete_subrule(int rule, int suborder_num, double suborder_xyz[], double suborder_w[]);
void fekete_subrule_1(int suborder_num, double suborder_xyz[], double suborder_w[]);
void fekete_subrule_2(int suborder_num, double suborder_xyz[], double suborder_w[]);
void fekete_subrule_3(int suborder_num, double suborder_xyz[], double suborder_w[]);
void fekete_subrule_4(int suborder_num, double suborder_xyz[], double suborder_w[]);
void fekete_subrule_5(int suborder_num, double suborder_xyz[], double suborder_w[]);
void fekete_subrule_6(int suborder_num, double suborder_xyz[], double suborder_w[]);
void fekete_subrule_7(int suborder_num, double suborder_xyz[], double suborder_w[]);
