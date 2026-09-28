#include "linear_regression.h"

LinearRegression::LinearRegression()
    : slope(0.0), intercept(0.0) {
}

void LinearRegression::fit(const double X[], const double y[], int n) {

    if (n <= 0) {
        return;
    }

    double sumX = 0.0;
    double sumY = 0.0;
    double sumXY = 0.0;
    double sumX2 = 0.0;

    for (int i = 0; i < n; ++i) {
        sumX += X[i];
        sumY += y[i];
        sumXY += X[i] * y[i];
        sumX2 += X[i] * X[i];
    }

    double denominator = n * sumX2 - sumX * sumX;

    if (denominator == 0.0) {
        slope = 0.0;
        intercept = sumY / n;
        return;
    }

    slope = (n * sumXY - sumX * sumY) / denominator; 

    intercept = (sumY - slope * sumX) / n;
}

double LinearRegression::predict(double x) const {
    return slope * x + intercept;
}

double LinearRegression::getSlope() const {
    return slope;
}

double LinearRegression::getIntercept() const {
    return intercept;
}
