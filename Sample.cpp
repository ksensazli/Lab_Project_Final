/* *********************************************************************************************************************
 * This code defines a class called Sample with three member variables: index, category, and features. The index and
 * category variables are both integers, and features is a vector of doubles.

 * The Sample class has a constructor that takes three arguments: index, category, and features. The constructor
 * initializes the member variables of the Sample object with the values of the corresponding arguments.

 * The Sample class has the public access specifier, which means that all of its member variables and member functions
 * can be accessed from outside the class.
 * ****************************************************************************************************************** */

#include "Sample.h"

Sample::Sample(int index, int category, const std::vector<double> &features)
        : index(index), category(category), features(features) {

}
