// Copyright 2020 Kochankov Ilya
#ifndef MODULES_TASK_3_KOCHANKOV_I_BITWISE_SORT_FOR_DOUBLE_WITH_SIMPLE_MERGE_H_
#define MODULES_TASK_3_KOCHANKOV_I_BITWISE_SORT_FOR_DOUBLE_WITH_SIMPLE_MERGE_H_
#include <mpi.h>
#include <vector>
#include <string>

std::vector<double> getRandomVector(int size);
std::vector<double> linear_bitwise_sort(const std::vector<double>& vect);
std::vector<double> bitwise_sort(const std::vector<double>& vect, int discharge);
int get_digit(double number, int discharge);
int get_digit_number_above_zero(int number);
int get_digit_number_below_zero(double number);


#endif  // MODULES_TASK_3_KOCHANKOV_I_BITWISE_SORT_FOR_DOUBLE_WITH_SIMPLE_MERGE_H_
