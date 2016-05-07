# Compilation

Dans ce projet produit durant mmon année de master, nous devions développer un compilateur simple pour le langage pascal. Dans le dossier src se trouve
le code ainsi que le fichier lexer et le fichier bison. Dans le dossier pascal se trouve des exemple de code en pascal. Voici les différentes étapes mis en place par le code.

# Construction de l'arbre de dérivation

Le lexer et le bison permettent de créer un arbre de dérivation à partir du code lu. Cette étape, qui nous permettra d'interpréter le code plus tard,
était en majeure partie faite et donné par l'enseignant. Elle permet de vérifier qu'il n'y a pas d'erreurs syntaxiques et que le code lu appartient bien
au langage interprété.

# Analyse sémantique

Durant cette étape sera crée la table des symboles, un tableau contenant chaque symbole du code, son type et son scope. Cette étape permet par exemple de vérifier
qu'il n'y ai pas d'erreurs de types.

# Génération du code intermédiaire: le code 3 adresses

Cette étape utilise les données des étapes précédentes pour générer un code intermédiaire interprétable directement par la machine. Eventuellement, des optimisations
seront appliqués.