// Machine learning code using Python

// 1. LinearRegression
  import numpy as np
from sklearn.linear_model import LinearRegression

# Sample data
X = np.array([1, 2, 3, 4, 5]).reshape(-1, 1)
y = np.array([2, 4, 5, 4, 5])

# Create a linear regression model
model = LinearRegression()

# Fit the model to the data
model.fit(X, y)

# Make predictions
X_new = np.array([6]).reshape(-1, 1)
predicted_y = model.predict(X_new)
print("Predicted value:", predicted_y[0])
