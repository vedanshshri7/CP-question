#include <iostream>
#include <cmath>
#include <vector>

using namespace std;  

using Point = pair<double, double>;

// Function to compute the distance between two points
double distance(const Point& p1, const Point& p2) {
    return sqrt(pow(p2.first - p1.first, 2) + pow(p2.second - p1.second, 2));
}

double area(const Point& A, const Point& B, const Point& C) {
    double side1 = distance(A, B);
    double side2 = distance(B, C);
    double side3 = distance(C, A);

    double s = (side1 + side2 + side3) / 2;
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

int tritest(const Point& point, const Point& A, const Point& B, const Point& C) {
    double A_triangle = area(A, B, C);
    double A1 = area(point, B, C);
    double A2 = area(A, point, C);
    double A3 = area(A, B, point);

    // Check if the sum of the areas of the three triangles formed by the point is equal to the area of the main triangle
    if (A_triangle == A1 + A2 + A3) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    Point A, B, C;
    int N;

    cout << "Enter the coordinates of vertex A (x1 y1): ";
    cin >> A.first >> A.second;

    cout << "Enter the coordinates of vertex B (x2 y2): ";
    cin >> B.first >> B.second;

    cout << "Enter the coordinates of vertex C (x3 y3): ";
    cin >> C.first >> C.second;

    cout << "Enter the number of points (N): ";
    cin >> N;

    vector<Point> points(N);
    for (int i = 0; i < N; ++i) {
        cout << "Enter the coordinates of point " << i + 1 << " (x y): ";
        cin >> points[i].first >> points[i].second;
    }

    for (const auto& point : points) {
        if (tritest(point, A, B, C)) {
            cout << "Point (" << point.first << ", " << point.second << ") is inside the triangle ABC." << endl;
        } else {
            cout << "Point (" << point.first << ", " << point.second << ") is outside the triangle ABC." << endl;
        }
    }

    return 0;
}