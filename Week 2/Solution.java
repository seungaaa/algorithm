import java.util.HashMap;

class Solution {
    public boolean solution(String[] phone_book) {
        boolean answer = true;

        HashMap<String, Integer> phonebook = new HashMap<>();

        for(int i = 0; i < phone_book.length; i++) {
            phonebook.put(phone_book[i], i);
        }

        for(int i = 0; i < phone_book.length; i++) {
            for(int j = 1; j < phone_book[i].length(); j++) {
                if(phonebook.containsKey(phone_book[i].substring(0, j))) {
                    answer = false;
                    return answer;
                }
            }
        }
        
        return answer;
    }
}