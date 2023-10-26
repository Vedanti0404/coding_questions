#include<bits/stdc++.h>
using namespace std;
int main(){
    
//check whether a gmail is valid or not.

// bool gmail(int n){

// for(int i=0; i<n ;i++)
// {
//   if(!((g[i]>=65 && g[i]<=90) || (g[i]>=97 && g[i]<=122) || (g[i]<=48 && g[i]>=57)))
//   {
//     if(g[i]!='.','@')
//{
      
    
//     }
//   }
// }
//     cout<<"It is a vaild gmail id"<<endl;


//   return 0;



// }











//check whether a phone number is valid or not


// bool phn(string pN){
  
//   if (PN.length() != 10) {
//     return false;
//   }
//   char c;
//   for ( c : PN) {
//     if (c < '0' || c > '9') {
//       return false;
//     }
//   }

//   return true;
// }

// int main() {
//   string PN;
//   cout << "Enter a phone number: ";
//   cin >> PN;

//   if (phn(PN)) 
//   {
//     cout << " phone number is valid.";
//   } else 
//   {
//     cout << "phone number is invalid.";
//   }

//   return 0;
// }
// }


















//count the number of lines, words and letters in the given paragraph.

  string s = "The words hadn't flowed from his fingers for the past few weeks. He never imagined he'd find himself with writer's block, but here he sat with a blank screen in front of him. That blank screen taunting him day after day had started to play with his mind. He didn't understand why he couldn't even type a single word, just one to begin the process and build from there. And yet, he already knew that the eight hours he was prepared to sit in front of his computer today would end with the screen remaining blank.";
  int n = s.length();
  int vowel_counter = 0;
  int consonant_counter =0 ;
  for(int i=0;i<n;i++){

    if((s[i]>=97 && s[i]<=122)||(s[i]>=65 && s[i]<=90))

    {

      if((s[i]=='a' || s[i]=='i' || s[i]=='e' || s[i]=='o' || s[i]=='u') || (s[i]=='A' || s[i]=='I' || s[i]=='E' || s[i]=='O' || s[i]=='U')){

        vowel_counter++;

      }

      else {

        consonant_counter++;

      }

    }
   
  }
cout<<n<<endl;
cout<<"The number of vowels in the line are: "<<vowel_counter<<" and the number of consonants are: "<<consonant_counter<<endl;
}




 




