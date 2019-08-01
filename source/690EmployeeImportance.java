
/*
// Employee info
class Employee {
    // It's the unique id of each node;
    // unique id of this employee
    public int id;
    // the importance value of this employee
    public int importance;
    // the id of direct subordinates
    public List<Integer> subordinates;
};
*/
class Solution {
    public int getImportance(List<Employee> employees, int id) {
        if (employees.size() == 0)
            return 0;
        int sum = 0 ;
        for( Employee employee: employees) {
            // employees不重复，所以找到了就可以break.
            if(employee.id == id) {
                sum += employee.importance;
                
                if (employee.subordinates.size() == 0) {
                    return sum;
                }
                for(int subEmployee: employee.subordinates) {
                    sum += getImportance(employees, subEmployee);
                }
                break;
            }
        }
        return sum;
    }
}

