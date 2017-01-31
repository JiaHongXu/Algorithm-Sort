//
//  Solution.cpp
//  Sort
//
//  Created by 307A on 2017/1/31.
//  Copyright © 2017年 徐嘉宏. All rights reserved.
//

#include "Solution.hpp"
#include <iostream>

using namespace std;

#define SIZE(a) (sizeof(a)/sizeof((a)[0]))

//交换两个数
void Solution::swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Solution::bubbleSort(int *array, int num) {
    
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num-i-1; j++) {
            //每次循环后，第length-i-1个数后面已经排好序不需要再排
            if (array[j] > array[j+1]) {
                swap(&array[j], &array[j+1]);
            }
        }
    }
}

void Solution::selectionSort(int *array, int num) {

    //找出每次的最小值，放在第一个
    for (int i = 0; i < num; i++) {
        int index = i;
        for (int j = i; j < num-1; j++) {
            if (array[index] > array[j+1]) {
                index = j+1;
            }
        }
        
        if (index!=0) {
            swap(&array[i], &array[index]);
        }
    }
}

void Solution::insertSort(int *array, int num) {
    
    for (int i = 0; i < num; i++) {
        //从a[i]-a[num]中选出最小的和a[i]交换
        int index = i;
        for (int j = i; j < num-1; j++) {
            if (array[index] > array[j+1]) {
                index = j+1;
            }
        }
        swap(&array[index], &array[i]);
    }
}

void Solution::quickSort(int *array, int front, int back) {
    if (front>=back) {
        return;
    }
    
    //选定某一个为基准数，这里取第一个数为基准数
    int i = front, j = back, target = array[front];
    while (i!=j) {
        //从后往前找，遇到第一个比基准数大的
        while (array[j]>=target&&i<j) {
            j--;
        }
        swap(&array[i], &array[j]);
        
        //从前往后找，遇到第一个比基准数小的
        while (array[i]<=target&&i<j) {
            i++;
        }
        
        //交换这两个数
        swap(&array[j], &array[i]);
    }
    
    //分治的思想 前半部分和后半部分继续排序
    quickSort(array, front, i-1);
    quickSort(array, i+1, back);
}
