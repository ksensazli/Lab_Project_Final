/* *********************************************************************************************************************
 * The KNNClassifier class is an implementation of the k-nearest neighbors (KNN) classification algorithm. The KNN
 * algorithm is a simple and effective method for classifying samples based on their feature values. It works by finding
 * the k training samples that are most similar to a given test sample and then using the categories of those samples to
 * predict the category of the test sample.

 * The KNNClassifier class has a single constructor that takes a vector of Sample objects as its training_samples
 * argument. The Sample object has two members: features, which is a vector of feature values, and category, which is an
 * integer label representing the category of the sample. The constructor initializes the training_samples_ member
 * variable with the given training samples.

 * The Classify() method takes a test Sample object and an integer num_neighbors as its arguments. It returns an integer
 * representing the predicted category of the test sample. The method first calculates the distance between the test
 * sample and each training sample using the Euclidean distance formula. It then sorts the distances in ascending order
 * and gets the categories of the k-nearest neighbors (where k is the value of num_neighbors). Finally, it returns the
 * category that has the most votes among the k-nearest neighbors.
 * ****************************************************************************************************************** */

#include "KNNClassifier.h"

KNNClassifier::KNNClassifier(const vector<Sample> &training_samples) : training_samples_(training_samples) {

}

int KNNClassifier::Classify(const Sample &test_sample, int num_neighbors) {
    // Calculate distances between test sample and training samples
    vector<pair<double, int>> distances;
    for (const Sample &training_sample: training_samples_) {
        double distance = 0;
        for (int i = 0; i < training_sample.features.size(); ++i) {
            distance += pow(test_sample.features[i] - training_sample.features[i], 2);
        }
        distances.emplace_back(sqrt(distance), training_sample.category);
    }

    // Sort distances in ascending order
    sort(distances.begin(), distances.end(),
         [](const pair<double, int> &a, const pair<double, int> &b) {
             return a.first < b.first;
         });

    // Get the categories of the k-nearest neighbors
    vector<int> k_neighbors;
    for (int i = 0; i < num_neighbors; ++i) {
        k_neighbors.push_back(distances[i].second);
    }

    // Return the category with the most votes
    return max_element(k_neighbors.begin(), k_neighbors.end(),
                       [&k_neighbors](const int &a, const int &b) {
                           return count(k_neighbors.begin(), k_neighbors.end(), a) <
                                  count(k_neighbors.begin(), k_neighbors.end(), b);
                       }) -
           k_neighbors.begin();
}
