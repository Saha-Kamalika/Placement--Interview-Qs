import java.util.*;

class StringCount {
  public void wordVowCount(String s) {
    int vow = 0, word = 0, upp = 0;
    for (int i = 0; i < s.length(); i++) {
      char c = s.charAt(i);
      switch (c) {
        case ' ':
        case '.':
          word++;
      }
      switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
          vow++;
      }
      if (c >= 65 && c <= 90)
        upp++;
    }
    System.out.println("No of words: " + word);
    System.out.println("No of vowels: " + vow);
    System.out.println("No of uppercase letters: " + upp);
  }

  public void freq(String str) {
    TreeMap<Character, Integer> map = new TreeMap<>();
    for (int i = 0; i < str.length(); i++) {
      Integer c = map.get(str.charAt(i));

      if (map.get(str.charAt(i)) == null) {
        map.put(str.charAt(i), 1);
      } else
        map.put(str.charAt(i), ++c);
    }
    for (Map.Entry ele : map.entrySet()) {
      System.out.println("Character: " + ele.getKey());
      System.out.println("Frequency: " + ele.getValue());
    }
  }
}

class frequency {
  public static void main(String[] args) {
    String str = "I am Kamalika Saha.";
    StringCount s = new StringCount();
    s.wordVowCount(str);
    s.freq(str);
  }
}