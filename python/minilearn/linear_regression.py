class LinearRegression:
    """
    Simple Linear Regression implementation.

    Model:
        y = slope * x + intercept
    """

    def __init__(self):
        self.slope = 0.0
        self.intercept = 0.0

    def fit(self, X, y):
        """Train the linear regression model."""

        if len(X) != len(y):
            raise ValueError("X and y must have the same length.")

        if len(X) == 0:
            raise ValueError("Training data cannot be empty.")

        n = len(X)

        sum_x = sum(X)
        sum_y = sum(y)
        sum_xy = sum(x * target for x, target in zip(X, y))
        sum_x2 = sum(x * x for x in X)

        denominator = n * sum_x2 - sum_x ** 2

        if denominator == 0:
            self.slope = 0.0
            self.intercept = sum_y / n
            return self

        self.slope = (
            (n * sum_xy - sum_x * sum_y)
            / denominator
        )

        self.intercept = (
            (sum_y - self.slope * sum_x)
            / n
        )

        return self

    def predict(self, X):
        """Generate predictions."""

        return [
            self.slope * x + self.intercept
            for x in X
        ]

    def score(self, X, y):
        """Calculate R² score."""

        predictions = self.predict(X)

        mean_y = sum(y) / len(y)

        ss_total = sum(
            (actual - mean_y) ** 2
            for actual in y
        )

        ss_residual = sum(
            (actual - predicted) ** 2
            for actual, predicted in zip(y, predictions)
        )

        if ss_total == 0:
            return 0.0

        return 1 - (ss_residual / ss_total)
