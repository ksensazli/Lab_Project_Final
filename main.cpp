#include "Sample.h"
#include "KNNClassifier.h"

int main() {
    // Generate training samples
    vector<Sample> training_samples;

    for (int i = 0; i < 30; ++i) {
        int category = i / 10;
        vector<double> features;
        for (int j = 0; j < 2; ++j) {
            features.push_back(-5 + rand() % 11);
        }
        training_samples.emplace_back(i, category, features);
    }

    // Generate test samples
    vector<Sample> test_samples;
    for (int i = 0; i < 40; ++i) {
        vector<double> features;
        for (int j = 0; j < 2; ++j) {
            features.push_back(-5 + rand() % 11);
        }
        test_samples.emplace_back(i, -1, features);
    }

    // Create KNN classifier with training samples
    KNNClassifier classifier(training_samples);

    // Classify test samples using KNN classifier
    for (const auto& test_sample : test_samples) {
        int category = classifier.Classify(test_sample, 3);
        cout << "Test sample " << test_sample.index << " belongs to category " << category << endl;
    }

    return 0;
}
