public class Solution {
    public string rightJustify(string str, int maxWidth, bool isLast)
        {
            string ans = "";
            int spaces = 0;
            foreach(char s in str)
            {
                if (s == ' ') spaces++;
            }
            int d = maxWidth - str.Length;
            if(spaces==0 || isLast)
            {
                while (d-- > 0) str += ' ';
                return str;
            }
            int insertSpace = d / spaces;
            int extraSpace = d % spaces;
            foreach(char ch in str)
            {
                ans += ch;
                if(ch == ' ')
                {
                    for (int i = 0; i < insertSpace; i++) ans += ' ';
                    if (extraSpace > 0)
                    {
                        ans += ' ';
                        extraSpace--;
                    }
                }
            }
            return ans;
        }
    public IList<string> FullJustify(string[] words, int maxWidth) {
        IList<string> list = new List<string>();
            string curr = "";
            int space = 0;
            foreach(string word in words)
            {
                if(curr.Length+word.Length+space <= maxWidth)
                {
                    if (space > 0) curr += ' ';
                    curr += word;
                }
                else
                {
                    list.Add(curr);
                    curr = word;
                }
                space = 1;
            }
            list.Add(curr);
            IList<string> ans = new List<string>();

            bool isLast = false;
            for(int i=0; i<list.Count; i++)
            {
                string word = list[i];
                if (i + 1 == list.Count) isLast = true;
                ans.Add(rightJustify(word, maxWidth, isLast));
            }
            return ans;
    }
}