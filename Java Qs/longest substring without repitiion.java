class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashSet<Character> set=new HashSet<>();
        String longestOverall="";
        String longestTillNow="";
        int j=0;
        for(int i=0;i<s.length();){
            char c=s.charAt(i);
            if(set.contains(c)){
                longestTillNow="";
                set.clear();
                i=++j;
            }else{
            set.add(c);
            longestTillNow+=c;
            ++i;
            }
        if(longestTillNow.length()>longestOverall.length()){
            longestOverall=longestTillNow; 
        }                         
    }
    return longestOverall.length();
    }
}
