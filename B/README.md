# Steps of my work from April 28th to May 1st

## Task : New database

Initially, decided to proceed line by line, but realized that it is more logical to proceed column by column. This way, there wouldn't be a need to start over from the beginning when adding a new column.

### Step 1: Program to add a column

A program was written to be able to add an entire column with a single click: **colonne.c** file.

To use the program, "#" must be added after each data (after each line) so that the program understands that these are new data.

An example of data to provide would be: Easy # Easy # Advanced #

### Step 2 : Modifications that had to be made to the Excel data

To use the program correctly, modifications had to be made to the Excel data. These modifications varied depending on the type of data to enter.

**For textual data that doesn't need modification of the content**, a column of "#" was made next to the column containing the data to add a "#" between each line, as seen in the Excel document 1c.xlsx and in the image below.

   ![1c]/1c.png)

#### 1d) Pour les données textuelles dont le contenu n'a pas besoin d'être modifié, mais qui contient des retours à la ligne, j'ai aligné les "#" entre chaque ligne en fonction de la taille de chaque ligne, comme vous pouvez le voir dans le document Excel 1d.xlsx.

Remarque : Les colonnes 'avant' ou 'avant modification' ne doivent pas exister, elles sont là pour montrer les modifications effectuées.

Remarque : Je n'ai pas modifié le contenu mais j'ai supprimé quand même les chiffres et ": yes" que les cellules contenait qui peuvent nous poser des problèmes après.

### 1e) Pour les données textuelles dont le contenu n'a pas besoin d'être modifié, mais qui doivent être représentées sous forme de booléens TRUE et FALSE :

Remarque : J'ai substitué les "yes" par TRUE et les "NA" ou "no" par FALSE en utilisant Ctrl+F et l'outil remplacer comme vous pouvez le voir dans le document Excel 1e.xlsx. 

Remarque : Après la substitution, il faut vérifier le nombre des TRUE et des FALSE, pour être sûre que toutes les données sont correctement modifiées. Si l'addition des deux n'est pas égal à 208 ( nombre des chansons ) il y a un problème.

Remarque : Lors de substitution, quand on modifie les contenus de cellules, il faut qu'il ne reste que des TRUE et FALSE et pas de contenu devant ou derrier. Pour éviter ça, j'ai fait '\*TRUE\*' comme recherche et j'ai remplacé par TRUE. Ça permet de supprimer tous les contenus avant ou après de TRUE de chaque cellule. Pareil pour FALSE. 

### 1f) Pour les données textuelles dont le contenu a besoin d'être modifié : j'ai modifié en utilisant Ctrl+F et  l'outil remplacer comme vous pouvez le voir dans le document Excel 1f.xlsx.

Remarque : Le cas de bénéficiaires nécessite de modifier le contenu et d'en faire des booléennes par exemple. 
Si je veux faire des booléennes pour 'Children' : Je supprime tous les autres bénéficiaire en leur remplaçant par vide. Exemple :
Je recherche : 'Adults'  
Je remplace par le vide.
Pareil pour 'Seniors' et 'Teenagers'.
Puis, je recherche : 'Children'. Et je remplace par TRUE.
Il me reste des cases vides qui vont être FALSE à l'étape prochaine.

### 1g) Quand les données sont prêtes, je prend les deux colonnes ( la colonne des # et les données après la modification ) et je supprime tous les retours à la ligne en utilisant un outil sur internet  (https://www.textfixerfr.com/outils/outil-suppression-saut-de-ligne.php#google_vignette).

### 1h) Puis, dans un éditeur de texte ou de code (moi, sur XCODE), je vérifie encore une fois, si tout est bon. Par exemple, pour le cas des bénéficiaires, il y avait un 'Chidren' qui n'était pas devenu TRUE à cause de faute d'ortographe qu'il comportait. Je vérifie les choses comme ça, s'il y a des choses qui sont échappées de mes manipulations. 
Et les cellules vides sont devenus des '# #'. Je substitue tous les '# #' en '# FALSE #'. 

### 1i) Je contrôle le nombre des # et des TRUE & FALSE pour être sûre qu'il y a le bon nombre des données.

### 1j) J'amène ces données dans mon programme pour en utiliser et de produire le code SQL pour ajouter une colonne.

### 1l) Lors de chaque ajout de code SQL à Supabase : je crée des "new query"s pour pouvoir revenir à mes pas s'il y a qq chose qui ne va pas.

### 1k) Répetition des manipulations de 1c à 1j pour ajouter des colonnes à la BBD.

### 1l) Le 1er mai, je crée ce documentation sur GitHub pour expliquer mes faits.

Attention aussi : Au ' (car sql) il faut la remplacer par '' lors de contrôle au Xcode.
