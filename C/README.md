## Steps of my work from 6th May

### Step 1 : Connecting to FTP server
To be able to manipulate the files' names from my terminal (Mac), connected to FTP server using its SSH key :

```bash
  ssh nom_utilisateur@hôte
```
Hôte should be ssh link. For example : ssh-nom_utilisateur.hote.com

### Step 2 : Listing files
When it is connected, you should use the following command :
```bash
  find -type f
```
This command will find all the files and will list them.

For example, if you want to find only pdf files :
```bash
  find -type f -iname "*.pdf"
```
