# Lab_Project_Final
Object Oriented Programming I Course Laboratory Final Project

1. Sample
This code defines a class called Sample with three member variables: index, category, and features. The index and category variables are both integers, and features is a vector of doubles.
The Sample class has a constructor that takes three arguments: index, category, and features. The constructor initializes the member variables of the Sample object with the values of the corresponding arguments.
The Sample class has the public access specifier, which means that all of its member variables and member functions can be accessed from outside the class.

2. KNNClassifier
The KNNClassifier class is an implementation of the k-nearest neighbors (KNN) classification algorithm. The KNN algorithm is a simple and effective method for classifying samples based on their feature values. It works by finding the k training samples that are most similar to a given test sample and then using the categories of those samples to predict the category of the test sample.
The KNNClassifier class has a single constructor that takes a vector of Sample objects as its training_samples argument. The Sample object has two members: features, which is a vector of feature values, and category, which is an integer label representing the category of the sample. The constructor initializes the training_samples_ member variable with the given training samples.
The Classify() method takes a test Sample object and an integer num_neighbors as its arguments. It returns an integer representing the predicted category of the test sample. The method first calculates the distance between the test sample and each training sample using the Euclidean distance formula. It then sorts the distances in ascending order and gets the categories of the k-nearest neighbors (where k is the value of num_neighbors). Finally, it returns the category that has the most votes among the k-nearest neighbors.

# ➢ Implementation of the Project
This Project was developed and builded using CLion 2022.3 in Ubuntu 20.04.5 LTS environment.
Libraries : algorithm, cmath, vector
CMake : CMake version 3.24
C++ Standart : C++ 11

# ➢ How to install and run KNN_Project_v1
To install and KNN_Project_v1 on Ubuntu 20.04.5 LTS environment, some commands are needed first. The commands I used during the installation pahse are as follows:
--sudo apt update
--sudo apt upgrade
--sudo apt install build-essentials
No extra code/comment/input is required to run the project. It will output completely as random values on the console.
