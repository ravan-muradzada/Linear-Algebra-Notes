import numpy as np

matrix = np.array([
    [1, 2, 3],
    [4, 6, 1],
    [1, 2, 4]
])

determinant = np.linalg.det(matrix)
print(f"\nDeterminat of the matrix is {determinant}")