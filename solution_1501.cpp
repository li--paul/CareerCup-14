#include <iostream>

using namespace std;

int main() {
        cout << "SELECT Departments.DeptID, DeptName, COUNT(*) AS EmpNum" << endl;
        cout << "FROM Departments LEFT JOIN Employees" << endl;
        cout << "ON Departments.DeptID = Employees.DeptID" << endl;
        cout << "GROUP BY Departments.DeptID, DeptName" << endl;
        return 0;
}
