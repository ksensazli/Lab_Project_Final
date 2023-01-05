#ifndef LAB_PROJECT_V1_SAMPLE_H
#define LAB_PROJECT_V1_SAMPLE_H

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

// Sample class represents a training or test sample with its index, category, and features
class Sample {
public:
    /// Constructs a new Sample object.
    Sample(int index, int category, const vector<double>& features);
    /// Index of the sample.
    int index;
    /// Category of the sample.
    int category;
    /// Features of the sample.
    vector<double> features;
};


#endif //LAB_PROJECT_V1_SAMPLE_H
