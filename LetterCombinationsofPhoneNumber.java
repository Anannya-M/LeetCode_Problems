class Solution {
    public static String[] map = {".",".","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    public List<String> letterCombinations(String digits) {
        ArrayList<String> store = new ArrayList<>();
        if(digits.length() == 0){
            return store;
        }
        letterstore(digits,"",store);
        System.out.println(store);
        return store;
    }

    public static void letterstore(String digits,String ans, List<String> store){
        if(digits.length() == 0){
            store.add(ans);
            return;
        }
        String key = map[digits.charAt(0)-48];
        for (int i = 0;i<key.length();i++){
            letterstore(digits.substring(1),ans+key.charAt(i),store);
        }
    }
}