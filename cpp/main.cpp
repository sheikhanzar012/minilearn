#include <iostream>
#include "linear_regression.h"

int main() {

    // Training data
    double X[] = {1, 2, 3, 4, 5};
    double y[] = {2, 4, 6, 8, 10};

    int n = 5;

    // Create the model
    LinearRegression model;

    // Train the model
    model.fit(X, y, n);

    // Display learned parameters
    std::cout << "Slope: "
              << model.getSlope() << std::endl;

    std::cout << "Intercept: "
              << model.getIntercept() << std::endl;

    // Make a prediction
    double prediction = model.predict(6);

    std::cout << "Prediction for x=6: "
              << prediction << std::endl;

    return 0;
}
