
[640. Solve the Equation](https://leetcode.com/problems/solve-the-equation/)


**思路**：


对括号两端分别求x的系数以及常数值。

``` java

class Solution {
    public String solveEquation(String equation) {
        int[] res = evaluateExpression(equation.split("=")[0]),
                res2 = evaluateExpression(equation.split("=")[1]);

        res[0] -= res2[0];
        res[1] = res2[1] - res[1];
        if (res[0] == 0 && res[1] == 0)
            return "Infinite solutions";
        if (res[0] == 0)
            return "No solution";
        return "x=" + res[1]/res[0];
    }
    public int[] evaluateExpression(String exp) {
        String[] tokens = exp.split("(?=[-+])");
        int[] res = new int[2];
        for (String token: tokens) {
            if (token.equals("+x") || token.equals("x")) {
                res[0] +=1;
            } else if(token.equals("-x")) {
                res[0] -=1;
            } else if (token.contains("x")) {
                res[0] += Integer.parseInt(token.substring(0, token.indexOf("x")));
            } else {
                res[1] += Integer.parseInt(token);
            }
        }
        return res;
    }
}

// 带解释
public class Solution {
    public String solveEquation(String equation) {
        String[] parts = equation.split("=");
        int[] leftPart = evaluate(parts[0]);
        int[] rightPart = evaluate(parts[1]);
        if(leftPart[0] == rightPart[0] && leftPart[1] == rightPart[1]) {
            return "Infinite solutions";
        }else if (leftPart[0] == rightPart[0]){
            return "No solution";
        }
        return "x="+ (rightPart[1]-leftPart[1])/(leftPart[0]-rightPart[0]);
    }
    
    private int[] evaluate(String str){
        String[] tokens = str.split("(?=[+-])");  // ()for match group; ?= for match and include in res; [+-] means + or -;
        int[] res = new int[2]; // coefficient for x;  coefficient for constant
        for(String token : tokens) {
            if (token.equals("+x") || token.equals("x")) res[0]++; // x means 1x
            else if (token.equals("-x")) res[0]--;// -x means -1x
            else if (token.contains("x")) {
                res[0] += Integer.parseInt(token.substring(0, token.length()-1)); 
            }else {
                res[1] += Integer.parseInt(token);
            }
        }
        return res;
    }
}




```


