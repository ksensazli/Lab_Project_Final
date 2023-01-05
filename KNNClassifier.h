#ifndef LAB_PROJECT_V1_KNNCLASSIFIER_H
#define LAB_PROJECT_V1_KNNCLASSIFIER_H

#include "Sample.h"

class KNNClassifier {
public:
    /// Constructor initializes the classifier with the given training samples
    KNNClassifier(const vector<Sample>&);

    /// Classify test sample using KNN algorithm with given number of neighbors
    int Classify(const Sample&, int);

private:
    /// A vector of Sample objects representing the training data
    vector<Sample> training_samples_;
};



#endif //LAB_PROJECT_V1_KNNCLASSIFIER_H
