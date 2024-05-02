# Steps of my work from April 28th to May 1st

## Task : New database from an excel file

Initially, decided to proceed line by line, but realized that it is more logical to proceed column by column. This way, there wouldn't be a need to start over from the beginning when adding a new column.

### Step 1: Program to add a column

A program was written to be able to add an entire column with a single click: **colonne.c** file.

To use the program, "#" must be added after each data (after each line) so that the program understands that it is an another line.

An example of data to provide would be: 

![1a](/B/1a.png)

### Step 2 : Modifications that had to be made to the Excel data

To use the program correctly, modifications had to be made to the excel data. These modifications varied depending on the type of data to enter.

**For textual data that doesn't need modification of the content**, a column of "#" was made next to the column containing the data to add a "#" between each line, as seen in the excel file 1c.xlsx and in the image below.

![1c](/B/1c.png)

**For textual data that content doesn't need modification but contains line breaks,** "#" was aligned between each line according to the size of each line, as seen in the excel file 1d.xlsx and in the image below.

![1d](/B/1d.png)

Content wasn't modified, but numbers and ": yes" in the cells were deleted to prevent potential issues later.

The 'before' or 'before modification' columns shouldn't exist; they are in the images and in the files to show the modifications made.

**For textual data that content doesn't need modification but needs to be represented as TRUE and FALSE booleans**, "Yes" was substituted with TRUE and "NA" or "no" with FALSE using Ctrl+F and the excel's replace tool, as seen in the excel file 1e.xlsx. and in the image below.

![1e](/B/1e.png)

After substitution, it was necessary to check the number of TRUE and FALSE to ensure all data was correctly modified. If the sum of both wasn't equal to number of songs, there was a problem.

During substitution, when modifying cell contents, only TRUE and FALSE should remain, with no content before or after. To ensure this, '\*TRUE\*' was searched for and replaced with 'TRUE'. The same manipulation for FALSE.

**For textual data whose content needs modification:** modifications were made using Ctrl+F and the replace tool, as seen in the Excel document 1f.xlsx and in the image below.

![1e](/B/1e.png)

Beneficiaries' case (as you see in the image) required modifying content and making them booleans too. For example, to make booleans for 'Children': all other beneficiaries were removed by replacing them with empty. 
For instance, 'Adults' was replaced with empty. The same for 'Seniors' and 'Teenagers'. 
Then, 'Children' was replaced with TRUE. Empty cells left were set to FALSE in the next step.

### Step 2 : Modifications that had to be made to the Excel data

1g) Quand les données sont prêtes, je prend les deux colonnes ( la colonne des # et les données après la modification ) et je supprime tous les retours à la ligne en utilisant un outil sur internet  (https://www.textfixerfr.com/outils/outil-suppression-saut-de-ligne.php#google_vignette).

### 1h) Puis, dans un éditeur de texte ou de code (moi, sur XCODE), je vérifie encore une fois, si tout est bon. Par exemple, pour le cas des bénéficiaires, il y avait un 'Chidren' qui n'était pas devenu TRUE à cause de faute d'ortographe qu'il comportait. Je vérifie les choses comme ça, s'il y a des choses qui sont échappées de mes manipulations. 
Et les cellules vides sont devenus des '# #'. Je substitue tous les '# #' en '# FALSE #'. 

### 1i) Je contrôle le nombre des # et des TRUE & FALSE pour être sûre qu'il y a le bon nombre des données.

### 1j) J'amène ces données dans mon programme pour en utiliser et de produire le code SQL pour ajouter une colonne.

### 1l) Lors de chaque ajout de code SQL à Supabase : je crée des "new query"s pour pouvoir revenir à mes pas s'il y a qq chose qui ne va pas.

### 1k) Répetition des manipulations de 1c à 1j pour ajouter des colonnes à la BBD.

### 1l) Le 1er mai, je crée ce documentation sur GitHub pour expliquer mes faits.

Attention aussi : Au ' (car sql) il faut la remplacer par '' lors de contrôle au Xcode.
