#pragma once
#ifndef _SUMARRAYH_
#define _SUMARRAYH_
#include <vector>

class SumArray
{
private:
    int size;                   // Размер вектора
    int num_threads;            // Количество потоков для вычисления суммы
    std::vector<int>values;     // Вектор значений
    int result;                 // Результат представляет собой сумму всех значений вектора
    void calc_sum_part(int l_index, int r_index, int index);    // Вычисляем сумму значений интервала [l_index, r_index]
public:
    SumArray(int _size, int _num_threads);          // _size - размер вектора, _num_threads - количество потоков
    ~SumArray();
    int calculate_using_threads();                  // Вычисляем сумму значений с использованием потоков
    int calculate_without_threads();                // Вычисляем сумму значений в основном потоке
    void printArray();                              // Выводим значения вектора
};

#endif
