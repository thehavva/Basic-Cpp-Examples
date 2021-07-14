// Finding Longestword Alternatif.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

void LongestWord(char string[100])
{
    char word[20], max[20], min[20], c;
    int i = 0, j = 0, flag = 0;
    for (i = 0; i < strlen(string); i++)
    {
        while (i < strlen(string) && string[i] != 32 && string[i] != 0)
        {
            word[j++] = string[i++];
        }
        if (j != 0)
        {
            word[j] = '\0';
            if (!flag)
            {
                flag = !flag;
                strcpy(max, word);
            }
            if (strlen(word) > strlen(max))
            {
                strcpy(max, word);
            }
            j = 0;
        }
    }
    printf("The largest word is '%s' .\n", max);

}


int main()
{
    char string[100];
    printf("Enter string: ");
    gets(string);
    LongestWord(string);
    return 0;
}
