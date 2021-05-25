#include <iostream>
#include <iterator>
#include <algorithm>
#include <regex>
#include <map>
#include <cctype>

const std::regex re(R"([\w]+)");
const std::string test{"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quibus natura iure responderit non esse verum aliunde finem beate vivendi, a se principia rei gerendae peti; Quae enim adhuc protulisti, popularia sunt, ego autem a te elegantiora desidero. Duo Reges: constructio interrete. Tum Lucius: Mihi vero ista valde probata sunt, quod item fratri puto. Bestiarum vero nullum iudicium puto. Nihil enim iam habes, quod ad corpus referas; Deinde prima illa, quae in congressu solemus: Quid tu, inquit, huc? Et homini, qui ceteris animantibus plurimum praestat, praecipue a natura nihil datum esse dicemus?"};

int main()
{
  //count the character numbers
  std::map<char, size_t> counter{};
  std::for_each(test.begin(), test.end(), [& counter](const char c){ if (std:: isalpha(c) ) counter [std::tolower(c)]++; });

  //Print the number of words
  std::cout << "Number of Words: "
    << std::distance
  (std::sregex_token_iterator(test.begin(), test.end(), re, 1)),
  std::sregex_token_iterator())
  << "\n\nCount of characters:\n\n";

  for (const auto& [character, count] : counter) std::cout << character << " -> " << count << "\n";

  return 0;
}
