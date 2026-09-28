from minilearn import LinearRegression


# Training data
X = [1, 2, 3, 4, 5]
y = [2, 4, 6, 8, 10]


# Create the model
model = LinearRegression()


# Train the model
model.fit(X, y)


# Generate predictions
predictions = model.predict([6, 7, 8])


# Display results
print("Slope:", model.slope)
print("Intercept:", model.intercept)

print("Predictions:", predictions)

print("R² Score:", model.score(X, y))
