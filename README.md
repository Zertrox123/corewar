# Corewar

Machine virtuelle, ordonnanceur de processus et assembleur bytecode en C.

## Présentation

Corewar est un jeu de programmation bas niveau (B-CPE-200) dans lequel des programmes en assembleur s'affrontent au sein d'une arène mémoire circulaire partagée (6 Ko).

Le projet comprend deux composants clés :
- **Assembleur (`asm`)** : Traduit le code source assembleur (`.s`) en bytecode binaire exécutable (`.cor`).
- **Machine Virtuelle (`corewar`)** : Charge les champions en mémoire, ordonnance l'exécution de leurs processus instruction par instruction et décompte les cycles jusqu'au dernier survivant.

## Prérequis

- Compilateur C (GCC ou Clang)
- Make

## Compilation et Utilisation

```bash
# Compiler l'assembleur et la machine virtuelle
make

# Compiler un champion assembleur
./asm/asm champions/fluttershy.s

# Lancer le combat dans l'arène (supporte de 2 à 4 champions)
./corewar/corewar champions/fluttershy.cor champions/abel.cor

# Option de dump mémoire à un cycle précis
./corewar/corewar -dump 1500 champions/fluttershy.cor champions/abel.cor
```
