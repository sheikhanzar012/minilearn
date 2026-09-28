# MiniLearn

> A lightweight machine learning framework built from scratch using Python and C++.

MiniLearn is an educational and experimental machine learning framework designed to implement fundamental machine learning algorithms while exploring the integration of Python and C++.

## 🚀 Project Goals

MiniLearn aims to:

- Understand how machine learning algorithms work internally
- Implement algorithms without relying entirely on existing ML frameworks
- Provide a simple Python API
- Explore high-performance C++ implementations
- Learn Python/C++ interoperability
- Build a clean and extensible ML framework architecture

## 🧠 Current Features

### Linear Regression

MiniLearn currently includes a from-scratch implementation of Linear Regression.

Supported operations:

- Model training
- Prediction
- Slope calculation
- Intercept calculation
- R² score calculation

## 💻 Technologies

- Python
- C++17
- CMake
- NumPy
- Git & GitHub

## 📁 Project Structure

```text
minilearn/
│
├── cpp/
│   ├── linear_regression.h
│   ├── linear_regression.cpp
│   └── main.cpp
│
├── python/
│   └── minilearn/
│       ├── __init__.py
│       └── linear_regression.py
│
├── examples/
│   └── linear_regression_demo.py
│
├── CMakeLists.txt
│
├── requirements.txt
│
└── README.md
