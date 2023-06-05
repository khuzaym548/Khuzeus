#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    int vowel = 0,consonant = 0;
    cout<<"Enter the string: ";
    cin.getline(str,150);   //Represent end of string
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||str[i] =='A' ||
           str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowel++;
        }
        else if((str[i]>= 'a' && str[i] <= 'z')|| (str[i]>='A' && str[i]<='Z'))
        {
            consonant++;
        }
    }
    cout<<"Vowels in string are: "<<vowel << endl;
    cout<<"Consonant in string are: "<<consonant << endl;
    return 0;
}