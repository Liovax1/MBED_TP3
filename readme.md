# Modele de projet 

- Langage C
- Microcontrôleur Mbed
- Chaine de compilation croisée (i386 -> ARM)

## Branche master

Contient un squelette de projet à intégrer à VsCode

## Fichiers importants du projet template

**.vscode/launch.json** : Configuration de la chaîne de développement (gcc-arm, JLink)

**.vscode/tasks.json** : Appel à cmbed-cli et ses arguments

**.gitlab-ci.yml** : Fichier Gitlab-ci pour l'intégration continue

**main.cpp** : Fichier source principal du projet

**mbed-os.lib** : Adresse de la version de mbed-os à télécharger

**STM32F7x6.svd** : Fichier de définition du microcontroleur. Permet une vision des registres de celui-ci.

## QuickStart

- Cloner le projet

```shell
git clone https://gitlab.sn-kastler.fr/modeles/mbed6_template.git NOM_PROJET
```

- Se déplacer dans le répertoire du projet

```shell
cd NOM_PROJET
```

- Mettre à jour mbed-os

```shell
mbed deploy
```

- Ouvrir le dossier dans VsCODE

## Ressources Moodle

### Installation MBED

- [Installation Mbed et VSCode (Sous Ubuntu)](http://docs.sn-kastler.fr/docs/mbed/installation-de-la-chaine-de-compilation.html)
- [Installation MBED et VSCODE (sous Windows)](http://moodle.lyceekastler.fr/mod/page/view.php?id=1394)

### Gestion de projets et documentation MBED

- [Créer et gérer les projets mbed](http://docs.sn-kastler.fr/docs/mbed/gerer-les-projets-mbed.html)
- [Configurer et utiliser VSCode](http://docs.sn-kastler.fr/docs/mbed/vscode-et-les-projets-mbed.html)
- [Emulateur mbed](http://docs.sn-kastler.fr/docs/mbed/Emulateur_mbed.html)
