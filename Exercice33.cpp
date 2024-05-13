/*
a. Transformer le programme suivant pour que la fonction fct devienne une
fonction en ligne.
#include <iostream>
using namespace std ;
main()
{ int fct (char, int) ; // déclaration (prototype) de fct
int n = 150, p ;
char c = 's' ;
p = fct ( c , n) ;
cout << "fct (\'" << c << "\', " << n << ") vaut : " << p ;
} int fct (
char c, int n) // définition de fct
{ int res ;
if (c == 'a') res = n + c ;
else if (c == 's') res = n - c ;
else res = n * c ;
return res ;
}
b. Comment faudrait-il procéder si l’on souhaitait que la fonction fct soit
compilée séparément ?
*/

#include <iostream>
using namespace std ;
inline int fct (char c, int n)
{   int res ;
  if (c == 'a') res = n + c ;
  else if (c == 's') res = n - c ;
  else res = n * c ;
  return res ;
} int main ()
{   int n = 150, p ;
  char c = 's' ;
  p = fct (c, n) ;
  cout << "fct (\'" << c << "\', " << n << ") vaut : " << p ;
}

/*Résultat :
fct ('s', 150) vaut : 35

=== Code Execution Successful ===
*/

/*
b. La fonction fct étant en ligne, elle ne peut plus être compilée séparément. Il est cependant possible de la conserver dans un fichier d’extension h et d’incorporer simplement ce fichier par #include pour compiler le main
*/
