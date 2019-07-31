
class Solution {
    public int shoppingOffers(List<Integer> price, List<List<Integer>> special, List<Integer> needs) {
        if (special.size() == 0) {
            int res = 0;
            for (int i = 0; i<price.size(); i++) {
                res += price.get(i) * needs.get(i);
            }
            return res;
        }

        List<Integer> back = new LinkedList<>(needs);
        List<Integer> tmp = new LinkedList<>(special.get(0));
        int max = Integer.MAX_VALUE;
        int cost = tmp.get(tmp.size()-1);
        //找到需要几个tmp special 组合
        for(int i = 0;i<price.size();i++) {
            if (tmp.get(i) != 0) {
                max = Math.min(max, needs.get(i)/tmp.get(i));
            }
        }
        // 找个后这个special就可以remove了

        special.remove(0);
        int sum = Integer.MAX_VALUE;
        //如果找到2个，max = 2, 则这个special可取0个，1个，或者2个，需要遍历
        for(int i = 0;i<=max;i++){
            if (i != 0) {
                for(int j = 0;j<price.size();j++) {
                    back.set(j, back.get(j) - tmp.get(j));
                }
            }
            int st = shoppingOffers(price, special, back);
            sum = Math.min(sum, cost* i + st);
        }

        //需要恢复成原来的值，上层循环需要用到
        special.add(0, tmp);
        return sum;
    }
}


