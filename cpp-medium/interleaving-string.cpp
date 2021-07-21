// 97. Interleaving String [medium]
/*
   Given strings `s1`, `s2`, and `s3`, find whether `s3` is formed
by an interleaving of `s1` and `s2`.
   An interleaving of two strings `s` and `t` is a configuration
where they are divided into nonempty substrings such that:
   `s = s1 + s2 + ... + sn`
   `t = t1 + t2 + ... + tm`
   `|n - m| <= 1`
   The interleaving is `s1 + t1 + s2 + t2 + s3 + t3 + ...` or
`t1 + s1 + t2 + s2 + t3 + s3 + ...`
   Note: `a + b` is the concatenation of strings `a` and `b`.
   `0 <= s1.length, s2.length <= 100`
   `0 <= s3.length <= 200`
   `s1`, `s2`, and `s3` consist of lowercase English letters.
*/

#include <iostream>
#include <string>

bool be_interleaved(std::string, std::string, std::string);

int main()
{
   std::string this_string = "aabcc";
   std::string that_string = "dbbca";
   std::string goal = "aadbbbaccc";
   if (be_interleaved(this_string, that_string, goal))
   {
      std::cout << "Yes!" << std::endl;
   }
   else
   {
      std::cout << "No!" << std::endl;
   }
   // "No!"
}

bool be_interleaved(
   std::string this_string,
   std::string that_string,
   std::string goal
)
{

}
