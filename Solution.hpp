//
//  Solution.hpp
//  Sort
//
//  Created by 307A on 2017/1/31.
//  Copyright © 2017年 徐嘉宏. All rights reserved.
//

#ifndef Solution_hpp
#define Solution_hpp

#include <stdio.h>

class Solution {
private:
    void swap(int *a, int *b);
    
public:
    //冒泡排序
    void bubbleSort(int *array, int num);
    //选择排序
    void selectionSort(int *array, int num);
    //直接插入排序
    void insertSort(int *array, int num);
    //快速排序
    void quickSort(int *array, int front, int back);
};

#endif /* Solution_hpp */
