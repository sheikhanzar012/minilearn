#ifndef LINEAR_REGRESSION_H
#define LINEAR_REGRESSION_H

class LinearRegression {
private:
    double slope;
    double intercept;

public:
    LinearRegression();

    void fit(const double X[], const double y[], int n);

    double predict(double x) const;

    double getSlope() const;
    double getIntercept() const;
};

#endif
