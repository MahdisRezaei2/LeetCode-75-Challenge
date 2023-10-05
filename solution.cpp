
#include <iostream>

int main()
{
    /**
     * word1="abc"
     * word2="pqr"
     * merged="apbqcr"
     */
    std::string word1 = "ab";
    std::string word2 = "pqrs";
    std::string merged;
    int mergeLength;
    if (word1.size() > word2.size())
        mergeLength = word1.size();
    else
        mergeLength = word2.size();

    int i = 0;
    //if word1.size() > word2.size()
    while (i < mergeLength)
    {
        if (i < word2.size())
        {
            merged += word1[i];
            merged += word2[i];
            i++;
        }
        else
        {
            merged += word1[i];
            i++;
        }
        
    }
     //if word1.size() < word2.size()
      while (i < mergeLength)
    {
        if (i < word1.size())
        {
            merged += word1[i];
            merged += word2[i];
            i++;
        }
        else
        {
            merged += word2[i];
            i++;
        }
        
    }
    //if word1.size() == word2.size()
      while (i < mergeLength)
    {
        
            merged += word1[i];
            merged += word2[i];
            i++;
        
        
    }
    std::cout << "merged: " << merged << std::endl;

    return 0;
}