/*
 * HackerRank link: https://www.hackerrank.com/contests/cst370-s20-hw6/challenges/divide-and-conquer-max/submissions/code/1321701642
 * Title: hw6_1.cpp
 * Abstract: This program displays the biggest number in an array with n integer numbers using divide-and-conquer technique
 * Author: Jonathan Welham
 * ID: 6781
 * Date: 03/09/2020
 */


#include <iostream>
#include <vector>
using namespace std;

int maxDC(vector<int> input, int l, int h);

int main() {

    int n;
    cin >> n;

    vector<int> input;
    input.resize(n);

    int temp = 0;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        input.push_back(temp);
    }

    int max = maxDC(input, 0, input.size() - 1);
    cout << max;

    return 0;
}

int maxDC(vector<int> input, int l, int h) {
    if(l == h) { //Base Case: one element
        return input[l];
    }

    //Find middle
    int m = (l+h)/2;

    return max(maxDC(input, l, m), maxDC(input, m+1, h));
}

int max(int a, int b){ return (a > b) ? a : b;}