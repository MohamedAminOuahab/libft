# libft - Bibliothèque de fonctions 42

███╗ ██╗ ██████╗ ██╗ ██╗██╗██╗ ███████╗
████╗ ██║██╔═══██╗██║ ██║██║██║ ██╔════╝
██╔██╗ ██║██║ ██║██║ ██║██║██║ █████╗
██║╚██╗██║██║ ██║╚██╗ ██╔╝██║██║ ██╔══╝
██║ ╚████║╚██████╔╝ ╚████╔╝ ██║███████╗███████╗
╚═╝ ╚═══╝ ╚═════╝ ╚═══╝ ╚═╝╚══════╝╚══════╝


Bienvenue dans la libft - une bibliothèque de fonctions de base en C conçue pour les étudiants de 42.

## Description

La libft est une bibliothèque de fonctions en C qui contient des réimplémentations de certaines fonctions de la libc, ainsi que de nouvelles fonctions utiles pour le développement de projets en C. 
Cette bibliothèque est créée dans le cadre du cursus de l'école 42 pour encourager les étudiants à comprendre le fonctionnement interne des fonctions standard de la libc et à apprendre à coder des fonctions utiles.

## Fonctionnalités

- **ft_memset**: Remplit une zone de mémoire avec un octet donné.
- **ft_bzero**: Met à zéro les premiers n octets de la zone mémoire pointée.
- **ft_memcpy**: Copie n octets depuis la zone mémoire src vers la zone mémoire dest.
- **ft_memccpy**: Copie les octets de src vers dest jusqu'à ce qu'un octet donné soit trouvé.
- **ft_memmove**: Copie n octets de la zone de mémoire src vers la zone de mémoire dest.
- **ft_memchr**: Recherche la première occurrence de l'octet c dans les n premiers octets de la zone mémoire pointée par s.
- **ft_memcmp**: Compare les n premiers octets de deux zones de mémoire.
- **ft_strlen**: Calcule la longueur de la chaîne de caractères s.
- **ft_strdup**: Duplique une chaîne de caractères.
- **ft_strcpy**: Copie la chaîne de caractères src, y compris le caractère nul final, dans le tableau de caractères dest.
- **ft_strncpy**: Copie au plus n caractères de la chaîne src dans la chaîne dest.
- **ft_strcat**: Concatène la chaîne src à la fin de la chaîne dest.
- **ft_strncat**: Concatène les n premiers caractères de src à dest et ajoute le caractère nul de fin.
- **ft_strlcat**: Concatène les n premiers caractères de src à dest.
- **ft_strchr**: Recherche la première occurrence du caractère c dans la chaîne de caractères pointée par s.
- **ft_strrchr**: Recherche la dernière occurrence du caractère c dans la chaîne de caractères pointée par s.
- **ft_strstr**: Recherche la première occurrence de la sous-chaîne needle dans la chaîne haystack.
- **ft_strnstr**: Recherche les n premiers caractères de la sous-chaîne needle dans la chaîne haystack.
- **ft_strcmp**: Compare deux chaînes de caractères.
- **ft_strncmp**: Compare les n premiers caractères de deux chaînes de caractères.
- **ft_atoi**: Convertit une chaîne de caractères en entier.
- **ft_isalpha**: Vérifie si le caractère passé en argument est alphabétique.
- **ft_isdigit**: Vérifie si le caractère passé en argument est un chiffre décimal.
- **ft_isalnum**: Vérifie si le caractère passé en argument est alphanumérique.
- **ft_isascii**: Vérifie si le caractère passé en argument est un caractère ASCII.
- **ft_isprint**: Vérifie si le caractère passé en argument est imprimable.
- **ft_toupper**: Convertit une lettre minuscule en majuscule.
- **ft_tolower**: Convertit une lettre majuscule en minuscule.
- **ft_memalloc**: Alloue et retourne une zone de mémoire "fraîche" initialisée à 0.
- **ft_memdel**: Libère la mémoire d'une zone de mémoire allouée précédemment par ft_memalloc.
- **ft_strnew**: Alloue et retourne une chaîne de caractères "fraîche" terminée par un '\0'.
- **ft_strdel**: Libère la mémoire d'une chaîne de caractères allouée précédemment par ft_strnew.
- **ft_strclr**: Assigne la valeur '\0' à tous les caractères de la chaîne de caractères passée en argument.
- **ft_striter**: Applique la fonction f à chaque caractère de la chaîne de caractères passée en argument.
- **ft_striteri**: Applique la fonction f à chaque caractère de la chaîne de caractères passée en argument en précisant son index en premier argument.
- **ft_strmap**: Applique la fonction f à chaque caractère de la chaîne de caractères passée en argument pour créer une nouvelle chaîne de caractères avec malloc(3) résultant des applications successives de f.
- **ft_strmapi**: Applique la fonction f à chaque caractère de la chaîne de caractères passée en argument en précisant son index pour créer une nouvelle chaîne de caractères avec malloc(3) résultant des applications successives de f.
- **ft_strequ**: Compare lexicographiquement s1 et s2.
- **ft_strnequ**: Compare lexicographiquement s1 et s2 jusqu’à n caractères maximum.
- **ft_strsub**: Alloue et retourne la copie "fraîche" d’un tronçon de la chaîne de caractères passée en argument.
- **ft_strjoin**: Alloue et retourne une chaîne de caractères "fraîche" résultant de la concaténation de s1 et s2.
- **ft_strtrim**: Alloue et retourne une copie de la chaîne de caractères passée en argument sans les espaces blancs au début et à la fin de cette chaîne.
- **ft_strsplit**: Alloue et retourne un tableau "fraîchement" alloué
